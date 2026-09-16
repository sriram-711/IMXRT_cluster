/*
* Copyright 2023 NXP
* NXP Proprietary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lvgl.h"
#include "custom.h"
#include "gui_guider.h"

#if defined(SDK_DEBUGCONSOLE) || defined(CPU_MIMXRT1176DVMAA) || defined(BOARD_DEBUG_UART_BASEADDR) || defined(__arm__)
#include "fsl_debug_console.h"
#include "fsl_lpuart.h"
#include "board.h"
#define IS_EMBEDDED_TARGET 1
#else
#define IS_EMBEDDED_TARGET 0
#define PRINTF printf
#define USER_LED_INIT(x) ((void)0)
#define USER_LED_TOGGLE() ((void)0)
#define LOGIC_LED_OFF 0
#endif

// ==========================================
// 1. STATE VARIABLES
// ==========================================
static int current_speed = 0;
static int speed_direction = 1;
static lv_obj_t **gauge_segments[10];

// ==========================================
// 2. JETSON NANO BINARY FRAME PARSER STATE
// Frame format: [ 0xAA | LENGTH | DATA... | CHECKSUM | 0x55 ]
// ==========================================
typedef enum {
    FRAME_WAIT_HEADER = 0,
    FRAME_GET_LENGTH,
    FRAME_GET_DATA,
    FRAME_GET_CHECKSUM,
    FRAME_GET_FOOTER
} frame_state_t;

static frame_state_t rx_state = FRAME_WAIT_HEADER;
static uint8_t rx_length = 0;
static uint8_t rx_data_idx = 0;
static uint8_t rx_data[32];
static uint8_t rx_checksum = 0;

// ==========================================
// 3. HELPER FUNCTIONS
// ==========================================
static void adas_hide_all_obstacles(lv_ui *ui)
{
    if (ui->screen_Adas_ICar)  lv_obj_add_flag(ui->screen_Adas_ICar,  LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Adas_Truck) lv_obj_add_flag(ui->screen_Adas_Truck, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Adas_Bike)  lv_obj_add_flag(ui->screen_Adas_Bike,  LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Adas_Auto)  lv_obj_add_flag(ui->screen_Adas_Auto,  LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Adas_Bus)   lv_obj_add_flag(ui->screen_Adas_Bus,   LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Adas_Human) lv_obj_add_flag(ui->screen_Adas_Human, LV_OBJ_FLAG_HIDDEN);
}

// Update Dynamic Gear Indicator (N, 1, 2, 3, 4, 5) based on Speed (0 - 180 km/h)
static void update_gear_ui(lv_ui *ui, int speed)
{
    if (ui->screen_Gear_N) lv_obj_add_flag(ui->screen_Gear_N, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_R) lv_obj_add_flag(ui->screen_Gear_R, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_1) lv_obj_add_flag(ui->screen_Gear_1, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_2) lv_obj_add_flag(ui->screen_Gear_2, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_3) lv_obj_add_flag(ui->screen_Gear_3, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_4) lv_obj_add_flag(ui->screen_Gear_4, LV_OBJ_FLAG_HIDDEN);
    if (ui->screen_Gear_5) lv_obj_add_flag(ui->screen_Gear_5, LV_OBJ_FLAG_HIDDEN);

    if (speed <= 0) {
        // Speed 0: Neutral (N)
        if (ui->screen_Gear_N) lv_obj_clear_flag(ui->screen_Gear_N, LV_OBJ_FLAG_HIDDEN);
    } else if (speed <= 35) {
        // Speed 1 - 35: Gear 1
        if (ui->screen_Gear_1) lv_obj_clear_flag(ui->screen_Gear_1, LV_OBJ_FLAG_HIDDEN);
    } else if (speed <= 70) {
        // Speed 36 - 70: Gear 2
        if (ui->screen_Gear_2) lv_obj_clear_flag(ui->screen_Gear_2, LV_OBJ_FLAG_HIDDEN);
    } else if (speed <= 105) {
        // Speed 71 - 105: Gear 3
        if (ui->screen_Gear_3) lv_obj_clear_flag(ui->screen_Gear_3, LV_OBJ_FLAG_HIDDEN);
    } else if (speed <= 140) {
        // Speed 106 - 140: Gear 4
        if (ui->screen_Gear_4) lv_obj_clear_flag(ui->screen_Gear_4, LV_OBJ_FLAG_HIDDEN);
    } else {
        // Speed 141 - 180+: Gear 5
        if (ui->screen_Gear_5) lv_obj_clear_flag(ui->screen_Gear_5, LV_OBJ_FLAG_HIDDEN);
    }
}

// Update Speedometer UI (3-digit split display matching target UI, Red warning at 140+, Dynamic Gears)
static void update_speed_ui(lv_ui *ui, int speed)
{
    if (speed < 0) speed = 0;
    if (speed > 200) speed = 200;

    lv_color_t text_color = (speed >= 140) ? lv_color_hex(0xFF0000) : lv_color_hex(0xFFFFFF);

    int hundreds = (speed / 100) % 10;
    int tens     = (speed / 10) % 10;
    int units    = speed % 10;

    char h_str[4], t_str[4], u_str[4];
    snprintf(h_str, sizeof(h_str), "%d", hundreds);
    snprintf(t_str, sizeof(t_str), "%d", tens);
    snprintf(u_str, sizeof(u_str), "%d", units);

    if (ui->screen_KMPH_000) {
        lv_label_set_text(ui->screen_KMPH_000, h_str);
        lv_obj_set_style_text_color(ui->screen_KMPH_000, text_color, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_clear_flag(ui->screen_KMPH_000, LV_OBJ_FLAG_HIDDEN);
    }

    if (ui->screen_KMPH_00) {
        lv_label_set_text(ui->screen_KMPH_00, t_str);
        lv_obj_set_style_text_color(ui->screen_KMPH_00, text_color, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_clear_flag(ui->screen_KMPH_00, LV_OBJ_FLAG_HIDDEN);
    }

    if (ui->screen_KMPH_0) {
        lv_label_set_text(ui->screen_KMPH_0, u_str);
        lv_obj_set_style_text_color(ui->screen_KMPH_0, text_color, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_clear_flag(ui->screen_KMPH_0, LV_OBJ_FLAG_HIDDEN);
    }

    if (ui->screen_kmph_logo) {
        lv_obj_clear_flag(ui->screen_kmph_logo, LV_OBJ_FLAG_HIDDEN);
    }

    // Update real-time gear (N, 1, 2, 3, 4, 5)
    update_gear_ui(ui, speed);
}

// Map Jetson Class ID to Display Object
static void handle_jetson_detection(lv_ui *ui, int class_id)
{
    USER_LED_TOGGLE();

    adas_hide_all_obstacles(ui);

    switch (class_id) {
        case 1: // Human / Pedestrian
            if (ui->screen_Adas_Human) lv_obj_clear_flag(ui->screen_Adas_Human, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying HUMAN\r\n");
            break;

        case 2: // Bike
            if (ui->screen_Adas_Bike) lv_obj_clear_flag(ui->screen_Adas_Bike, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying BIKE\r\n");
            break;

        case 3: // Auto-rickshaw
            if (ui->screen_Adas_Auto) lv_obj_clear_flag(ui->screen_Adas_Auto, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying AUTO\r\n");
            break;

        case 4: // Car
            if (ui->screen_Adas_ICar) lv_obj_clear_flag(ui->screen_Adas_ICar, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying CAR\r\n");
            break;

        case 5: // Bus
            if (ui->screen_Adas_Bus) lv_obj_clear_flag(ui->screen_Adas_Bus, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying BUS\r\n");
            break;

        case 6: // Truck
            if (ui->screen_Adas_Truck) lv_obj_clear_flag(ui->screen_Adas_Truck, LV_OBJ_FLAG_HIDDEN);
            PRINTF("[Jetson RX] -> Displaying TRUCK\r\n");
            break;

        default: // 0 or None
            PRINTF("[Jetson RX] -> Cleared / None\r\n");
            break;
    }
}

// Process full valid frame from Jetson: AA | LEN | DATA | CHECKSUM | 55
static void process_jetson_frame(lv_ui *ui, uint8_t *data, uint8_t len)
{
    data[len] = '\0';
    int class_id = atoi((char *)data);
    handle_jetson_detection(ui, class_id);
}

// ==========================================
// 4. UART STATE-MACHINE BYTE RECEIVER
// ==========================================
static void uart_jetson_byte_received(lv_ui *ui, uint8_t byte)
{
    if (rx_state == FRAME_WAIT_HEADER) {
        if (byte == 0xAA) {
            rx_state = FRAME_GET_LENGTH;
        } else if (byte >= '0' && byte <= '9') {
            int direct_id = byte - '0';
            handle_jetson_detection(ui, direct_id);
        }
    }
    else if (rx_state == FRAME_GET_LENGTH) {
        rx_length = byte;
        rx_data_idx = 0;
        if (rx_length > 0 && rx_length < sizeof(rx_data) - 1) {
            rx_state = FRAME_GET_DATA;
        } else {
            rx_state = FRAME_WAIT_HEADER;
        }
    }
    else if (rx_state == FRAME_GET_DATA) {
        rx_data[rx_data_idx++] = byte;
        if (rx_data_idx >= rx_length) {
            rx_state = FRAME_GET_CHECKSUM;
        }
    }
    else if (rx_state == FRAME_GET_CHECKSUM) {
        rx_checksum = byte;

        uint8_t calc_sum = 0;
        for (int i = 0; i < rx_length; i++) {
            calc_sum += rx_data[i];
        }
        calc_sum &= 0xFF;

        if (calc_sum == rx_checksum) {
            rx_state = FRAME_GET_FOOTER;
        } else {
            rx_state = FRAME_WAIT_HEADER;
        }
    }
    else if (rx_state == FRAME_GET_FOOTER) {
        if (byte == 0x55) {
            process_jetson_frame(ui, rx_data, rx_length);
        }
        rx_state = FRAME_WAIT_HEADER;
    }
}

// Non-blocking UART polling timer (every 10ms)
static void uart_poll_timer_cb(lv_timer_t *timer)
{
    lv_ui *ui = (lv_ui *)timer->user_data;
#if IS_EMBEDDED_TARGET
    LPUART_Type *base = (LPUART_Type *)BOARD_DEBUG_UART_BASEADDR;

    uint32_t status = LPUART_GetStatusFlags(base);

    if (status & kLPUART_RxOverrunFlag) {
        LPUART_ClearStatusFlags(base, kLPUART_RxOverrunFlag);
    }

    while (kLPUART_RxDataRegFullFlag & LPUART_GetStatusFlags(base)) {
        uint8_t ch = LPUART_ReadByte(base);
        uart_jetson_byte_received(ui, ch);
    }
#else
    (void)ui;
#endif
}

// Speedometer background simulation timer (smoothly 0 -> 180 km/h)
static void speed_sim_timer_cb(lv_timer_t *timer)
{
    lv_ui *ui = (lv_ui *)timer->user_data;

    current_speed += speed_direction * 2;
    if (current_speed >= 180) {
        current_speed = 180;
        speed_direction = -1;
    } else if (current_speed <= 0) {
        current_speed = 0;
        speed_direction = 1;
    }

    update_speed_ui(ui, current_speed);
}

#if !IS_EMBEDDED_TARGET
// ADAS simulator demo cycling for PC simulation (cycles obstacles every 2.5s)
static void adas_sim_timer_cb(lv_timer_t *timer)
{
    lv_ui *ui = (lv_ui *)timer->user_data;
    static int sim_class_id = 0;
    sim_class_id = (sim_class_id + 1) % 7; // Cycles 1=Human, 2=Bike, 3=Auto, 4=Car, 5=Bus, 6=Truck, 0=None
    handle_jetson_detection(ui, sim_class_id);
}
#endif

// ==========================================
// 5. CUSTOM INIT
// ==========================================
void custom_init(lv_ui *ui)
{
    USER_LED_INIT(LOGIC_LED_OFF);

    // Link all 10 gauge bar segment pointers
    gauge_segments[0] = &ui->screen_Bt_1;
    gauge_segments[1] = &ui->screen_Bt_2;
    gauge_segments[2] = &ui->screen_Bt_3;
    gauge_segments[3] = &ui->screen_Bt_4;
    gauge_segments[4] = &ui->screen_Bt_5;
    gauge_segments[5] = &ui->screen_Bt_6;
    gauge_segments[6] = &ui->screen_Bt_7;
    gauge_segments[7] = &ui->screen_Bt_8;
    gauge_segments[8] = &ui->screen_Bt_9;
    gauge_segments[9] = &ui->screen_Bt_10;

    // Keep all 10 gauge segments permanently visible / full
    for (int i = 0; i < 10; i++) {
        if (gauge_segments[i] && *gauge_segments[i]) {
            lv_obj_clear_flag(*gauge_segments[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    // Start with all ADAS obstacles hidden
    adas_hide_all_obstacles(ui);

    // Speedometer disc layers setup (ensure solid blue center circle is clean and visible)
    if (ui->screen_Speedometer_Bg) {
        lv_obj_set_pos(ui->screen_Speedometer_Bg, 176, 98);
        lv_obj_set_size(ui->screen_Speedometer_Bg, 400, 400);
        lv_obj_move_foreground(ui->screen_Speedometer_Bg);
        lv_obj_clear_flag(ui->screen_Speedometer_Bg, LV_OBJ_FLAG_HIDDEN);
    }
    if (ui->screen_Speedometer_Speedbar) {
        lv_obj_set_pos(ui->screen_Speedometer_Speedbar, 176, 98);
        lv_obj_set_size(ui->screen_Speedometer_Speedbar, 400, 400);
        lv_obj_move_foreground(ui->screen_Speedometer_Speedbar);
        lv_obj_clear_flag(ui->screen_Speedometer_Speedbar, LV_OBJ_FLAG_HIDDEN);
    }

    // 3-Digit Speedometer Readout (Hundreds, Tens, Units)
    if (ui->screen_KMPH_000) {
        lv_obj_set_pos(ui->screen_KMPH_000, 273, 243);
        lv_obj_set_size(ui->screen_KMPH_000, 57, 76);
        lv_obj_set_style_text_align(ui->screen_KMPH_000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_move_foreground(ui->screen_KMPH_000);
        lv_obj_clear_flag(ui->screen_KMPH_000, LV_OBJ_FLAG_HIDDEN);
    }
    if (ui->screen_KMPH_00) {
        lv_obj_set_pos(ui->screen_KMPH_00, 349, 243);
        lv_obj_set_size(ui->screen_KMPH_00, 57, 76);
        lv_obj_set_style_text_align(ui->screen_KMPH_00, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_move_foreground(ui->screen_KMPH_00);
        lv_obj_clear_flag(ui->screen_KMPH_00, LV_OBJ_FLAG_HIDDEN);
    }
    if (ui->screen_KMPH_0) {
        lv_obj_set_pos(ui->screen_KMPH_0, 422, 243);
        lv_obj_set_size(ui->screen_KMPH_0, 57, 76);
        lv_obj_set_style_text_align(ui->screen_KMPH_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_move_foreground(ui->screen_KMPH_0);
        lv_obj_clear_flag(ui->screen_KMPH_0, LV_OBJ_FLAG_HIDDEN);
    }

    if (ui->screen_kmph_logo) {
        lv_obj_set_pos(ui->screen_kmph_logo, 315, 355);
        lv_obj_set_size(ui->screen_kmph_logo, 128, 45);
        lv_obj_move_foreground(ui->screen_kmph_logo);
        lv_obj_clear_flag(ui->screen_kmph_logo, LV_OBJ_FLAG_HIDDEN);
    }

    // Gear indicator and arrow in foreground
    if (ui->screen_Gear_Indicator) {
        lv_obj_set_pos(ui->screen_Gear_Indicator, 330, 475);
        lv_obj_move_foreground(ui->screen_Gear_Indicator);
        lv_obj_clear_flag(ui->screen_Gear_Indicator, LV_OBJ_FLAG_HIDDEN);
    }
    if (ui->screen_Gear_N) lv_obj_move_foreground(ui->screen_Gear_N);
    if (ui->screen_Gear_R) lv_obj_move_foreground(ui->screen_Gear_R);
    if (ui->screen_Gear_1) lv_obj_move_foreground(ui->screen_Gear_1);
    if (ui->screen_Gear_2) lv_obj_move_foreground(ui->screen_Gear_2);
    if (ui->screen_Gear_3) lv_obj_move_foreground(ui->screen_Gear_3);
    if (ui->screen_Gear_4) lv_obj_move_foreground(ui->screen_Gear_4);
    if (ui->screen_Gear_5) lv_obj_move_foreground(ui->screen_Gear_5);

    // Keep navigation buttons on top
    if (ui->screen_btn_1) lv_obj_move_foreground(ui->screen_btn_1);
    if (ui->screen_btn_2) lv_obj_move_foreground(ui->screen_btn_2);

    // Initialize speed and gear (Speed 0 -> "0 0 0", Gear N)
    update_speed_ui(ui, 0);

    // 1. Speed animation (50ms)
    lv_timer_create(speed_sim_timer_cb, 50, ui);

    // 2. UART Frame Parser (10ms)
    lv_timer_create(uart_poll_timer_cb, 10, ui);

#if !IS_EMBEDDED_TARGET
    // 3. ADAS Demo Cycling in PC Simulator (2500ms)
    lv_timer_create(adas_sim_timer_cb, 2500, ui);
#endif

    PRINTF("\r\n========================================\r\n");
    PRINTF("Cluster Ready! Dynamic 5-Speed Gear Indicator Active.\r\n");
    PRINTF("========================================\r\n");
}
