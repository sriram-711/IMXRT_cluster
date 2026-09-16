/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen(lv_ui *ui)
{
    //Write codes screen
    ui->screen = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Cluster_Background
    ui->screen_Cluster_Background = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Cluster_Background, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Cluster_Background, &_screenBackground_alpha_1280x720);
    lv_img_set_pivot(ui->screen_Cluster_Background, 50,50);
    lv_img_set_angle(ui->screen_Cluster_Background, 0);
    lv_obj_set_pos(ui->screen_Cluster_Background, 0, 0);
    lv_obj_set_size(ui->screen_Cluster_Background, 1280, 720);

    //Write style for screen_Cluster_Background, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Cluster_Background, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Cluster_Background, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Cluster_Background, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Cluster_Background, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Speedometer_Bg
    ui->screen_Speedometer_Bg = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Speedometer_Bg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Speedometer_Bg, &_Speedo_Gauge_Center_Circle_alpha_400x400);
    lv_img_set_pivot(ui->screen_Speedometer_Bg, 50,50);
    lv_img_set_angle(ui->screen_Speedometer_Bg, 0);
    lv_obj_set_pos(ui->screen_Speedometer_Bg, 176, 85);
    lv_obj_set_size(ui->screen_Speedometer_Bg, 400, 400);

    //Write style for screen_Speedometer_Bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Speedometer_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Speedometer_Bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Speedometer_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Speedometer_Bg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Speedometer_Speedbar
    ui->screen_Speedometer_Speedbar = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Speedometer_Speedbar, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Speedometer_Speedbar, &_speedometerBackground_alpha_400x400);
    lv_img_set_pivot(ui->screen_Speedometer_Speedbar, 50,50);
    lv_img_set_angle(ui->screen_Speedometer_Speedbar, 0);
    lv_obj_set_pos(ui->screen_Speedometer_Speedbar, 176, 98);
    lv_obj_set_size(ui->screen_Speedometer_Speedbar, 400, 400);

    //Write style for screen_Speedometer_Speedbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Speedometer_Speedbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Speedometer_Speedbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Speedometer_Speedbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Speedometer_Speedbar, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Speedometer_Mode
    ui->screen_Speedometer_Mode = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Speedometer_Mode, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Speedometer_Mode, &_NewspeedometerRing_alpha_632x484);
    lv_img_set_pivot(ui->screen_Speedometer_Mode, 50,50);
    lv_img_set_angle(ui->screen_Speedometer_Mode, 0);
    lv_obj_set_pos(ui->screen_Speedometer_Mode, 60, 69);
    lv_obj_set_size(ui->screen_Speedometer_Mode, 632, 484);

    //Write style for screen_Speedometer_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Speedometer_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Speedometer_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Speedometer_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Speedometer_Mode, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ADAS_Bg
    ui->screen_ADAS_Bg = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_ADAS_Bg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_ADAS_Bg, &_AdasBg_alpha_383x536);
    lv_img_set_pivot(ui->screen_ADAS_Bg, 50,50);
    lv_img_set_angle(ui->screen_ADAS_Bg, 0);
    lv_obj_set_pos(ui->screen_ADAS_Bg, 821, 35);
    lv_obj_set_size(ui->screen_ADAS_Bg, 383, 536);

    //Write style for screen_ADAS_Bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_ADAS_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_ADAS_Bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ADAS_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_ADAS_Bg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Segula_Log
    ui->screen_Segula_Log = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Segula_Log, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Segula_Log, &_Segula_Logo_alpha_660x460);
    lv_img_set_pivot(ui->screen_Segula_Log, 50,50);
    lv_img_set_angle(ui->screen_Segula_Log, 0);
    lv_obj_set_pos(ui->screen_Segula_Log, 76, 351);
    lv_obj_set_size(ui->screen_Segula_Log, 660, 460);

    //Write style for screen_Segula_Log, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Segula_Log, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Segula_Log, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Segula_Log, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Segula_Log, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Tripmeter_Bg
    ui->screen_Tripmeter_Bg = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Tripmeter_Bg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Tripmeter_Bg, &_Tripmeter_alpha_450x119);
    lv_img_set_pivot(ui->screen_Tripmeter_Bg, 50,50);
    lv_img_set_angle(ui->screen_Tripmeter_Bg, 0);
    lv_obj_set_pos(ui->screen_Tripmeter_Bg, 785, 558);
    lv_obj_set_size(ui->screen_Tripmeter_Bg, 450, 119);

    //Write style for screen_Tripmeter_Bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Tripmeter_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Tripmeter_Bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Tripmeter_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Tripmeter_Bg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Car
    ui->screen_Adas_Car = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Car, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Car, &_CarWBg_alpha_58x97);
    lv_img_set_pivot(ui->screen_Adas_Car, 50,50);
    lv_img_set_angle(ui->screen_Adas_Car, 0);
    lv_obj_set_pos(ui->screen_Adas_Car, 979, 243);
    lv_obj_set_size(ui->screen_Adas_Car, 58, 97);

    //Write style for screen_Adas_Car, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Car, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Car, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Car, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Car, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Tripmeter
    ui->screen_Tripmeter = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Tripmeter, "TripA            ODO");
    lv_label_set_long_mode(ui->screen_Tripmeter, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Tripmeter, 833, 563);
    lv_obj_set_size(ui->screen_Tripmeter, 353, 36);

    //Write style for screen_Tripmeter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Tripmeter, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Tripmeter, &lv_font_FontAwesome5_35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Tripmeter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Tripmeter, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Tripmeter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_00000
    ui->screen_TripA_00000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_00000, "0");
    lv_label_set_long_mode(ui->screen_TripA_00000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_00000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_00000, 23, 31);

    //Write style for screen_TripA_00000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_00000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_00000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_00000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_00000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_0000
    ui->screen_TripA_0000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_0000, "0");
    lv_label_set_long_mode(ui->screen_TripA_0000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_0000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_0000, 23, 31);

    //Write style for screen_TripA_0000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_0000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_0000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_0000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_0000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_000
    ui->screen_TripA_000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_000, "0");
    lv_label_set_long_mode(ui->screen_TripA_000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_000, 883, 609);
    lv_obj_set_size(ui->screen_TripA_000, 23, 31);

    //Write style for screen_TripA_000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_00
    ui->screen_TripA_00 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_00, "0");
    lv_label_set_long_mode(ui->screen_TripA_00, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_00, 922, 609);
    lv_obj_set_size(ui->screen_TripA_00, 23, 31);

    //Write style for screen_TripA_00, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_00, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_00, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_00, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_00, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripMeter_KM
    ui->screen_TripMeter_KM = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripMeter_KM, "km                            km");
    lv_label_set_long_mode(ui->screen_TripMeter_KM, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripMeter_KM, 860, 651);
    lv_obj_set_size(ui->screen_TripMeter_KM, 331, 36);

    //Write style for screen_TripMeter_KM, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripMeter_KM, lv_color_hex(0x0e98e0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripMeter_KM, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripMeter_KM, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripMeter_KM, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripMeter_KM, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_0
    ui->screen_TripA_0 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_0, "0");
    lv_label_set_long_mode(ui->screen_TripA_0, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_0, 959, 609);
    lv_obj_set_size(ui->screen_TripA_0, 23, 31);

    //Write style for screen_TripA_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_0, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_LLane
    ui->screen_Adas_LLane = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_LLane, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_LLane, &_lane_alpha_16x417);
    lv_img_set_pivot(ui->screen_Adas_LLane, 50,50);
    lv_img_set_angle(ui->screen_Adas_LLane, 0);
    lv_obj_set_pos(ui->screen_Adas_LLane, 952, 80);
    lv_obj_set_size(ui->screen_Adas_LLane, 16, 417);

    //Write style for screen_Adas_LLane, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_LLane, 218, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->screen_Adas_LLane, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_LLane, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_LLane, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_LLane, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_RLane
    ui->screen_Adas_RLane = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_RLane, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_RLane, &_lane_alpha_16x417);
    lv_img_set_pivot(ui->screen_Adas_RLane, 50,50);
    lv_img_set_angle(ui->screen_Adas_RLane, 0);
    lv_obj_set_pos(ui->screen_Adas_RLane, 1053, 80);
    lv_obj_set_size(ui->screen_Adas_RLane, 16, 417);

    //Write style for screen_Adas_RLane, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_RLane, 218, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->screen_Adas_RLane, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_RLane, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_RLane, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_RLane, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_00000
    ui->screen_ODO_00000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_00000, "0");
    lv_label_set_long_mode(ui->screen_ODO_00000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_00000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_00000, 23, 31);

    //Write style for screen_ODO_00000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_00000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_00000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_00000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_00000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_00000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_0000
    ui->screen_ODO_0000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_0000, "0");
    lv_label_set_long_mode(ui->screen_ODO_0000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_0000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_0000, 23, 31);

    //Write style for screen_ODO_0000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_0000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_0000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_0000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_0000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_0000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_000
    ui->screen_ODO_000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_000, "0");
    lv_label_set_long_mode(ui->screen_ODO_000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_000, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_000, 23, 31);

    //Write style for screen_ODO_000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_00
    ui->screen_ODO_00 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_00, "0");
    lv_label_set_long_mode(ui->screen_ODO_00, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_00, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_00, 23, 31);

    //Write style for screen_ODO_00, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_00, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_00, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_00, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_00, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_0
    ui->screen_ODO_0 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_0, "0");
    lv_label_set_long_mode(ui->screen_ODO_0, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_0, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_0, 23, 31);

    //Write style for screen_ODO_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_0, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_10000
    ui->screen_TripA_10000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_10000, "1");
    lv_label_set_long_mode(ui->screen_TripA_10000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_10000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_10000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_10000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_10000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_10000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_10000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_10000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_10000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_20000
    ui->screen_TripA_20000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_20000, "2");
    lv_label_set_long_mode(ui->screen_TripA_20000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_20000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_20000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_20000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_20000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_20000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_20000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_20000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_20000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_30000
    ui->screen_TripA_30000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_30000, "3");
    lv_label_set_long_mode(ui->screen_TripA_30000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_30000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_30000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_30000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_30000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_30000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_30000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_30000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_30000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_40000
    ui->screen_TripA_40000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_40000, "4");
    lv_label_set_long_mode(ui->screen_TripA_40000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_40000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_40000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_40000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_40000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_40000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_40000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_40000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_40000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_50000
    ui->screen_TripA_50000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_50000, "5");
    lv_label_set_long_mode(ui->screen_TripA_50000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_50000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_50000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_50000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_50000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_50000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_50000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_50000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_50000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_60000
    ui->screen_TripA_60000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_60000, "6");
    lv_label_set_long_mode(ui->screen_TripA_60000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_60000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_60000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_60000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_60000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_60000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_60000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_60000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_60000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_70000
    ui->screen_TripA_70000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_70000, "7");
    lv_label_set_long_mode(ui->screen_TripA_70000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_70000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_70000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_70000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_70000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_70000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_70000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_70000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_70000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_80000
    ui->screen_TripA_80000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_80000, "8");
    lv_label_set_long_mode(ui->screen_TripA_80000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_80000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_80000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_80000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_80000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_80000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_80000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_80000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_80000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_90000
    ui->screen_TripA_90000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_90000, "9");
    lv_label_set_long_mode(ui->screen_TripA_90000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_90000, 810, 609);
    lv_obj_set_size(ui->screen_TripA_90000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_90000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_90000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_90000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_90000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_90000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_90000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_1000
    ui->screen_TripA_1000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_1000, "1");
    lv_label_set_long_mode(ui->screen_TripA_1000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_1000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_1000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_1000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_1000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_1000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_1000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_1000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_1000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_2000
    ui->screen_TripA_2000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_2000, "2");
    lv_label_set_long_mode(ui->screen_TripA_2000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_2000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_2000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_2000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_2000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_2000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_2000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_2000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_2000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_3000
    ui->screen_TripA_3000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_3000, "3");
    lv_label_set_long_mode(ui->screen_TripA_3000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_3000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_3000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_3000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_3000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_3000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_3000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_3000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_3000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_4000
    ui->screen_TripA_4000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_4000, "4");
    lv_label_set_long_mode(ui->screen_TripA_4000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_4000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_4000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_4000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_4000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_4000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_4000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_4000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_4000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_5000
    ui->screen_TripA_5000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_5000, "5");
    lv_label_set_long_mode(ui->screen_TripA_5000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_5000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_5000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_5000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_5000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_5000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_5000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_5000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_5000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_6000
    ui->screen_TripA_6000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_6000, "6");
    lv_label_set_long_mode(ui->screen_TripA_6000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_6000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_6000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_6000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_6000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_6000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_6000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_6000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_6000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_7000
    ui->screen_TripA_7000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_7000, "7");
    lv_label_set_long_mode(ui->screen_TripA_7000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_7000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_7000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_7000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_7000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_7000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_7000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_7000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_7000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_8000
    ui->screen_TripA_8000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_8000, "8");
    lv_label_set_long_mode(ui->screen_TripA_8000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_8000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_8000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_8000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_8000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_8000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_8000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_8000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_8000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_9000
    ui->screen_TripA_9000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_9000, "9");
    lv_label_set_long_mode(ui->screen_TripA_9000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_9000, 847, 609);
    lv_obj_set_size(ui->screen_TripA_9000, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_9000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_9000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_9000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_9000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_9000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_9000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_100
    ui->screen_TripA_100 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_100, "1");
    lv_label_set_long_mode(ui->screen_TripA_100, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_100, 883, 609);
    lv_obj_set_size(ui->screen_TripA_100, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_100, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_100, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_200
    ui->screen_TripA_200 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_200, "2");
    lv_label_set_long_mode(ui->screen_TripA_200, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_200, 883, 609);
    lv_obj_set_size(ui->screen_TripA_200, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_200, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_200, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_200, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_200, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_200, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_200, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_300
    ui->screen_TripA_300 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_300, "3");
    lv_label_set_long_mode(ui->screen_TripA_300, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_300, 883, 609);
    lv_obj_set_size(ui->screen_TripA_300, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_300, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_300, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_300, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_300, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_300, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_300, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_400
    ui->screen_TripA_400 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_400, "4");
    lv_label_set_long_mode(ui->screen_TripA_400, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_400, 883, 609);
    lv_obj_set_size(ui->screen_TripA_400, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_400, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_400, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_400, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_400, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_400, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_400, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_500
    ui->screen_TripA_500 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_500, "5");
    lv_label_set_long_mode(ui->screen_TripA_500, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_500, 883, 609);
    lv_obj_set_size(ui->screen_TripA_500, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_500, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_500, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_500, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_500, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_500, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_500, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_600
    ui->screen_TripA_600 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_600, "6");
    lv_label_set_long_mode(ui->screen_TripA_600, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_600, 883, 609);
    lv_obj_set_size(ui->screen_TripA_600, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_600, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_600, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_600, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_600, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_600, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_600, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_700
    ui->screen_TripA_700 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_700, "7");
    lv_label_set_long_mode(ui->screen_TripA_700, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_700, 883, 609);
    lv_obj_set_size(ui->screen_TripA_700, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_700, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_700, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_700, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_700, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_700, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_700, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_800
    ui->screen_TripA_800 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_800, "8");
    lv_label_set_long_mode(ui->screen_TripA_800, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_800, 883, 609);
    lv_obj_set_size(ui->screen_TripA_800, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_800, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_800, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_800, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_800, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_800, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_800, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_900
    ui->screen_TripA_900 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_900, "9");
    lv_label_set_long_mode(ui->screen_TripA_900, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_900, 883, 609);
    lv_obj_set_size(ui->screen_TripA_900, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_900, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_900, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_900, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_900, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_900, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_900, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_10
    ui->screen_TripA_10 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_10, "1");
    lv_label_set_long_mode(ui->screen_TripA_10, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_10, 922, 609);
    lv_obj_set_size(ui->screen_TripA_10, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_10, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_10, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_20
    ui->screen_TripA_20 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_20, "2");
    lv_label_set_long_mode(ui->screen_TripA_20, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_20, 922, 609);
    lv_obj_set_size(ui->screen_TripA_20, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_20, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_20, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_30
    ui->screen_TripA_30 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_30, "3");
    lv_label_set_long_mode(ui->screen_TripA_30, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_30, 922, 609);
    lv_obj_set_size(ui->screen_TripA_30, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_30, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_30, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_40
    ui->screen_TripA_40 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_40, "4");
    lv_label_set_long_mode(ui->screen_TripA_40, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_40, 922, 609);
    lv_obj_set_size(ui->screen_TripA_40, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_40, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_40, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_40, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_50
    ui->screen_TripA_50 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_50, "5");
    lv_label_set_long_mode(ui->screen_TripA_50, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_50, 922, 609);
    lv_obj_set_size(ui->screen_TripA_50, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_50, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_50, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_50, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_60
    ui->screen_TripA_60 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_60, "6");
    lv_label_set_long_mode(ui->screen_TripA_60, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_60, 922, 609);
    lv_obj_set_size(ui->screen_TripA_60, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_60, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_60, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_60, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_70
    ui->screen_TripA_70 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_70, "7");
    lv_label_set_long_mode(ui->screen_TripA_70, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_70, 922, 609);
    lv_obj_set_size(ui->screen_TripA_70, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_70, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_70, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_80
    ui->screen_TripA_80 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_80, "8");
    lv_label_set_long_mode(ui->screen_TripA_80, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_80, 922, 609);
    lv_obj_set_size(ui->screen_TripA_80, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_80, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_80, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_90
    ui->screen_TripA_90 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_90, "9");
    lv_label_set_long_mode(ui->screen_TripA_90, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_90, 922, 609);
    lv_obj_set_size(ui->screen_TripA_90, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_90, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_90, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_1
    ui->screen_TripA_1 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_1, "1");
    lv_label_set_long_mode(ui->screen_TripA_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_1, 959, 609);
    lv_obj_set_size(ui->screen_TripA_1, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_1, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_2
    ui->screen_TripA_2 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_2, "2");
    lv_label_set_long_mode(ui->screen_TripA_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_2, 959, 609);
    lv_obj_set_size(ui->screen_TripA_2, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_2, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_3
    ui->screen_TripA_3 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_3, "3");
    lv_label_set_long_mode(ui->screen_TripA_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_3, 959, 609);
    lv_obj_set_size(ui->screen_TripA_3, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_3, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_4
    ui->screen_TripA_4 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_4, "4");
    lv_label_set_long_mode(ui->screen_TripA_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_4, 959, 609);
    lv_obj_set_size(ui->screen_TripA_4, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_4, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_5
    ui->screen_TripA_5 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_5, "5");
    lv_label_set_long_mode(ui->screen_TripA_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_5, 959, 609);
    lv_obj_set_size(ui->screen_TripA_5, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_5, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_6
    ui->screen_TripA_6 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_6, "6");
    lv_label_set_long_mode(ui->screen_TripA_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_6, 959, 609);
    lv_obj_set_size(ui->screen_TripA_6, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_6, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_7
    ui->screen_TripA_7 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_7, "7");
    lv_label_set_long_mode(ui->screen_TripA_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_7, 959, 609);
    lv_obj_set_size(ui->screen_TripA_7, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_7, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_7, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_8
    ui->screen_TripA_8 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_8, "8");
    lv_label_set_long_mode(ui->screen_TripA_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_8, 959, 609);
    lv_obj_set_size(ui->screen_TripA_8, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_8, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_8, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_TripA_9
    ui->screen_TripA_9 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_TripA_9, "9");
    lv_label_set_long_mode(ui->screen_TripA_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_TripA_9, 959, 609);
    lv_obj_set_size(ui->screen_TripA_9, 23, 31);
    lv_obj_add_flag(ui->screen_TripA_9, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_TripA_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_TripA_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_TripA_9, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_TripA_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_TripA_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_TripA_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_10000
    ui->screen_ODO_10000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_10000, "1");
    lv_label_set_long_mode(ui->screen_ODO_10000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_10000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_10000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_10000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_10000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_10000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_10000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_10000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_10000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_10000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_20000
    ui->screen_ODO_20000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_20000, "2");
    lv_label_set_long_mode(ui->screen_ODO_20000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_20000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_20000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_20000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_20000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_20000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_20000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_20000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_20000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_20000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_30000
    ui->screen_ODO_30000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_30000, "3");
    lv_label_set_long_mode(ui->screen_ODO_30000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_30000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_30000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_30000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_30000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_30000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_30000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_30000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_30000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_30000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_40000
    ui->screen_ODO_40000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_40000, "4");
    lv_label_set_long_mode(ui->screen_ODO_40000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_40000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_40000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_40000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_40000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_40000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_40000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_40000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_40000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_40000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_50000
    ui->screen_ODO_50000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_50000, "5");
    lv_label_set_long_mode(ui->screen_ODO_50000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_50000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_50000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_50000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_50000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_50000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_50000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_50000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_50000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_50000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_60000
    ui->screen_ODO_60000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_60000, "6");
    lv_label_set_long_mode(ui->screen_ODO_60000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_60000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_60000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_60000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_60000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_60000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_60000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_60000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_60000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_60000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_70000
    ui->screen_ODO_70000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_70000, "7");
    lv_label_set_long_mode(ui->screen_ODO_70000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_70000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_70000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_70000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_70000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_70000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_70000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_70000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_70000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_70000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_80000
    ui->screen_ODO_80000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_80000, "8");
    lv_label_set_long_mode(ui->screen_ODO_80000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_80000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_80000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_80000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_80000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_80000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_80000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_80000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_80000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_80000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_90000
    ui->screen_ODO_90000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_90000, "9");
    lv_label_set_long_mode(ui->screen_ODO_90000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_90000, 1015, 609);
    lv_obj_set_size(ui->screen_ODO_90000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_90000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_90000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_90000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_90000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_90000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_90000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_90000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_1000
    ui->screen_ODO_1000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_1000, "1");
    lv_label_set_long_mode(ui->screen_ODO_1000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_1000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_1000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_1000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_1000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_1000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_1000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_1000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_1000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_1000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_2000
    ui->screen_ODO_2000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_2000, "2");
    lv_label_set_long_mode(ui->screen_ODO_2000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_2000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_2000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_2000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_2000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_2000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_2000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_2000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_2000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_2000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_3000
    ui->screen_ODO_3000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_3000, "3");
    lv_label_set_long_mode(ui->screen_ODO_3000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_3000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_3000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_3000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_3000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_3000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_3000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_3000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_3000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_3000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_4000
    ui->screen_ODO_4000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_4000, "4");
    lv_label_set_long_mode(ui->screen_ODO_4000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_4000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_4000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_4000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_4000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_4000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_4000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_4000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_4000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_4000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_5000
    ui->screen_ODO_5000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_5000, "5");
    lv_label_set_long_mode(ui->screen_ODO_5000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_5000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_5000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_5000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_5000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_5000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_5000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_5000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_5000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_5000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_6000
    ui->screen_ODO_6000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_6000, "6");
    lv_label_set_long_mode(ui->screen_ODO_6000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_6000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_6000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_6000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_6000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_6000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_6000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_6000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_6000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_6000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_7000
    ui->screen_ODO_7000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_7000, "7");
    lv_label_set_long_mode(ui->screen_ODO_7000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_7000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_7000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_7000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_7000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_7000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_7000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_7000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_7000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_7000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_8000
    ui->screen_ODO_8000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_8000, "8");
    lv_label_set_long_mode(ui->screen_ODO_8000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_8000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_8000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_8000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_8000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_8000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_8000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_8000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_8000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_8000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_9000
    ui->screen_ODO_9000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_9000, "9");
    lv_label_set_long_mode(ui->screen_ODO_9000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_9000, 1053, 609);
    lv_obj_set_size(ui->screen_ODO_9000, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_9000, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_9000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_9000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_9000, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_9000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_9000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_9000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_100
    ui->screen_ODO_100 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_100, "1");
    lv_label_set_long_mode(ui->screen_ODO_100, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_100, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_100, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_100, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_100, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_200
    ui->screen_ODO_200 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_200, "2");
    lv_label_set_long_mode(ui->screen_ODO_200, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_200, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_200, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_200, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_200, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_200, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_200, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_200, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_200, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_300
    ui->screen_ODO_300 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_300, "3");
    lv_label_set_long_mode(ui->screen_ODO_300, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_300, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_300, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_300, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_300, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_300, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_300, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_300, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_300, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_400
    ui->screen_ODO_400 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_400, "4");
    lv_label_set_long_mode(ui->screen_ODO_400, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_400, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_400, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_400, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_400, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_400, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_400, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_400, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_400, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_500
    ui->screen_ODO_500 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_500, "5");
    lv_label_set_long_mode(ui->screen_ODO_500, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_500, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_500, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_500, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_500, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_500, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_500, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_500, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_500, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_600
    ui->screen_ODO_600 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_600, "6");
    lv_label_set_long_mode(ui->screen_ODO_600, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_600, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_600, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_600, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_600, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_600, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_600, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_600, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_600, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_700
    ui->screen_ODO_700 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_700, "7");
    lv_label_set_long_mode(ui->screen_ODO_700, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_700, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_700, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_700, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_700, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_700, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_700, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_700, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_700, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_800
    ui->screen_ODO_800 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_800, "8");
    lv_label_set_long_mode(ui->screen_ODO_800, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_800, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_800, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_800, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_800, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_800, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_800, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_800, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_800, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_900
    ui->screen_ODO_900 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_900, "9");
    lv_label_set_long_mode(ui->screen_ODO_900, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_900, 1093, 609);
    lv_obj_set_size(ui->screen_ODO_900, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_900, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_900, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_900, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_900, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_900, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_900, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_10
    ui->screen_ODO_10 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_10, "1");
    lv_label_set_long_mode(ui->screen_ODO_10, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_10, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_10, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_10, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_10, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_20
    ui->screen_ODO_20 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_20, "2");
    lv_label_set_long_mode(ui->screen_ODO_20, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_20, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_20, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_20, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_20, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_30
    ui->screen_ODO_30 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_30, "3");
    lv_label_set_long_mode(ui->screen_ODO_30, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_30, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_30, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_30, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_30, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_40
    ui->screen_ODO_40 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_40, "4");
    lv_label_set_long_mode(ui->screen_ODO_40, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_40, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_40, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_40, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_40, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_40, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_50
    ui->screen_ODO_50 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_50, "5");
    lv_label_set_long_mode(ui->screen_ODO_50, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_50, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_50, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_50, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_50, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_50, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_60
    ui->screen_ODO_60 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_60, "6");
    lv_label_set_long_mode(ui->screen_ODO_60, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_60, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_60, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_60, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_60, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_60, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_70
    ui->screen_ODO_70 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_70, "7");
    lv_label_set_long_mode(ui->screen_ODO_70, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_70, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_70, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_70, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_70, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_80
    ui->screen_ODO_80 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_80, "8");
    lv_label_set_long_mode(ui->screen_ODO_80, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_80, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_80, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_80, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_80, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_90
    ui->screen_ODO_90 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_90, "9");
    lv_label_set_long_mode(ui->screen_ODO_90, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_90, 1138, 609);
    lv_obj_set_size(ui->screen_ODO_90, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_90, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_90, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_1
    ui->screen_ODO_1 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_1, "1");
    lv_label_set_long_mode(ui->screen_ODO_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_1, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_1, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_1, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_2
    ui->screen_ODO_2 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_2, "2");
    lv_label_set_long_mode(ui->screen_ODO_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_2, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_2, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_2, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_3
    ui->screen_ODO_3 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_3, "3");
    lv_label_set_long_mode(ui->screen_ODO_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_3, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_3, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_3, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_4
    ui->screen_ODO_4 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_4, "4");
    lv_label_set_long_mode(ui->screen_ODO_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_4, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_4, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_4, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_5
    ui->screen_ODO_5 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_5, "5");
    lv_label_set_long_mode(ui->screen_ODO_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_5, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_5, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_5, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_6
    ui->screen_ODO_6 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_6, "6");
    lv_label_set_long_mode(ui->screen_ODO_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_6, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_6, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_6, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_7
    ui->screen_ODO_7 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_7, "7");
    lv_label_set_long_mode(ui->screen_ODO_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_7, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_7, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_7, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_7, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_8
    ui->screen_ODO_8 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_8, "8");
    lv_label_set_long_mode(ui->screen_ODO_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_8, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_8, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_8, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_8, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ODO_9
    ui->screen_ODO_9 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ODO_9, "9");
    lv_label_set_long_mode(ui->screen_ODO_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ODO_9, 1182, 609);
    lv_obj_set_size(ui->screen_ODO_9, 23, 31);
    lv_obj_add_flag(ui->screen_ODO_9, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_ODO_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ODO_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ODO_9, &lv_font_SourceHanSerifSC_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ODO_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ODO_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ODO_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_000
    ui->screen_KMPH_000 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_000, "0");
    lv_label_set_long_mode(ui->screen_KMPH_000, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_000, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_000, 57, 76);

    //Write style for screen_KMPH_000, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_000, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_000, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_000, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_000, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_000, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_00
    ui->screen_KMPH_00 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_00, "0");
    lv_label_set_long_mode(ui->screen_KMPH_00, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_00, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_00, 57, 76);

    //Write style for screen_KMPH_00, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_00, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_00, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_00, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_00, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_00, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_0
    ui->screen_KMPH_0 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_0, "0");
    lv_label_set_long_mode(ui->screen_KMPH_0, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_0, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_0, 57, 76);

    //Write style for screen_KMPH_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_0, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_kmph_logo
    ui->screen_kmph_logo = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_kmph_logo, "kmph");
    lv_label_set_long_mode(ui->screen_kmph_logo, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_kmph_logo, 315, 355);
    lv_obj_set_size(ui->screen_kmph_logo, 128, 45);

    //Write style for screen_kmph_logo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_kmph_logo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_kmph_logo, &lv_font_SourceHanSerifSC_Regular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_kmph_logo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_kmph_logo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_kmph_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_Indicator
    ui->screen_Gear_Indicator = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Gear_Indicator, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Gear_Indicator, &_gearindicatorArrow_alpha_37x33);
    lv_img_set_pivot(ui->screen_Gear_Indicator, 50,50);
    lv_img_set_angle(ui->screen_Gear_Indicator, 0);
    lv_obj_set_pos(ui->screen_Gear_Indicator, 330, 475);
    lv_obj_set_size(ui->screen_Gear_Indicator, 37, 33);

    //Write style for screen_Gear_Indicator, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Gear_Indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Gear_Indicator, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_Indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Gear_Indicator, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_N
    ui->screen_Gear_N = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_N, "N");
    lv_label_set_long_mode(ui->screen_Gear_N, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_N, 382, 470);
    lv_obj_set_size(ui->screen_Gear_N, 33, 44);

    //Write style for screen_Gear_N, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_N, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_N, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_N, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_N, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_N, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_R
    ui->screen_Gear_R = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_R, "R");
    lv_label_set_long_mode(ui->screen_Gear_R, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_R, 382, 470);
    lv_obj_set_size(ui->screen_Gear_R, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_R, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_R, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_R, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_R, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_R, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_R, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_1
    ui->screen_Gear_1 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_1, "1");
    lv_label_set_long_mode(ui->screen_Gear_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_1, 382, 470);
    lv_obj_set_size(ui->screen_Gear_1, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_1, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_2
    ui->screen_Gear_2 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_2, "2");
    lv_label_set_long_mode(ui->screen_Gear_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_2, 382, 470);
    lv_obj_set_size(ui->screen_Gear_2, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_2, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_3
    ui->screen_Gear_3 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_3, "3");
    lv_label_set_long_mode(ui->screen_Gear_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_3, 382, 470);
    lv_obj_set_size(ui->screen_Gear_3, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_3, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_4
    ui->screen_Gear_4 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_4, "4");
    lv_label_set_long_mode(ui->screen_Gear_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_4, 382, 470);
    lv_obj_set_size(ui->screen_Gear_4, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_4, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Gear_5
    ui->screen_Gear_5 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_Gear_5, "5");
    lv_label_set_long_mode(ui->screen_Gear_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_Gear_5, 382, 470);
    lv_obj_set_size(ui->screen_Gear_5, 33, 44);
    lv_obj_add_flag(ui->screen_Gear_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Gear_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_Gear_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_Gear_5, &lv_font_FontAwesome5_47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_Gear_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_Gear_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_Gear_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ECO_Mode
    ui->screen_ECO_Mode = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_ECO_Mode, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_ECO_Mode, &_eco_alpha_152x181);
    lv_img_set_pivot(ui->screen_ECO_Mode, 50,50);
    lv_img_set_angle(ui->screen_ECO_Mode, 0);
    lv_obj_set_pos(ui->screen_ECO_Mode, 535, 66);
    lv_obj_set_size(ui->screen_ECO_Mode, 152, 181);

    //Write style for screen_ECO_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_ECO_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_ECO_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ECO_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_ECO_Mode, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_AUTO_Mode
    ui->screen_AUTO_Mode = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_AUTO_Mode, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_AUTO_Mode, &_auto_alpha_98x158);
    lv_img_set_pivot(ui->screen_AUTO_Mode, 50,50);
    lv_img_set_angle(ui->screen_AUTO_Mode, 0);
    lv_obj_set_pos(ui->screen_AUTO_Mode, 599, 219);
    lv_obj_set_size(ui->screen_AUTO_Mode, 98, 158);

    //Write style for screen_AUTO_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_AUTO_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_AUTO_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_AUTO_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_AUTO_Mode, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_POWER_Mode
    ui->screen_POWER_Mode = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_POWER_Mode, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_POWER_Mode, &_power_alpha_158x197);
    lv_img_set_pivot(ui->screen_POWER_Mode, 50,50);
    lv_img_set_angle(ui->screen_POWER_Mode, 0);
    lv_obj_set_pos(ui->screen_POWER_Mode, 530, 347);
    lv_obj_set_size(ui->screen_POWER_Mode, 158, 197);

    //Write style for screen_POWER_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_POWER_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_POWER_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_POWER_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_POWER_Mode, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_1
    ui->screen_Bt_1 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_1, &_1_alpha_96x89);
    lv_img_set_pivot(ui->screen_Bt_1, 50,50);
    lv_img_set_angle(ui->screen_Bt_1, 0);
    lv_obj_set_pos(ui->screen_Bt_1, 120, 433);
    lv_obj_set_size(ui->screen_Bt_1, 96, 89);

    //Write style for screen_Bt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_2
    ui->screen_Bt_2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_2, &_2_alpha_100x81);
    lv_img_set_pivot(ui->screen_Bt_2, 50,50);
    lv_img_set_angle(ui->screen_Bt_2, 0);
    lv_obj_set_pos(ui->screen_Bt_2, 94, 400);
    lv_obj_set_size(ui->screen_Bt_2, 100, 81);

    //Write style for screen_Bt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_3
    ui->screen_Bt_3 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_3, &_3_alpha_103x69);
    lv_img_set_pivot(ui->screen_Bt_3, 50,50);
    lv_img_set_angle(ui->screen_Bt_3, 0);
    lv_obj_set_pos(ui->screen_Bt_3, 73, 367);
    lv_obj_set_size(ui->screen_Bt_3, 103, 69);

    //Write style for screen_Bt_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_4
    ui->screen_Bt_4 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_4, &_4_alpha_101x57);
    lv_img_set_pivot(ui->screen_Bt_4, 50,50);
    lv_img_set_angle(ui->screen_Bt_4, 0);
    lv_obj_set_pos(ui->screen_Bt_4, 63, 335);
    lv_obj_set_size(ui->screen_Bt_4, 101, 57);

    //Write style for screen_Bt_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_5
    ui->screen_Bt_5 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_5, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_5, &_5_alpha_97x43);
    lv_img_set_pivot(ui->screen_Bt_5, 50,50);
    lv_img_set_angle(ui->screen_Bt_5, 0);
    lv_obj_set_pos(ui->screen_Bt_5, 61, 301);
    lv_obj_set_size(ui->screen_Bt_5, 97, 43);

    //Write style for screen_Bt_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_6
    ui->screen_Bt_6 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_6, &_6_alpha_97x49);
    lv_img_set_pivot(ui->screen_Bt_6, 50,50);
    lv_img_set_angle(ui->screen_Bt_6, 0);
    lv_obj_set_pos(ui->screen_Bt_6, 62, 249);
    lv_obj_set_size(ui->screen_Bt_6, 97, 49);

    //Write style for screen_Bt_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_7
    ui->screen_Bt_7 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_7, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_7, &_7_alpha_99x63);
    lv_img_set_pivot(ui->screen_Bt_7, 50,50);
    lv_img_set_angle(ui->screen_Bt_7, 0);
    lv_obj_set_pos(ui->screen_Bt_7, 67, 199);
    lv_obj_set_size(ui->screen_Bt_7, 99, 63);

    //Write style for screen_Bt_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_8
    ui->screen_Bt_8 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_8, &_8_alpha_99x77);
    lv_img_set_pivot(ui->screen_Bt_8, 50,50);
    lv_img_set_angle(ui->screen_Bt_8, 0);
    lv_obj_set_pos(ui->screen_Bt_8, 80, 151);
    lv_obj_set_size(ui->screen_Bt_8, 99, 77);

    //Write style for screen_Bt_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_9
    ui->screen_Bt_9 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_9, &_9_alpha_97x83);
    lv_img_set_pivot(ui->screen_Bt_9, 50,50);
    lv_img_set_angle(ui->screen_Bt_9, 0);
    lv_obj_set_pos(ui->screen_Bt_9, 100, 111);
    lv_obj_set_size(ui->screen_Bt_9, 97, 83);

    //Write style for screen_Bt_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Bt_10
    ui->screen_Bt_10 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Bt_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Bt_10, &_10_alpha_93x89);
    lv_img_set_pivot(ui->screen_Bt_10, 50,50);
    lv_img_set_angle(ui->screen_Bt_10, 0);
    lv_obj_set_pos(ui->screen_Bt_10, 126, 73);
    lv_obj_set_size(ui->screen_Bt_10, 93, 89);

    //Write style for screen_Bt_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Bt_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Bt_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Bt_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Bt_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_100
    ui->screen_KMPH_100 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_100, "1");
    lv_label_set_long_mode(ui->screen_KMPH_100, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_100, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_100, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_100, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_100, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_200
    ui->screen_KMPH_200 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_200, "2");
    lv_label_set_long_mode(ui->screen_KMPH_200, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_200, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_200, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_200, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_200, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_200, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_200, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_200, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_200, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_300
    ui->screen_KMPH_300 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_300, "3");
    lv_label_set_long_mode(ui->screen_KMPH_300, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_300, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_300, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_300, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_300, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_300, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_300, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_300, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_300, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_400
    ui->screen_KMPH_400 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_400, "4");
    lv_label_set_long_mode(ui->screen_KMPH_400, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_400, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_400, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_400, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_400, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_400, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_400, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_400, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_400, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_400, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_500
    ui->screen_KMPH_500 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_500, "5");
    lv_label_set_long_mode(ui->screen_KMPH_500, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_500, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_500, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_500, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_500, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_500, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_500, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_500, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_500, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_500, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_600
    ui->screen_KMPH_600 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_600, "6");
    lv_label_set_long_mode(ui->screen_KMPH_600, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_600, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_600, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_600, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_600, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_600, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_600, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_600, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_600, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_600, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_700
    ui->screen_KMPH_700 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_700, "7");
    lv_label_set_long_mode(ui->screen_KMPH_700, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_700, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_700, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_700, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_700, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_700, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_700, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_700, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_700, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_700, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_800
    ui->screen_KMPH_800 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_800, "8");
    lv_label_set_long_mode(ui->screen_KMPH_800, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_800, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_800, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_800, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_800, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_800, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_800, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_800, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_800, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_800, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_900
    ui->screen_KMPH_900 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_900, "9");
    lv_label_set_long_mode(ui->screen_KMPH_900, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_900, 273, 243);
    lv_obj_set_size(ui->screen_KMPH_900, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_900, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_900, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_900, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_900, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_900, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_900, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_900, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_10
    ui->screen_KMPH_10 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_10, "1");
    lv_label_set_long_mode(ui->screen_KMPH_10, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_10, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_10, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_10, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_10, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_20
    ui->screen_KMPH_20 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_20, "2");
    lv_label_set_long_mode(ui->screen_KMPH_20, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_20, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_20, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_20, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_20, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_30
    ui->screen_KMPH_30 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_30, "3");
    lv_label_set_long_mode(ui->screen_KMPH_30, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_30, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_30, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_30, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_30, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_40
    ui->screen_KMPH_40 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_40, "4");
    lv_label_set_long_mode(ui->screen_KMPH_40, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_40, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_40, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_40, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_40, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_40, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_50
    ui->screen_KMPH_50 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_50, "5");
    lv_label_set_long_mode(ui->screen_KMPH_50, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_50, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_50, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_50, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_50, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_50, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_60
    ui->screen_KMPH_60 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_60, "6");
    lv_label_set_long_mode(ui->screen_KMPH_60, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_60, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_60, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_60, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_60, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_60, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_70
    ui->screen_KMPH_70 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_70, "7");
    lv_label_set_long_mode(ui->screen_KMPH_70, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_70, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_70, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_70, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_70, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_80
    ui->screen_KMPH_80 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_80, "8");
    lv_label_set_long_mode(ui->screen_KMPH_80, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_80, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_80, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_80, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_80, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_90
    ui->screen_KMPH_90 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_90, "9");
    lv_label_set_long_mode(ui->screen_KMPH_90, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_90, 349, 243);
    lv_obj_set_size(ui->screen_KMPH_90, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_90, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_90, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_1
    ui->screen_KMPH_1 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_1, "1");
    lv_label_set_long_mode(ui->screen_KMPH_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_1, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_1, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_1, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_2
    ui->screen_KMPH_2 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_2, "2");
    lv_label_set_long_mode(ui->screen_KMPH_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_2, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_2, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_2, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_3
    ui->screen_KMPH_3 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_3, "3");
    lv_label_set_long_mode(ui->screen_KMPH_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_3, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_3, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_3, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_4
    ui->screen_KMPH_4 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_4, "4");
    lv_label_set_long_mode(ui->screen_KMPH_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_4, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_4, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_4, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_5
    ui->screen_KMPH_5 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_5, "5");
    lv_label_set_long_mode(ui->screen_KMPH_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_5, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_5, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_5, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_6
    ui->screen_KMPH_6 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_6, "6");
    lv_label_set_long_mode(ui->screen_KMPH_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_6, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_6, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_6, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_7
    ui->screen_KMPH_7 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_7, "7");
    lv_label_set_long_mode(ui->screen_KMPH_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_7, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_7, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_7, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_7, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_8
    ui->screen_KMPH_8 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_8, "8");
    lv_label_set_long_mode(ui->screen_KMPH_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_8, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_8, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_8, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_8, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_KMPH_9
    ui->screen_KMPH_9 = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_KMPH_9, "9");
    lv_label_set_long_mode(ui->screen_KMPH_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_KMPH_9, 422, 243);
    lv_obj_set_size(ui->screen_KMPH_9, 57, 76);
    lv_obj_add_flag(ui->screen_KMPH_9, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_KMPH_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_KMPH_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_KMPH_9, &lv_font_Antonio_Regular_75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_KMPH_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_KMPH_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_KMPH_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Power_Icon
    ui->screen_Power_Icon = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Power_Icon, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Power_Icon, &_powerIcon_alpha_64x64);
    lv_img_set_pivot(ui->screen_Power_Icon, 50,50);
    lv_img_set_angle(ui->screen_Power_Icon, 0);
    lv_obj_set_pos(ui->screen_Power_Icon, 176, 55);
    lv_obj_set_size(ui->screen_Power_Icon, 64, 64);
    lv_obj_add_flag(ui->screen_Power_Icon, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Power_Icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Power_Icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Power_Icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Power_Icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Power_Icon, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Human
    ui->screen_Adas_Human = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Human, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Human, &_Human_Bg_alpha_88x95);
    lv_img_set_pivot(ui->screen_Adas_Human, 50,50);
    lv_img_set_angle(ui->screen_Adas_Human, 0);
    lv_obj_set_pos(ui->screen_Adas_Human, 968, 111);
    lv_obj_set_size(ui->screen_Adas_Human, 88, 95);
    lv_obj_add_flag(ui->screen_Adas_Human, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Human, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Human, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Human, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Human, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Human, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_ICar
    ui->screen_Adas_ICar = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_ICar, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_ICar, &_Car_Bg_alpha_85x73);
    lv_img_set_pivot(ui->screen_Adas_ICar, 50,50);
    lv_img_set_angle(ui->screen_Adas_ICar, 0);
    lv_obj_set_pos(ui->screen_Adas_ICar, 968, 115);
    lv_obj_set_size(ui->screen_Adas_ICar, 85, 73);
    lv_obj_add_flag(ui->screen_Adas_ICar, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_ICar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_ICar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_ICar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_ICar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_ICar, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Truck
    ui->screen_Adas_Truck = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Truck, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Truck, &_Truck_Bg_alpha_85x84);
    lv_img_set_pivot(ui->screen_Adas_Truck, 50,50);
    lv_img_set_angle(ui->screen_Adas_Truck, 0);
    lv_obj_set_pos(ui->screen_Adas_Truck, 968, 126);
    lv_obj_set_size(ui->screen_Adas_Truck, 85, 84);
    lv_obj_add_flag(ui->screen_Adas_Truck, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Truck, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Truck, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Truck, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Truck, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Truck, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Bike
    ui->screen_Adas_Bike = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Bike, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Bike, &_Bike_Bg_alpha_75x74);
    lv_img_set_pivot(ui->screen_Adas_Bike, 50,50);
    lv_img_set_angle(ui->screen_Adas_Bike, 0);
    lv_obj_set_pos(ui->screen_Adas_Bike, 972, 122);
    lv_obj_set_size(ui->screen_Adas_Bike, 75, 74);
    lv_obj_add_flag(ui->screen_Adas_Bike, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Bike, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Bike, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Bike, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Bike, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Bike, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Auto
    ui->screen_Adas_Auto = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Auto, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Auto, &_Auto_Bg_alpha_75x68);
    lv_img_set_pivot(ui->screen_Adas_Auto, 50,50);
    lv_img_set_angle(ui->screen_Adas_Auto, 0);
    lv_obj_set_pos(ui->screen_Adas_Auto, 972, 119);
    lv_obj_set_size(ui->screen_Adas_Auto, 75, 68);

    //Write style for screen_Adas_Auto, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Auto, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Auto, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Bus
    ui->screen_Adas_Bus = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Bus, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Bus, &_Bus_bg_alpha_87x79);
    lv_img_set_pivot(ui->screen_Adas_Bus, 50,50);
    lv_img_set_angle(ui->screen_Adas_Bus, 0);
    lv_obj_set_pos(ui->screen_Adas_Bus, 964, 126);
    lv_obj_set_size(ui->screen_Adas_Bus, 87, 79);
    lv_obj_add_flag(ui->screen_Adas_Bus, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Bus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Bus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Bus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Bus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Bus, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Battery
    ui->screen_Battery = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Battery, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Battery, &_speedometerRing_alpha_121x100);
    lv_img_set_pivot(ui->screen_Battery, 50,50);
    lv_img_set_angle(ui->screen_Battery, 0);
    lv_obj_set_pos(ui->screen_Battery, 150, 464);
    lv_obj_set_size(ui->screen_Battery, 121, 100);

    //Write style for screen_Battery, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Battery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Battery, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Battery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Battery, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ADAS
    ui->screen_ADAS = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_ADAS, "ADAS");
    lv_label_set_long_mode(ui->screen_ADAS, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_ADAS, 821, 259);
    lv_obj_set_size(ui->screen_ADAS, 128, 45);

    //Write style for screen_ADAS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ADAS, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ADAS, &lv_font_SourceHanSerifSC_Regular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ADAS, 180, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ADAS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ADAS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_btn_1
    ui->screen_btn_1 = lv_btn_create(ui->screen);
    ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1);
    lv_label_set_text(ui->screen_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_btn_1, 57, 646);
    lv_obj_set_size(ui->screen_btn_1, 40, 40);

    //Write style for screen_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->screen_btn_1, &_gearindicatorArrow_Left_40x40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_btn_2
    ui->screen_btn_2 = lv_btn_create(ui->screen);
    ui->screen_btn_2_label = lv_label_create(ui->screen_btn_2);
    lv_label_set_text(ui->screen_btn_2_label, "");
    lv_label_set_long_mode(ui->screen_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_btn_2, 692, 646);
    lv_obj_set_size(ui->screen_btn_2, 40, 40);

    //Write style for screen_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->screen_btn_2, &_gearindicatorArrow_Right_40x40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->screen_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->screen_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Human2
    ui->screen_Adas_Human2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Human2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Human2, &_Human_Bg_alpha_88x95);
    lv_img_set_pivot(ui->screen_Adas_Human2, 50,50);
    lv_img_set_angle(ui->screen_Adas_Human2, 0);
    lv_obj_set_pos(ui->screen_Adas_Human2, 964, 377);
    lv_obj_set_size(ui->screen_Adas_Human2, 88, 95);
    lv_obj_add_flag(ui->screen_Adas_Human2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Human2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Human2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Human2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Human2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Human2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Bike2
    ui->screen_Adas_Bike2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Bike2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Bike2, &_Bike_Bg_alpha_75x74);
    lv_img_set_pivot(ui->screen_Adas_Bike2, 50,50);
    lv_img_set_angle(ui->screen_Adas_Bike2, 0);
    lv_obj_set_pos(ui->screen_Adas_Bike2, 972, 386);
    lv_obj_set_size(ui->screen_Adas_Bike2, 75, 74);
    lv_obj_add_flag(ui->screen_Adas_Bike2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Bike2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Bike2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Bike2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Bike2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Bike2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Auto2
    ui->screen_Adas_Auto2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Auto2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Auto2, &_Auto_Bg_alpha_75x68);
    lv_img_set_pivot(ui->screen_Adas_Auto2, 50,50);
    lv_img_set_angle(ui->screen_Adas_Auto2, 0);
    lv_obj_set_pos(ui->screen_Adas_Auto2, 972, 392);
    lv_obj_set_size(ui->screen_Adas_Auto2, 75, 68);
    lv_obj_add_flag(ui->screen_Adas_Auto2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Auto2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Auto2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Auto2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Auto2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Auto2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_ICar2
    ui->screen_Adas_ICar2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_ICar2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_ICar2, &_Car_Bg_alpha_85x73);
    lv_img_set_pivot(ui->screen_Adas_ICar2, 50,50);
    lv_img_set_angle(ui->screen_Adas_ICar2, 0);
    lv_obj_set_pos(ui->screen_Adas_ICar2, 968, 392);
    lv_obj_set_size(ui->screen_Adas_ICar2, 85, 73);

    //Write style for screen_Adas_ICar2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_ICar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_ICar2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_ICar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_ICar2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Bus2
    ui->screen_Adas_Bus2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Bus2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Bus2, &_Bus_bg_alpha_87x79);
    lv_img_set_pivot(ui->screen_Adas_Bus2, 50,50);
    lv_img_set_angle(ui->screen_Adas_Bus2, 0);
    lv_obj_set_pos(ui->screen_Adas_Bus2, 964, 386);
    lv_obj_set_size(ui->screen_Adas_Bus2, 87, 79);
    lv_obj_add_flag(ui->screen_Adas_Bus2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Bus2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Bus2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Bus2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Bus2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Bus2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_Adas_Truck2
    ui->screen_Adas_Truck2 = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_Adas_Truck2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_Adas_Truck2, &_Truck_Bg_alpha_85x84);
    lv_img_set_pivot(ui->screen_Adas_Truck2, 50,50);
    lv_img_set_angle(ui->screen_Adas_Truck2, 0);
    lv_obj_set_pos(ui->screen_Adas_Truck2, 968, 386);
    lv_obj_set_size(ui->screen_Adas_Truck2, 85, 84);
    lv_obj_add_flag(ui->screen_Adas_Truck2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_Adas_Truck2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_Adas_Truck2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_Adas_Truck2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_Adas_Truck2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_Adas_Truck2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen);

    //Init events for screen.
    events_init_screen(ui);
}
