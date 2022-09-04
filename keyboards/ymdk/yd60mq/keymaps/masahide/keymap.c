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
        KC_TILD,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10, KC_MINS, KC_EQL,  KC_DEL,
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
        S(KC_CAPS),KC_A,  KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
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
        KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  _______,
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
      	KC_GESC,A(KC_1), A(KC_2),  A(KC_3), A(KC_4), A(KC_5), A(KC_6),  A(KC_7),A(KC_8), A(KC_9),	A(KC_0), A(KC_MINS), A(KC_EQL), A(KC_DEL),
		_______,A(KC_F4),C(KC_W),  C(KC_E), C(KC_R), C(KC_T), A(KC_Y),  A(KC_U),A(KC_I), A(KC_O),	A(KC_P),C(S(KC_TAB)),C(KC_TAB),A(KC_BSLS),
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

// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    //{6, 2, HSV_RED}       // Light 4 LEDs, starting with LED 6
    {14, 2, HSV_RED}       // Light 4 LEDs, starting with LED 12
);
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM Mac0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 2, HSV_CYAN}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM Mac1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 2, HSV_WHITE}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM Mac2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_GREEN}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM Mac3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_GOLD}
);

const rgblight_segment_t PROGMEM Win0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 2, HSV_CYAN}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM Win1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 2, HSV_PURPLE}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM Win2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_GREEN}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM Win3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_GOLD}
);

const rgblight_segment_t PROGMEM WinALT_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 2, HSV_MAGENTA}
);



const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    capslock_layer,   // Overrides caps lock layer
    Mac0_layer,   // 1
    Mac1_layer,   // 2
    Mac2_layer,   // 3
    Mac3_layer,   // 4
    Win0_layer,   // 5
    Win1_layer,   // 6
    Win2_layer,   // 7
    Win3_layer,   // 8
    WinALT_layer  // 9
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}


bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

/*
layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _Mac0));
    rgblight_set_layer_state(5, layer_state_cmp(state, _Win0));
    return state;
}
*/

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(2, layer_state_cmp(state, _Mac1));
//    rgblight_set_layer_state(3, layer_state_cmp(state, _Mac2));
//    rgblight_set_layer_state(4, layer_state_cmp(state, _Mac3));
    rgblight_set_layer_state(6, layer_state_cmp(state, _Win1));
//    rgblight_set_layer_state(7, layer_state_cmp(state, _Win2));
//    rgblight_set_layer_state(8, layer_state_cmp(state, _Win3));
    rgblight_set_layer_state(9, layer_state_cmp(state, _WinALT));
    return state;
}
