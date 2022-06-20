#include QMK_KEYBOARD_H
#include "quantum.h"

enum layers {
  _BASE,
  _NAV,
  _NUM
};

/* Tap-Hold */
#define KC_SPC1 LT(_NAV, KC_SPC)
#define KC_BSP2 LT(_NUM, KC_BSPC)

#define SF_A LSFT_T(KC_A)
#define SF_U LSFT_T(KC_U)
#define SF_H RSFT_T(KC_H)
#define SF_S RSFT_T(KC_S)
#define SF_SCLN LSFT_T(KC_SCLN)
#define SF_Z RSFT_T(KC_Z)

#define CT_Q LCTL_T(KC_Q)
#define CT_V RCTL_T(KC_V)

#define AT_J LALT_T(KC_J)
#define AT_W RALT_T(KC_V)


/* Layouts */
#define LAYOUT_expand(...) LAYOUT(__VA_ARGS__)

#define DVORAK_1L    KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,
#define DVORAK_2L    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,
#define DVORAK_3L    SF_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,
#define DVORAK_3LC   SF_SCLN, CT_Q,    KC_J,    KC_K,    KC_X,
#define DVORAK_3LCA  SF_SCLN, CT_Q,    AT_J,    KC_K,    KC_X,

#define DVORAK_1R    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
#define DVORAK_2R    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,
#define DVORAK_3R    KC_B,    KC_M,    KC_W,    KC_V,    SF_Z,
#define DVORAK_3RC   KC_B,    KC_M,    KC_W,    CT_V,    SF_Z,
#define DVORAK_3RCA  KC_B,    KC_M,    AT_W,    CT_V,    SF_Z,

#define SYMNAV_1L    KC_SLSH, KC_BSLS, KC_LPRN, KC_RPRN, KC_NO,
#define SYMNAV_2L    KC_UNDS, KC_MINS, KC_LBRC, KC_RBRC, KC_NO,
#define SYMNAV_3L    KC_PIPE, KC_NO,   KC_LCBR, KC_RCBR, KC_NO,

#define SYMNAV_1R    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
#define SYMNAV_2R    KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
#define SYMNAV_3R    KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,

#define NUMBER_1L    KC_DQUO, KC_CIRC, KC_PERC, KC_DLR,  KC_NO,
#define NUMBER_2L    KC_NO,   KC_HASH, KC_AT,   KC_EXLM, KC_QUES,
#define NUMBER_3L    KC_NO,   KC_LPRN, KC_ASTR, KC_AMPR, KC_NO,

#define NUMBER_1R    KC_PLUS, KC_P7,   KC_P8,   KC_P9,   KC_P0,
#define NUMBER_2R    KC_EQL,  KC_P4,   KC_P5,   KC_P6,   _______,
#define NUMBER_3R    KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_NO,


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_expand( /* Dvorak */
    DVORAK_1L DVORAK_1R
    DVORAK_2L DVORAK_2R
    DVORAK_3L DVORAK_3R
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
