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



void setup_scr_screen_1(lv_ui *ui)
{
    //Write codes screen_1
    ui->screen_1 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_1
    ui->screen_1_img_1 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_1, &_screenBackground_alpha_1280x720);
    lv_img_set_pivot(ui->screen_1_img_1, 50,50);
    lv_img_set_angle(ui->screen_1_img_1, 0);
    lv_obj_set_pos(ui->screen_1_img_1, 0, 0);
    lv_obj_set_size(ui->screen_1_img_1, 1280, 720);

    //Write style for screen_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_2
    ui->screen_1_img_2 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_2, &_Segula_Logo_alpha_719x407);
    lv_img_set_pivot(ui->screen_1_img_2, 50,50);
    lv_img_set_angle(ui->screen_1_img_2, 0);
    lv_obj_set_pos(ui->screen_1_img_2, 326, 465);
    lv_obj_set_size(ui->screen_1_img_2, 719, 407);

    //Write style for screen_1_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_3
    ui->screen_1_img_3 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_3, &_car_alpha_500x400);
    lv_img_set_pivot(ui->screen_1_img_3, 50,50);
    lv_img_set_angle(ui->screen_1_img_3, 0);
    lv_obj_set_pos(ui->screen_1_img_3, 393, 113);
    lv_obj_set_size(ui->screen_1_img_3, 500, 400);

    //Write style for screen_1_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_1
    ui->screen_1_label_1 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_1, "33");
    lv_label_set_long_mode(ui->screen_1_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_1, 710, 90);
    lv_obj_set_size(ui->screen_1_label_1, 100, 32);

    //Write style for screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_1, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_2
    ui->screen_1_label_2 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_2, "33");
    lv_label_set_long_mode(ui->screen_1_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_2, 373, 496);
    lv_obj_set_size(ui->screen_1_label_2, 100, 32);

    //Write style for screen_1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_2, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_3
    ui->screen_1_label_3 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_3, "33");
    lv_label_set_long_mode(ui->screen_1_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_3, 373, 90);
    lv_obj_set_size(ui->screen_1_label_3, 100, 32);

    //Write style for screen_1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_3, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_4
    ui->screen_1_label_4 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_4, "33");
    lv_label_set_long_mode(ui->screen_1_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_4, 710, 496);
    lv_obj_set_size(ui->screen_1_label_4, 100, 32);

    //Write style for screen_1_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_4, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_4
    ui->screen_1_img_4 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_4, &_door1_alpha_500x432);
    lv_img_set_pivot(ui->screen_1_img_4, 50,50);
    lv_img_set_angle(ui->screen_1_img_4, 0);
    lv_obj_set_pos(ui->screen_1_img_4, 389, 86);
    lv_obj_set_size(ui->screen_1_img_4, 500, 432);
    lv_obj_add_flag(ui->screen_1_img_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_5
    ui->screen_1_img_5 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_5, &_door2_alpha_500x432);
    lv_img_set_pivot(ui->screen_1_img_5, 50,50);
    lv_img_set_angle(ui->screen_1_img_5, 0);
    lv_obj_set_pos(ui->screen_1_img_5, 389, 86);
    lv_obj_set_size(ui->screen_1_img_5, 500, 432);
    lv_obj_add_flag(ui->screen_1_img_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_6
    ui->screen_1_img_6 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_6, &_door3_alpha_581x369);
    lv_img_set_pivot(ui->screen_1_img_6, 50,50);
    lv_img_set_angle(ui->screen_1_img_6, 0);
    lv_obj_set_pos(ui->screen_1_img_6, 360, 116);
    lv_obj_set_size(ui->screen_1_img_6, 581, 369);
    lv_obj_add_flag(ui->screen_1_img_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_7
    ui->screen_1_img_7 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_7, &_door4_alpha_558x432);
    lv_img_set_pivot(ui->screen_1_img_7, 50,50);
    lv_img_set_angle(ui->screen_1_img_7, 0);
    lv_obj_set_pos(ui->screen_1_img_7, 335, 95);
    lv_obj_set_size(ui->screen_1_img_7, 558, 432);
    lv_obj_add_flag(ui->screen_1_img_7, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_8
    ui->screen_1_img_8 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_8, &_door5_alpha_610x478);
    lv_img_set_pivot(ui->screen_1_img_8, 50,50);
    lv_img_set_angle(ui->screen_1_img_8, 0);
    lv_obj_set_pos(ui->screen_1_img_8, 326, 48);
    lv_obj_set_size(ui->screen_1_img_8, 610, 478);
    lv_obj_add_flag(ui->screen_1_img_8, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_9
    ui->screen_1_img_9 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_9, &_door6_alpha_600x426);
    lv_img_set_pivot(ui->screen_1_img_9, 50,50);
    lv_img_set_angle(ui->screen_1_img_9, 0);
    lv_obj_set_pos(ui->screen_1_img_9, 316, 54);
    lv_obj_set_size(ui->screen_1_img_9, 600, 426);
    lv_obj_add_flag(ui->screen_1_img_9, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_10
    ui->screen_1_img_10 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_10, &_door7_alpha_568x494);
    lv_img_set_pivot(ui->screen_1_img_10, 50,50);
    lv_img_set_angle(ui->screen_1_img_10, 0);
    lv_obj_set_pos(ui->screen_1_img_10, 331, 60);
    lv_obj_set_size(ui->screen_1_img_10, 568, 494);
    lv_obj_add_flag(ui->screen_1_img_10, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_11
    ui->screen_1_img_11 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_11, &_door8_alpha_643x442);
    lv_img_set_pivot(ui->screen_1_img_11, 50,50);
    lv_img_set_angle(ui->screen_1_img_11, 0);
    lv_obj_set_pos(ui->screen_1_img_11, 313, 86);
    lv_obj_set_size(ui->screen_1_img_11, 643, 442);
    lv_obj_add_flag(ui->screen_1_img_11, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_12
    ui->screen_1_img_12 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_12, &_door9_alpha_653x431);
    lv_img_set_pivot(ui->screen_1_img_12, 50,50);
    lv_img_set_angle(ui->screen_1_img_12, 0);
    lv_obj_set_pos(ui->screen_1_img_12, 295, 67);
    lv_obj_set_size(ui->screen_1_img_12, 653, 431);
    lv_obj_add_flag(ui->screen_1_img_12, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_1
    ui->screen_1_btn_1 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_1_label = lv_label_create(ui->screen_1_btn_1);
    lv_label_set_text(ui->screen_1_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_1_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_1, 60, 642);
    lv_obj_set_size(ui->screen_1_btn_1, 40, 40);

    //Write style for screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->screen_1_btn_1, &_gearindicatorArrow_Left_40x40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_2
    ui->screen_1_btn_2 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_2_label = lv_label_create(ui->screen_1_btn_2);
    lv_label_set_text(ui->screen_1_btn_2_label, "");
    lv_label_set_long_mode(ui->screen_1_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_2, 1145, 642);
    lv_obj_set_size(ui->screen_1_btn_2, 40, 40);

    //Write style for screen_1_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->screen_1_btn_2, &_gearindicatorArrow_Right_40x40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_13
    ui->screen_1_img_13 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_13, &_P1_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_13, 50,50);
    lv_img_set_angle(ui->screen_1_img_13, 0);
    lv_obj_set_pos(ui->screen_1_img_13, -15, 175);
    lv_obj_set_size(ui->screen_1_img_13, 316, 339);

    //Write style for screen_1_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_14
    ui->screen_1_img_14 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_14, &_P4_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_14, 50,50);
    lv_img_set_angle(ui->screen_1_img_14, 0);
    lv_obj_set_pos(ui->screen_1_img_14, -18, 175);
    lv_obj_set_size(ui->screen_1_img_14, 316, 339);
    lv_obj_add_flag(ui->screen_1_img_14, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_15
    ui->screen_1_img_15 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_15, &_P3_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_15, 50,50);
    lv_img_set_angle(ui->screen_1_img_15, 0);
    lv_obj_set_pos(ui->screen_1_img_15, -5, 178);
    lv_obj_set_size(ui->screen_1_img_15, 316, 339);
    lv_obj_add_flag(ui->screen_1_img_15, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_16
    ui->screen_1_img_16 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_16, &_P2_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_16, 50,50);
    lv_img_set_angle(ui->screen_1_img_16, 0);
    lv_obj_set_pos(ui->screen_1_img_16, -12, 175);
    lv_obj_set_size(ui->screen_1_img_16, 316, 339);
    lv_obj_add_flag(ui->screen_1_img_16, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_17
    ui->screen_1_img_17 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_17, &_B1_alpha_316x335);
    lv_img_set_pivot(ui->screen_1_img_17, 50,50);
    lv_img_set_angle(ui->screen_1_img_17, 0);
    lv_obj_set_pos(ui->screen_1_img_17, 929, 187);
    lv_obj_set_size(ui->screen_1_img_17, 316, 335);

    //Write style for screen_1_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_18
    ui->screen_1_img_18 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_18, &_B2_Bg_alpha_339x340);
    lv_img_set_pivot(ui->screen_1_img_18, 50,50);
    lv_img_set_angle(ui->screen_1_img_18, 0);
    lv_obj_set_pos(ui->screen_1_img_18, 929, 177);
    lv_obj_set_size(ui->screen_1_img_18, 339, 340);
    lv_obj_add_flag(ui->screen_1_img_18, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_20
    ui->screen_1_img_20 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_20, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_20, &_B4_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_20, 50,50);
    lv_img_set_angle(ui->screen_1_img_20, 0);
    lv_obj_set_pos(ui->screen_1_img_20, 941, 175);
    lv_obj_set_size(ui->screen_1_img_20, 316, 339);
    lv_obj_add_flag(ui->screen_1_img_20, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_20, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_19
    ui->screen_1_img_19 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_19, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_19, &_B3_Bg_alpha_316x339);
    lv_img_set_pivot(ui->screen_1_img_19, 50,50);
    lv_img_set_angle(ui->screen_1_img_19, 0);
    lv_obj_set_pos(ui->screen_1_img_19, 932, 175);
    lv_obj_set_size(ui->screen_1_img_19, 316, 339);
    lv_obj_add_flag(ui->screen_1_img_19, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_1_img_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_19, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_1);

    //Init events for screen.
    events_init_screen_1(ui);
}
