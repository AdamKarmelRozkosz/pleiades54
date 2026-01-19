#include QMK_KEYBOARD_H
enum layers {
    BASE,
    MOD,
    SYMBOL
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
            // left hand                                                            // right hand
             KC_GRAVE,   KC_1, KC_2, KC_3, KC_4, KC_5,                              KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
             KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T,                                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS,
             KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,                                  KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS,
             KC_LEFT_CTRL,  KC_Z, KC_X, KC_C, KC_V, KC_B,                           KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
                            KC_LEFT_SHIFT, MO(MOD) , KC_SPACE,                KC_BACKSPACE, KC_ENTER, MO(SYMBOL)
            ),
    [MOD] = LAYOUT (
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_LEFT_CTRL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_LEFT_SHIFT, KC_LEFT_ALT, KC_SPACE,                   KC_BACKSPACE, KC_RIGHT_ALT, KC_TRNS
            ),
    [SYMBOL] = LAYOUT (
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5,                                  KC_6, KC_7, KC_8, KC_SCLN, KC_QUOTE, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
            )
};
