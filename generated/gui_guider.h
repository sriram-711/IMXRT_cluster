/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *screen_1_img_1;
	lv_obj_t *screen_1_img_2;
	lv_obj_t *screen_1_img_3;
	lv_obj_t *screen_1_label_1;
	lv_obj_t *screen_1_label_2;
	lv_obj_t *screen_1_label_3;
	lv_obj_t *screen_1_label_4;
	lv_obj_t *screen_1_img_4;
	lv_obj_t *screen_1_img_5;
	lv_obj_t *screen_1_img_6;
	lv_obj_t *screen_1_img_7;
	lv_obj_t *screen_1_img_8;
	lv_obj_t *screen_1_img_9;
	lv_obj_t *screen_1_img_10;
	lv_obj_t *screen_1_img_11;
	lv_obj_t *screen_1_img_12;
	lv_obj_t *screen_1_btn_1;
	lv_obj_t *screen_1_btn_1_label;
	lv_obj_t *screen_1_btn_2;
	lv_obj_t *screen_1_btn_2_label;
	lv_obj_t *screen_1_img_13;
	lv_obj_t *screen_1_img_14;
	lv_obj_t *screen_1_img_15;
	lv_obj_t *screen_1_img_16;
	lv_obj_t *screen_1_img_17;
	lv_obj_t *screen_1_img_18;
	lv_obj_t *screen_1_img_20;
	lv_obj_t *screen_1_img_19;
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_Cluster_Background;
	lv_obj_t *screen_Speedometer_Bg;
	lv_obj_t *screen_Speedometer_Speedbar;
	lv_obj_t *screen_Speedometer_Mode;
	lv_obj_t *screen_ADAS_Bg;
	lv_obj_t *screen_Segula_Log;
	lv_obj_t *screen_Tripmeter_Bg;
	lv_obj_t *screen_Adas_Car;
	lv_obj_t *screen_Tripmeter;
	lv_obj_t *screen_TripA_00000;
	lv_obj_t *screen_TripA_0000;
	lv_obj_t *screen_TripA_000;
	lv_obj_t *screen_TripA_00;
	lv_obj_t *screen_TripMeter_KM;
	lv_obj_t *screen_TripA_0;
	lv_obj_t *screen_Adas_LLane;
	lv_obj_t *screen_Adas_RLane;
	lv_obj_t *screen_ODO_00000;
	lv_obj_t *screen_ODO_0000;
	lv_obj_t *screen_ODO_000;
	lv_obj_t *screen_ODO_00;
	lv_obj_t *screen_ODO_0;
	lv_obj_t *screen_TripA_10000;
	lv_obj_t *screen_TripA_20000;
	lv_obj_t *screen_TripA_30000;
	lv_obj_t *screen_TripA_40000;
	lv_obj_t *screen_TripA_50000;
	lv_obj_t *screen_TripA_60000;
	lv_obj_t *screen_TripA_70000;
	lv_obj_t *screen_TripA_80000;
	lv_obj_t *screen_TripA_90000;
	lv_obj_t *screen_TripA_1000;
	lv_obj_t *screen_TripA_2000;
	lv_obj_t *screen_TripA_3000;
	lv_obj_t *screen_TripA_4000;
	lv_obj_t *screen_TripA_5000;
	lv_obj_t *screen_TripA_6000;
	lv_obj_t *screen_TripA_7000;
	lv_obj_t *screen_TripA_8000;
	lv_obj_t *screen_TripA_9000;
	lv_obj_t *screen_TripA_100;
	lv_obj_t *screen_TripA_200;
	lv_obj_t *screen_TripA_300;
	lv_obj_t *screen_TripA_400;
	lv_obj_t *screen_TripA_500;
	lv_obj_t *screen_TripA_600;
	lv_obj_t *screen_TripA_700;
	lv_obj_t *screen_TripA_800;
	lv_obj_t *screen_TripA_900;
	lv_obj_t *screen_TripA_10;
	lv_obj_t *screen_TripA_20;
	lv_obj_t *screen_TripA_30;
	lv_obj_t *screen_TripA_40;
	lv_obj_t *screen_TripA_50;
	lv_obj_t *screen_TripA_60;
	lv_obj_t *screen_TripA_70;
	lv_obj_t *screen_TripA_80;
	lv_obj_t *screen_TripA_90;
	lv_obj_t *screen_TripA_1;
	lv_obj_t *screen_TripA_2;
	lv_obj_t *screen_TripA_3;
	lv_obj_t *screen_TripA_4;
	lv_obj_t *screen_TripA_5;
	lv_obj_t *screen_TripA_6;
	lv_obj_t *screen_TripA_7;
	lv_obj_t *screen_TripA_8;
	lv_obj_t *screen_TripA_9;
	lv_obj_t *screen_ODO_10000;
	lv_obj_t *screen_ODO_20000;
	lv_obj_t *screen_ODO_30000;
	lv_obj_t *screen_ODO_40000;
	lv_obj_t *screen_ODO_50000;
	lv_obj_t *screen_ODO_60000;
	lv_obj_t *screen_ODO_70000;
	lv_obj_t *screen_ODO_80000;
	lv_obj_t *screen_ODO_90000;
	lv_obj_t *screen_ODO_1000;
	lv_obj_t *screen_ODO_2000;
	lv_obj_t *screen_ODO_3000;
	lv_obj_t *screen_ODO_4000;
	lv_obj_t *screen_ODO_5000;
	lv_obj_t *screen_ODO_6000;
	lv_obj_t *screen_ODO_7000;
	lv_obj_t *screen_ODO_8000;
	lv_obj_t *screen_ODO_9000;
	lv_obj_t *screen_ODO_100;
	lv_obj_t *screen_ODO_200;
	lv_obj_t *screen_ODO_300;
	lv_obj_t *screen_ODO_400;
	lv_obj_t *screen_ODO_500;
	lv_obj_t *screen_ODO_600;
	lv_obj_t *screen_ODO_700;
	lv_obj_t *screen_ODO_800;
	lv_obj_t *screen_ODO_900;
	lv_obj_t *screen_ODO_10;
	lv_obj_t *screen_ODO_20;
	lv_obj_t *screen_ODO_30;
	lv_obj_t *screen_ODO_40;
	lv_obj_t *screen_ODO_50;
	lv_obj_t *screen_ODO_60;
	lv_obj_t *screen_ODO_70;
	lv_obj_t *screen_ODO_80;
	lv_obj_t *screen_ODO_90;
	lv_obj_t *screen_ODO_1;
	lv_obj_t *screen_ODO_2;
	lv_obj_t *screen_ODO_3;
	lv_obj_t *screen_ODO_4;
	lv_obj_t *screen_ODO_5;
	lv_obj_t *screen_ODO_6;
	lv_obj_t *screen_ODO_7;
	lv_obj_t *screen_ODO_8;
	lv_obj_t *screen_ODO_9;
	lv_obj_t *screen_KMPH_000;
	lv_obj_t *screen_KMPH_00;
	lv_obj_t *screen_KMPH_0;
	lv_obj_t *screen_kmph_logo;
	lv_obj_t *screen_Gear_Indicator;
	lv_obj_t *screen_Gear_N;
	lv_obj_t *screen_Gear_R;
	lv_obj_t *screen_Gear_1;
	lv_obj_t *screen_Gear_2;
	lv_obj_t *screen_Gear_3;
	lv_obj_t *screen_Gear_4;
	lv_obj_t *screen_Gear_5;
	lv_obj_t *screen_ECO_Mode;
	lv_obj_t *screen_AUTO_Mode;
	lv_obj_t *screen_POWER_Mode;
	lv_obj_t *screen_Bt_1;
	lv_obj_t *screen_Bt_2;
	lv_obj_t *screen_Bt_3;
	lv_obj_t *screen_Bt_4;
	lv_obj_t *screen_Bt_5;
	lv_obj_t *screen_Bt_6;
	lv_obj_t *screen_Bt_7;
	lv_obj_t *screen_Bt_8;
	lv_obj_t *screen_Bt_9;
	lv_obj_t *screen_Bt_10;
	lv_obj_t *screen_KMPH_100;
	lv_obj_t *screen_KMPH_200;
	lv_obj_t *screen_KMPH_300;
	lv_obj_t *screen_KMPH_400;
	lv_obj_t *screen_KMPH_500;
	lv_obj_t *screen_KMPH_600;
	lv_obj_t *screen_KMPH_700;
	lv_obj_t *screen_KMPH_800;
	lv_obj_t *screen_KMPH_900;
	lv_obj_t *screen_KMPH_10;
	lv_obj_t *screen_KMPH_20;
	lv_obj_t *screen_KMPH_30;
	lv_obj_t *screen_KMPH_40;
	lv_obj_t *screen_KMPH_50;
	lv_obj_t *screen_KMPH_60;
	lv_obj_t *screen_KMPH_70;
	lv_obj_t *screen_KMPH_80;
	lv_obj_t *screen_KMPH_90;
	lv_obj_t *screen_KMPH_1;
	lv_obj_t *screen_KMPH_2;
	lv_obj_t *screen_KMPH_3;
	lv_obj_t *screen_KMPH_4;
	lv_obj_t *screen_KMPH_5;
	lv_obj_t *screen_KMPH_6;
	lv_obj_t *screen_KMPH_7;
	lv_obj_t *screen_KMPH_8;
	lv_obj_t *screen_KMPH_9;
	lv_obj_t *screen_Power_Icon;
	lv_obj_t *screen_Adas_Human;
	lv_obj_t *screen_Adas_ICar;
	lv_obj_t *screen_Adas_Truck;
	lv_obj_t *screen_Adas_Bike;
	lv_obj_t *screen_Adas_Auto;
	lv_obj_t *screen_Adas_Bus;
	lv_obj_t *screen_Battery;
	lv_obj_t *screen_ADAS;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
	lv_obj_t *screen_btn_2;
	lv_obj_t *screen_btn_2_label;
	lv_obj_t *screen_Adas_Human2;
	lv_obj_t *screen_Adas_Bike2;
	lv_obj_t *screen_Adas_Auto2;
	lv_obj_t *screen_Adas_ICar2;
	lv_obj_t *screen_Adas_Bus2;
	lv_obj_t *screen_Adas_Truck2;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen(lv_ui *ui);
LV_IMG_DECLARE(_screenBackground_alpha_1280x720);
LV_IMG_DECLARE(_Segula_Logo_alpha_719x407);
LV_IMG_DECLARE(_car_alpha_500x400);
LV_IMG_DECLARE(_door1_alpha_500x432);
LV_IMG_DECLARE(_door2_alpha_500x432);
LV_IMG_DECLARE(_door3_alpha_581x369);
LV_IMG_DECLARE(_door4_alpha_558x432);
LV_IMG_DECLARE(_door5_alpha_610x478);
LV_IMG_DECLARE(_door6_alpha_600x426);
LV_IMG_DECLARE(_door7_alpha_568x494);
LV_IMG_DECLARE(_door8_alpha_643x442);
LV_IMG_DECLARE(_door9_alpha_653x431);

LV_IMG_DECLARE(_gearindicatorArrow_Left_40x40);

LV_IMG_DECLARE(_gearindicatorArrow_Right_40x40);
LV_IMG_DECLARE(_P1_Bg_alpha_316x339);
LV_IMG_DECLARE(_P4_Bg_alpha_316x339);
LV_IMG_DECLARE(_P3_Bg_alpha_316x339);
LV_IMG_DECLARE(_P2_Bg_alpha_316x339);
LV_IMG_DECLARE(_B1_alpha_316x335);
LV_IMG_DECLARE(_B2_Bg_alpha_339x340);
LV_IMG_DECLARE(_B4_Bg_alpha_316x339);
LV_IMG_DECLARE(_B3_Bg_alpha_316x339);
LV_IMG_DECLARE(_screenBackground_alpha_1280x720);
LV_IMG_DECLARE(_Speedo_Gauge_Center_Circle_alpha_400x400);
LV_IMG_DECLARE(_speedometerBackground_alpha_400x400);
LV_IMG_DECLARE(_NewspeedometerRing_alpha_632x484);
LV_IMG_DECLARE(_AdasBg_alpha_383x536);
LV_IMG_DECLARE(_Segula_Logo_alpha_660x460);
LV_IMG_DECLARE(_Tripmeter_alpha_450x119);
LV_IMG_DECLARE(_CarWBg_alpha_58x97);
LV_IMG_DECLARE(_lane_alpha_16x417);
LV_IMG_DECLARE(_lane_alpha_16x417);
LV_IMG_DECLARE(_gearindicatorArrow_alpha_37x33);
LV_IMG_DECLARE(_eco_alpha_152x181);
LV_IMG_DECLARE(_auto_alpha_98x158);
LV_IMG_DECLARE(_power_alpha_158x197);
LV_IMG_DECLARE(_1_alpha_96x89);
LV_IMG_DECLARE(_2_alpha_100x81);
LV_IMG_DECLARE(_3_alpha_103x69);
LV_IMG_DECLARE(_4_alpha_101x57);
LV_IMG_DECLARE(_5_alpha_97x43);
LV_IMG_DECLARE(_6_alpha_97x49);
LV_IMG_DECLARE(_7_alpha_99x63);
LV_IMG_DECLARE(_8_alpha_99x77);
LV_IMG_DECLARE(_9_alpha_97x83);
LV_IMG_DECLARE(_10_alpha_93x89);
LV_IMG_DECLARE(_powerIcon_alpha_64x64);
LV_IMG_DECLARE(_Human_Bg_alpha_88x95);
LV_IMG_DECLARE(_Car_Bg_alpha_85x73);
LV_IMG_DECLARE(_Truck_Bg_alpha_85x84);
LV_IMG_DECLARE(_Bike_Bg_alpha_75x74);
LV_IMG_DECLARE(_Auto_Bg_alpha_75x68);
LV_IMG_DECLARE(_Bus_bg_alpha_87x79);
LV_IMG_DECLARE(_speedometerRing_alpha_121x100);

LV_IMG_DECLARE(_gearindicatorArrow_Left_40x40);

LV_IMG_DECLARE(_gearindicatorArrow_Right_40x40);
LV_IMG_DECLARE(_Human_Bg_alpha_88x95);
LV_IMG_DECLARE(_Bike_Bg_alpha_75x74);
LV_IMG_DECLARE(_Auto_Bg_alpha_75x68);
LV_IMG_DECLARE(_Car_Bg_alpha_85x73);
LV_IMG_DECLARE(_Bus_bg_alpha_87x79);
LV_IMG_DECLARE(_Truck_Bg_alpha_85x84);

LV_FONT_DECLARE(lv_font_montserratMedium_28)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_FontAwesome5_35)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_32)
LV_FONT_DECLARE(lv_font_montserratMedium_26)
LV_FONT_DECLARE(lv_font_Antonio_Regular_75)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_36)
LV_FONT_DECLARE(lv_font_FontAwesome5_47)


#ifdef __cplusplus
}
#endif
#endif
