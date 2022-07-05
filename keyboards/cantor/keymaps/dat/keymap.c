// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

enum layer_names {
    _QW,
    _SYM,
    _NAV,
    _NUM,
    _TYP,
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
                                                KC_TAB,      KC_BSPC,  CT(KC_ESC),              KC_ENT,      KC_SPC,   TG(_TYP)
    ),

    [_TYP] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______,  _______, _______,             _______, _______, _______
    ),
    [_SYM] = LAYOUT_split_3x6_3(
KC_TILD,  KC_EXLM,   KC_AT,      KC_HASH,    KC_DLR,   KC_PERC,                               KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  _______,    _______,
_______,  S(KC_EQL), KC_MINS,    KC_LCBR,    KC_LPRN,  KC_LBRC,                               KC_RBRC,  KC_RPRN,  KC_RCBR,  KC_SCLN,  S(KC_SCLN), _______,
_______,  KC_EQL,    S(KC_MINS), S(KC_BSLS), S(KC_BSLS),  _______,                            S(KC_TILD),  KC_TILD,  S(KC_QUOT),  KC_QUOT,  _______,        _______,
                                             _______,  _______, _______,             _______, _______,  _______
        ),

    [_NAV] = LAYOUT_split_3x6_3(
KC_F1,    KC_F2,     KC_F3,      KC_F4,      KC_F5,    KC_F6,                                 KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
_______,  KC_LCTL,   KC_LOPT,    KC_LSFT,    KC_LCMD,  _______,                               KC_LEFT, KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,
_______,  _______,   _______,    _______,    _______,  _______,                               _______, _______,  _______,  _______,  _______,  _______,
                                             _______,  _______, _______,            _______,  _______, _______
        ),

    [_NUM] = LAYOUT_split_3x6_3(
_______,  S(KC_EQL), KC_7,     KC_8,     KC_9,     KC_SLSH,                               _______,  _______,  _______,  _______,  _______,    RESET,
_______,  KC_0,      KC_1,     KC_2,     KC_3,     KC_ASTR,                               _______,  KC_RCMD,  KC_RSFT,  KC_LOPT,  KC_LCTL,    _______,
_______,  KC_MINS,   KC_4,     KC_5,     KC_6,     _______,                               _______,  _______, RGB_TOG,   _______,  _______,    _______,
                                         _______,  _______, _______,             _______, _______,  _______
        ),

};
