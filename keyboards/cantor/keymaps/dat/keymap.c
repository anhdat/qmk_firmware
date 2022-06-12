// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

enum layer_names {
    _QW,
    _SYM,
    _NAV,
    _NUM,
};
#define CT CTL_T
#define GT CMD_T
#define AT ALT_T
#define ST SFT_T

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */

    [_QW] = LAYOUT_split_3x6_3(
KC_TAB,     KC_Q,     KC_W,     KC_E,           KC_R,           KC_T,                                      KC_Y,     KC_U,           KC_I,     KC_O,       KC_P,      KC_BSPC,
CT(KC_ESC), CT(KC_A), AT(KC_S), ST(KC_D),       GT(KC_F),       KC_G,                                      KC_H,     GT(KC_J),       ST(KC_K), AT(KC_L),   OSL(_SYM), KC_QUOT,
KC_LSFT,    KC_Z,     GT(KC_X), KC_C,           LT(_NAV, KC_V), KC_B,                                      KC_N,     LT(_NUM, KC_M), KC_COMM,  GT(KC_DOT), KC_SLSH,   KC_RSFT,
                                                _______,        _______, _______,             KC_ENT,      KC_SPC,   KC_RALT
    ),

    [_SYM] = LAYOUT_split_3x6_3(
KC_TILD,  KC_EXLM,   KC_AT,      KC_HASH,    KC_DLR,   KC_PERC,                               KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  _______,    _______,
_______,  S(KC_EQL), KC_MINS,    KC_LCBR,    KC_LPRN,  KC_LBRC,                               KC_RBRC,  KC_RPRN,  KC_RCBR,  KC_SCLN,  S(KC_SCLN), _______,
_______,  KC_EQL,    S(KC_MINS), S(KC_BSLS), _______,  _______,                               _______,  _______,  _______,  _______,  _______,    _______,
                                             _______,  _______, _______,             _______, _______,  _______
        ),

    [_NAV] = LAYOUT_split_3x6_3(
_______,  _______,   _______,    _______,    _______,  _______,                               _______, _______,  _______,  _______,  _______,  _______,
_______,  KC_LCTL,   KC_LOPT,    KC_LSFT,    KC_LCMD,  _______,                               _______, KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,
_______,  _______,   _______,    _______,    _______,  _______,                               _______, _______,  _______,  _______,  _______,  _______,
                                             _______,  _______, _______,            _______,  _______, _______
        ),

    [_NUM] = LAYOUT_split_3x6_3(
_______,  S(KC_EQL), KC_7,     KC_8,     KC_9,     KC_SLSH,                               _______,  _______,  _______,  _______,  _______,    _______,
_______,  KC_0,      KC_4,     KC_5,     KC_6,     KC_ASTR,                               _______,  KC_RCMD,  KC_RSFT,  KC_LOPT,  KC_LCTL,     RESET,
_______,  KC_MINS,   KC_1,     KC_2,     KC_3,     _______,                               _______,  _______, RGB_TOG,   _______,  _______,    _______,
                                         _______,  _______, _______,             _______, _______,  _______
        ),

};
