/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
    [_QW] = LAYOUT_ortho_5x15(
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, _______,  _______,        _______,  _______,    _______,           _______,
KC_TAB,     KC_Q,     KC_W,     KC_E,        KC_R,     KC_T,    _______,  _______,   _______, KC_Y,     KC_U,           KC_I,     KC_O,       KC_P,              KC_BSPC,
CT(KC_ESC), CT(KC_A), AT(KC_S), ST(KC_D),    GT(KC_F), KC_G,    _______,  _______,   _______, KC_H,     GT(KC_J),       ST(KC_K), AT(KC_L),   OSL(_SYM),         KC_QUOT,
KC_LSFT,    KC_Z,     GT(KC_X), KC_C,  LT(_NAV, KC_V), KC_B,    _______,  _______,   _______, KC_N,     LT(_NUM, KC_M), KC_COMM,  GT(KC_DOT), LT(_NAV, KC_SLSH), KC_RSFT,
_______,    _______,  _______,  _______,     _______,  KC_BSPC, _______,  _______,   _______, KC_ENT,   KC_SPC,         _______,  _______,    _______,  _______
    ),

    [_SYM] = LAYOUT_ortho_5x15(
_______,  _______,   _______,    _______,    _______,    _______, _______,  _______,   _______,   _______,  _______,  _______,  _______,  _______,    _______,
KC_TILD,  KC_EXLM,   KC_AT,      KC_HASH,    KC_DLR,     KC_PERC, _______,  _______,   _______,   KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  _______,    _______,
_______,  S(KC_EQL), KC_MINS,    KC_LCBR,    KC_LPRN,    KC_LBRC, _______,  _______,   _______,   KC_RBRC,  KC_RPRN,  KC_RCBR,  KC_SCLN,  S(KC_SCLN), _______,
_______,  KC_EQL,    S(KC_MINS), KC_BSLS,    S(KC_BSLS), _______, _______,  _______,   _______, S(KC_GRV),   KC_GRV,  _______,  _______,  _______,    _______,
_______,  _______,   _______,    _______,    _______,    _______, _______,  _______,   _______,   _______,  _______,  _______,  _______,  _______,    _______
        ),

    [_NAV] = LAYOUT_ortho_5x15(
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,    _______,
KC_F1,    KC_F2,     KC_F3,      KC_F4,      KC_F5,    KC_F6,   _______,  _______,   _______, KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,
_______,  KC_LCTL,   KC_LOPT,    KC_LSFT,    KC_LCMD,  _______, _______,  _______,   _______, KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,    _______,
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, KC_MPLY,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_MPRV,    _______,
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,    _______
        ),

    [_NUM] = LAYOUT_ortho_5x15(
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,    _______,
_______,  S(KC_EQL), KC_7,       KC_8,       KC_9,     KC_SLSH, _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,    RESET,
_______,  KC_0,      KC_1,       KC_2,       KC_3,     KC_ASTR, _______,  _______,   _______, _______,  KC_RCMD,  KC_RSFT,  KC_LOPT,  KC_LCTL,    _______,
_______,  KC_MINS,   KC_4,       KC_5,       KC_6,     _______, _______,  _______,   _______, _______,  _______,  KC_RCMD,  _______,  _______,    _______,
_______,  _______,   _______,    _______,    _______,  _______, _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,    _______
        ),
};
