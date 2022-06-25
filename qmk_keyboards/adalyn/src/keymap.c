#include QMK_KEYBOARD_H
#include "quantum.h"

#include "userspace.h"

#define LAYOUT_expand(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_expand( /* Dvorak */
    DVORAK_1L DVORAK_1R
    DVORAK_2L DVORAK_2R
    DVORAK_3LSC DVORAK_3RS
    KC_TAB,  KC_LGUI, KC_SPC1,   KC_BSP2, KC_RSFT,  KC_DEL),

  [_NAV] = LAYOUT_expand( /* Symbols and Nav */
    SYMNAV_1L SYMNAV_1R
    SYMNAV_2L SYMNAV_2R
    SYMNAV_3L SYMNAV_3R
    _______,  _______, _______,   _______, _______,  DT_PRNT),

  [_NUM] = LAYOUT_expand( /* Shifted numpad and Numbers */
    NUMBER_1L NUMBER_1R
    NUMBER_2L NUMBER_2R
    NUMBER_3L NUMBER_3R
    RESET,  _______, _______,   _______, DT_DOWN,  DT_UP),
};
