#!/usr/bin/env python3
"""
NVIDIA Jetson Nano -> NXP i.MX RT1170 Digital Dashboard UART Transmitter
========================================================================
Transmits real-time ADAS detection results, lane departure warnings,
and vehicle telemetry over serial to the NXP i.MX RT1170 cluster.

Wiring (Jetson Nano J41 Header <-> i.MX RT1170 EVKB):
  - Jetson Pin 8  (UART TX /dev/ttyTHS1) -> i.MX RT1170 RX (GPIO_AD_25 / J25 Pin 2)
  - Jetson Pin 10 (UART RX /dev/ttyTHS1) -> i.MX RT1170 TX (GPIO_AD_24 / J25 Pin 1)
  - Jetson Pin 6  (GND)                  -> i.MX RT1170 GND (J25 Pin 4)
  * OR use a USB-to-TTL UART adapter plugged into Jetson Nano (/dev/ttyUSB0)
"""

import time
import sys
import serial

class JetsonToRTCluster:
    """
    Driver to send ADAS and Telemetry packets to NXP i.MX RT1170 Dashboard.
    """
    def __init__(self, port="/dev/ttyTHS1", baudrate=115200, timeout=1):
        """
        Initialize Serial connection.
        Common ports on Jetson:
          - '/dev/ttyTHS1' (J41 40-Pin Header UART, Pins 8 & 10)
          - '/dev/ttyUSB0' (USB-to-UART converter cable)
          - 'COM3', 'COM4' (If testing from Windows PC)
        """
        self.port = port
        self.baudrate = baudrate
        try:
            self.ser = serial.Serial(self.port, self.baudrate, timeout=timeout)
            print(f"[SUCCESS] Connected to i.MX RT Dashboard on {self.port} @ {self.baudrate} baud")
        except Exception as e:
            print(f"[ERROR] Could not open {self.port}: {e}")
            print("Tip: If using Jetson 40-pin header, ensure user is in 'dialout' group: sudo usermod -a -G dialout $USER")
            sys.exit(1)

    def send_packet(self, obstacle="NONE", lane="NORMAL", speed=0):
        """
        Send complete telemetry packet.
        Format: $ADAS,<OBSTACLE>,<LANE>,<SPEED>\n
        
        Args:
          obstacle (str): 'CAR', 'TRUCK', 'BIKE', 'AUTO', 'BUS', 'HUMAN', or 'NONE'
          lane (str):     'NORMAL', 'LEFT' (Red Left Lane), 'RIGHT' (Red Right Lane), 'BOTH'
          speed (int):    0 to 200 (km/h)
        """
        packet = f"$ADAS,{obstacle.upper()},{lane.upper()},{int(speed)}\n"
        self.ser.write(packet.encode('ascii'))
        self.ser.flush()
        print(f"[TX] {packet.strip()}")

    def set_speed(self, speed):
        """Set only speed (e.g. 'S80\n')"""
        packet = f"S{int(speed)}\n"
        self.ser.write(packet.encode('ascii'))
        self.ser.flush()

    def set_obstacle(self, obstacle):
        """Set obstacle only ('CAR', 'TRUCK', 'BIKE', 'AUTO', 'BUS', 'HUMAN', 'CLEAR')"""
        packet = f"{obstacle.upper()}\n"
        self.ser.write(packet.encode('ascii'))
        self.ser.flush()

    def set_lane_alert(self, alert_type):
        """Set lane warning ('LL' for Left Red, 'RL' for Right Red, 'NL' for Normal)"""
        packet = f"{alert_type.upper()}\n"
        self.ser.write(packet.encode('ascii'))
        self.ser.flush()

    def close(self):
        if self.ser and self.ser.is_open:
            self.ser.close()


# =====================================================================
# EXAMPLE: Standalone Demo & Test Mode
# =====================================================================
def run_test_demo(cluster):
    print("\n--- Running Automated ADAS & Speed Test Sequence ---")
    
    test_scenarios = [
        # (Obstacle, Lane, Speed, Description)
        ("NONE",   "NORMAL",  0,   "Starting Vehicle at 0 km/h"),
        ("CAR",    "NORMAL",  45,  "Lead Car detected ahead, speed 45 km/h"),
        ("CAR",    "NORMAL",  75,  "Cruising behind Car, speed 75 km/h"),
        ("TRUCK",  "NORMAL",  60,  "Approaching Truck, speed 60 km/h"),
        ("TRUCK",  "LEFT",    60,  "Lane Drift Alert! Left Lane RED"),
        ("TRUCK",  "NORMAL",  60,  "Back in lane, Normal white lanes"),
        ("BIKE",   "NORMAL",  35,  "Motorcycle detected on right"),
        ("AUTO",   "NORMAL",  40,  "Auto-rickshaw in front"),
        ("BUS",    "NORMAL",  55,  "Bus detected ahead"),
        ("HUMAN",  "NORMAL",  25,  "Pedestrian / Human crossing alert!"),
        ("NONE",   "NORMAL",  120, "Open highway, accelerating to 120 km/h"),
        ("NONE",   "NORMAL",  155, "High Speed! 155 km/h (RED WARNING)"),
        ("NONE",   "RIGHT",   155, "High Speed + Right Lane Drift Alert!"),
        ("NONE",   "NORMAL",  90,  "Decelerating to 90 km/h (Normal White)"),
        ("NONE",   "NORMAL",  0,   "Vehicle Stopped (0 km/h)"),
    ]

    for obs, lane, spd, desc in test_scenarios:
        print(f"\n>>> Scenario: {desc}")
        cluster.send_packet(obstacle=obs, lane=lane, speed=spd)
        time.sleep(2.5)

    print("\n--- Test Sequence Finished! ---")


# =====================================================================
# MAIN ENTRY POINT
# =====================================================================
if __name__ == "__main__":
    # Select port based on command-line argument or default
    port_name = sys.argv[1] if len(sys.argv) > 1 else "/dev/ttyTHS1"
    
    cluster = JetsonToRTCluster(port=port_name, baudrate=115200)

    print("\nSelect Mode:")
    print(" 1. Run Automated Test Demo")
    print(" 2. Interactive Manual Mode (Type commands)")
    
    choice = input("Enter choice (1 or 2, default 1): ").strip()
    
    if choice == "2":
        print("\nInteractive Mode. Examples to type:")
        print("  - $ADAS,CAR,NORMAL,60")
        print("  - $ADAS,TRUCK,LEFT,80")
        print("  - $ADAS,HUMAN,NORMAL,30")
        print("  - $ADAS,NONE,NORMAL,150")
        print("  - Type 'q' to quit\n")
        try:
            while True:
                cmd = input("Send to RT1170 >> ").strip()
                if cmd.lower() == 'q':
                    break
                if cmd:
                    cluster.ser.write((cmd + "\n").encode('ascii'))
                    cluster.ser.flush()
        except KeyboardInterrupt:
            pass
    else:
        try:
            while True:
                run_test_demo(cluster)
                print("\nRestarting demo in 3 seconds (Press Ctrl+C to stop)...")
                time.sleep(3)
        except KeyboardInterrupt:
            print("\nDemo stopped.")

    cluster.close()
