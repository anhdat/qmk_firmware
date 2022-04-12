
#include QMK_KEYBOARD_H

enum layers{
    MAC_BASE,
    _SYM,
    _NAV,
    _FN1,
    _FN3
};

enum custom_keycodes {
    KC_MISSION_CONTROL = SAFE_RANGE,
    KC_LAUNCHPAD
};

#define KC_WAVE S(KC_GRV)
#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)
#define KC_MCTL KC_MISSION_CONTROL
#define KC_LPAD KC_LAUNCHPAD
#define CT CTL_T
#define GT CMD_T
#define AT ALT_T
#define ST SFT_T

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_67(
KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,           KC_5,     KC_6,     KC_7,     KC_8,     KC_9,       KC_0,      KC_MINS,  KC_EQL,   KC_BSLS,  KC_MUTE,  
KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,           KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,       KC_P,      KC_BSPC,  KC_LBRC,  KC_RBRC,  KC_MPLY,  
CT(KC_ESC), CT(KC_A), AT(KC_S), ST(KC_D), GT(KC_F),       KC_G,     KC_H,     GT(KC_J), ST(KC_K), AT(KC_L),   OSL(_SYM), KC_QUOT,  KC_ENT,             KC_MNXT,  
KC_LSFT,    KC_Z,     GT(KC_X), KC_C,     LT(_NAV, KC_V), KC_B,     KC_N,     KC_M,     KC_COMM,  GT(KC_DOT), KC_SLSH,   KC_RSFT,            KC_UP,    
KC_LCTL,    KC_LOPT,  KC_LCMD,                            KC_SPC,                       KC_RCMD,  MO(_FN1),   MO(_FN3),            KC_LEFT,  KC_DOWN,  KC_RGHT   
    ),

    [_SYM] = LAYOUT_ansi_67(
KC_GRV,   KC_BRID,   KC_BRIU,    KC_MCTL,    KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,  KC_VOLU,  _______,  _______,  
KC_TILD,  KC_EXLM,   KC_AT,      KC_HASH,    KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  _______,    _______,  _______,  _______,  _______,  
_______,  S(KC_EQL), KC_MINS,    KC_LCBR,    KC_LPRN,  KC_LBRC,  KC_RBRC,  KC_RPRN,  KC_RCBR,  KC_SCLN,  S(KC_SCLN), _______,  _______,            _______,  
_______,  KC_EQL,    S(KC_MINS), S(KC_BSLS), _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,            _______,  
_______,  _______,   _______,                          _______,                      _______,  _______,  _______,              _______,  _______,  _______   
        ),

    [_NAV] = LAYOUT_ansi_67(
KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
_______,  KC_LCTL,  KC_LOPT,  KC_LSFT,  KC_LCMD,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,  _______,            _______,  
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  
_______,  _______,  _______,                      _______,                      _______,  _______,  _______,            _______,  _______,  _______   
        ),

    [_FN1] = LAYOUT_ansi_67(
KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  
RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
_______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  
_______,  _______,  _______,                      _______,                      _______,  _______,  _______,            _______,  _______,  _______   
        ),

    [_FN3] = LAYOUT_ansi_67(
KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  
RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
_______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            RESET,    
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  
_______,  _______,  _______,                      _______,                      _______,  _______,  _______,            _______,  _______,  _______   
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LAUNCHPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
}