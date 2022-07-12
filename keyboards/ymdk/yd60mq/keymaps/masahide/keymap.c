#include QMK_KEYBOARD_H


enum layer_names {
    _Mac0,
    _Mac1,
    _Mac2,
    _Mac3,
    _Win0,
    _Win1,
    _Win2,
    _Win3,
    _WinALT,
    _CapsColor,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Mac
    [_Mac0] = LAYOUT_60_split_space(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
LT(_Mac1,KC_CAPS),KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI,          LT(_Mac1,KC_SPC), KC_SPC,  LT(_Mac2,KC_SPC), KC_RCTL, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
	),

    //,: Function Layer
    [_Mac1] = LAYOUT_60_split_space(
        KC_GRAVE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10,   KC_F11, KC_F12,  KC_DEL,
        _______, _______, KC_MS_U, _______, _______,_______,C(S(KC_TAB)),KC_PGDN,KC_PGUP,C(KC_TAB),_______, _______, _______, _______,
        KC_CAPS, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, KC_UP,
        _______, _______, _______,                   _______, _______, MO(_Mac3),        _______, _______, _______, _______, _______
	),
    //,: Function Layer
    [_Mac2] = LAYOUT_60_split_space(
        KC_TILD,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10,   KC_F11, KC_F12,  KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
	),
    //,: Function Layer
    [_Mac3] = LAYOUT_60_split_space(
        _______, _______,DF(_Win0),_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, KC_UP,   RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
	),


    // Windows
    [_Win0] = LAYOUT_60_split_space(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        LT(_Win1,KC_CAPS),KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, MO(_WinALT),      LT(_Win1,KC_SPC), KC_SPC,  LT(_Win2,KC_SPC), KC_RCTL, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
	),
    //,: Function Layer
    [_Win1] = LAYOUT_60_split_space(
        KC_GRAVE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10,   KC_F11, KC_F12,  KC_DEL,
        _______, _______, KC_MS_U, _______, _______, _______,C(S(KC_TAB)),KC_PGDN,KC_PGUP,C(KC_TAB),_______, _______, _______, _______,
        KC_CAPS, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, KC_UP,
        _______, _______, _______,                   _______, _______, MO(_Win3),        _______, _______, _______, _______, _______
	),
    //,: Function Layer
    [_Win2] = LAYOUT_60_split_space(
        KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
	),
    //,: Function Layer
    [_Win3] = LAYOUT_60_split_space(
        KC_ESC,DF(_Mac0), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, KC_UP,   RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
	),
    //,: Function Layer
    [_WinALT] = LAYOUT_60_split_space(
      	KC_GESC,A(KC_1), A(KC_2),  A(KC_3), A(KC_4), A(KC_5), A(KC_6),  A(KC_7),A(KC_8), A(KC_9),	A(KC_0), A(KC_MINS),  A(KC_EQL), A(KC_DEL),
		_______,A(KC_F4),C(KC_W),  C(KC_E), C(KC_R), C(KC_T), A(KC_Y),  A(KC_U),A(KC_I), A(KC_O),	A(KC_P), A(KC_LEFT),  A(KC_RGHT),A(KC_BSLS),
		_______,C(KC_A), C(KC_S),  C(KC_D), C(KC_F), C(KC_G), A(KC_H),  A(KC_J),A(KC_K), A(KC_L),A(KC_SCLN),A(KC_QUOT), A(KC_ENT),
 		_______,C(KC_Z), C(KC_X),  C(KC_C), C(KC_V), C(KC_B), C(KC_N),  A(KC_M),A(KC_COMM),A(KC_DOT),A(KC_SLSH),        A(KC_UP),
		_______, _______, _______,	    	LT(_Win1,KC_SPC), KC_SPC,   _______, _______, _______,  A(KC_LEFT),  A(KC_DOWN), A(KC_RGHT)
	),

};

// alt key state
static bool alt_tab = false;

bool check_alt_tab(uint16_t keycode, keyrecord_t *record) {
    //ALT key
    if (keycode == MO(_WinALT) && !record->event.pressed && alt_tab){
        unregister_mods(MOD_LALT);
        alt_tab = false;
        return true;
    }
    if (keycode == KC_TAB && record->event.pressed && layer_state_is(_WinALT) && !alt_tab){
        register_mods(MOD_LALT);
        alt_tab = true;
    }
    return true;

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
        uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
    check_alt_tab(keycode,record);
    return true;
}



