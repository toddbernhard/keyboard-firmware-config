#pragma once
#include "quantum.h"

// Is this useful ???
// TODO once port is further, delete this
enum layers {
  _BASE,
  _NAV,
  _NUM,
  _FORT,
  _FIVE
};

#ifndef NO_STANDARD_KEYMAPS

    /* Tap-Hold */
    #define KC_SPC1 LT(_NAV, KC_SPC)
    #define KC_BSP2 LT(_NUM, KC_BSPC)

    // SF_A LSFT_T(KC_A)
    // SF_U LSFT_T(KC_U)
    // SF_H RSFT_T(KC_H)
    // SF_S RSFT_T(KC_S)

    #define SF_SCLN LSFT_T(KC_SCLN)
    #define SF_Z RSFT_T(KC_Z)

    #define CT_Q LCTL_T(KC_Q)
    #define CT_V RCTL_T(KC_V)

    #define AT_J LALT_T(KC_J)
    #define AT_W RALT_T(KC_V)

    /* Layers, in sets of 5 keys (per hand) */
    #define DVORAK_1L    KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,
    #define DVORAK_2L    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,
    #define DVORAK_3L    KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,
    #define DVORAK_3LS   SF_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,
    #define DVORAK_3LSC  SF_SCLN, CT_Q,    KC_J,    KC_K,    KC_X,
    #define DVORAK_3LSCA SF_SCLN, CT_Q,    AT_J,    KC_K,    KC_X,

    #define DVORAK_1R    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
    #define DVORAK_2R    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,
    #define DVORAK_3R    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,
    #define DVORAK_3RS   KC_B,    KC_M,    KC_W,    KC_V,    SF_Z,
    #define DVORAK_3RSC  KC_B,    KC_M,    KC_W,    CT_V,    SF_Z,
    #define DVORAK_3RSCA KC_B,    KC_M,    AT_W,    CT_V,    SF_Z,

    #define SYMNAV_1L    KC_SLSH, KC_BSLS, KC_LPRN, KC_RPRN, KC_NO,
    #define SYMNAV_2L    KC_UNDS, KC_MINS, KC_LBRC, KC_RBRC, KC_NO,
    #define SYMNAV_3L    KC_PIPE, KC_NO,   KC_LCBR, KC_RCBR, KC_NO,

    #define SYMNAV_1R    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    #define SYMNAV_2R    KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    #define SYMNAV_3R    KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,

    #define NUMBER_1L    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    #define NUMBER_2L    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
    #define NUMBER_3L    KC_QUES, KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS,

    #define NUMBER_1R    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    #define NUMBER_2R    KC_CIRC, KC_AMPR, KC_ASTR, KC_EQL,  KC_PLUS,
    #define NUMBER_3R    KC_GRV, KC_RPRN, KC_RBRC, KC_RCBR, KC_MINS,
#endif
