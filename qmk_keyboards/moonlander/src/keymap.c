#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"

#include "userspace.h"

#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define MOON_LED_LEVEL LED_LEVEL

#define LAYOUT_expand(...) LAYOUT_moonlander(__VA_ARGS__)


#define KC_NO_14 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
#define KC____ KC_TRANSPARENT

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_expand(
    KC_NO_14
    KC_NO, DVORAK_1L    KC_NO,  KC_NO,   DVORAK_1R   KC_NO,
    KC_NO, DVORAK_2L    KC_NO,  KC_NO,   DVORAK_2R   KC_NO,
    KC_NO, DVORAK_3LSC                   DVORAK_3RSC KC_NO,
    KC_NO, KC_TAB, KC_GRAVE, KC_NO, KC_NO, TO(4),     TO(4), KC_NO, KC_NO, KC_RALT, KC_RCTRL, KC_NO,
                               LT(1,KC_SPACE), KC_LGUI, MO(3),  KC_NO, KC_LSHIFT, LT(2,KC_BSPACE)
  ),
  [1] = LAYOUT_expand(
    KC_NO_14
    KC_NO,  KC_SLASH,     KC_BSLASH, KC_LPRN,     KC_RPRN,     KC____,           KC_NO,   KC_NO,   KC____,    KC____,  KC____,  KC____, KC____,   KC_NO,
    KC_NO,  KC_UNDS,      KC_MINUS,  KC_LBRACKET, KC_RBRACKET, KC____,           KC____,  KC_NO,   KC_PGUP,   KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_NO,
    KC_NO,  KC_PIPE,      KC____,    KC_LCBR,     KC_RCBR,     KC____,                             KC_PGDOWN, KC____,  KC____,  KC____, KC____,   KC_NO,
    KC_NO,  LGUI(KC_TAB), KC____,    KC_NO,       KC_NO,       LGUI(LSFT(KC_4)),                   KC____,    KC_NO,   KC_NO,   KC____, KC____,   KC_NO,
                                                  KC____,      KC____,           KC____,  KC____,  KC____,    KC____
  ),
  [2] = LAYOUT_expand(
    KC_NO_14
    KC_NO,  NUMBER_2L    KC_NO,    KC_NO, NUMBER_2R    KC_NO,
    KC_NO,  NUMBER_1L    KC____,   KC_NO, NUMBER_1R    KC_NO,
    KC_NO,  NUMBER_3L                     NUMBER_3R    KC_NO,
    KC_NO,  KC____,  KC____, KC_NO, KC_NO, KC____,                  KC____, KC_NO, KC_NO, KC____, KC____, KC_NO,
                                   KC____, KC____, KC____,  KC____, KC____, KC____
  ),
  [3] = LAYOUT_expand(
    KC_NO_14
    KC_NO, KC_F8,  KC_F7,  KC_F6,  KC_F5,  WEBUSB_PAIR, KC_NO, KC_NO,  KC_AUDIO_VOL_UP,   KC_AUDIO_MUTE, KC____, KC____, RESET,  KC_NO,
    KC_NO, KC_F4,  KC_F3,  KC_F2,  KC_F1,  KC_NO,       KC_NO, KC_NO,  KC_AUDIO_VOL_DOWN, KC____,        KC____, KC____, KC____, KC_NO,
    KC_NO, KC_F12, KC_F11, KC_F10, KC_F9,  KC_NO,                      KC____,            KC____,        KC____, KC____, KC____, KC_NO,
    KC_NO, KC____, KC____, KC_NO,  KC_NO,  KC____,                     KC____,            KC_NO,         KC_NO,  KC____, KC____, KC_NO,
                                   KC____, KC____,     KC____, KC____, KC____, KC____
  ),
  [4] = LAYOUT_expand(
    KC_NO_14
    KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO,   TOGGLE_LAYER_COLOR, KC_NO,  KC_NO,  MU_TOG,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, TD(DANCE_0), KC_NO, KC_NO,   KC_NO,              KC_NO,  KC_NO,  MU_MOD,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO,   RGB_TOG,                            MOON_LED_LEVEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO,   KC_NO,                              KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                      RGB_MOD, KC_NO,              KC_NO,  KC_NO,  KC_NO,          KC_NO
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { // Column first
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, // End of first outer column, left side
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, {0,0,0}, // End of second column
        {0,0,0}, {160,226,44}, {160,227,64}, {160,226,44}, {160,226,44}, // End of third column
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, {0,0,0}, // End of fourth column
        {0,0,0}, {160,226,44}, {162,224,85}, {160,226,44}, {0,0,0}, // End of fifth column
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, // End of the sixth column
        {0,0,0}, {0,0,0}, {0,0,0}, // End of the seventh column, last of left
        {0,0,0}/*first thumb*/, {0,0,0}/*second thumb*/, {0,0,0}/*third thumb*/, {0,0,0}/*2u*/,

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, // End of first outer column, right side
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, {0,0,0}, // End of second column
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, {0,0,0}, // End of third column
        {0,0,0}, {160,226,44}, {160,227,64}, {160,226,44}, {0,0,0}, // End of fourth column
        {0,0,0}, {160,226,44}, {162,224,85}, {160,226,44}, {0,0,0}, // End of fifth column
        {0,0,0}, {160,226,44}, {160,226,44}, {160,226,44}, // End of sixth column
        {0,0,0}, {0,0,0}, {0,0,0}, // End of seventh column, last of the right
        {0,0,0}/*first thumb*/, {0,0,0}/*second thumb*/, {0,0,0}/*third thumb*/, {0,0,0}/*2u*/
    },

    [1] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {92,215,83}, {92,215,83}, {92,215,83}, {0,0,0},
        {0,0,0}, {92,244,124}, {92,244,124}, {0,0,0}, {0,0,0},
        {0,0,0}, {92,244,124}, {92,244,124}, {92,244,124}, {0,0,0},
        {0,0,0}, {92,215,83}, {92,215,83}, {92,215,83}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {41,252,101},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {92,244,124}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {92,244,124}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {92,244,124}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {92,244,124}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {92,215,83}, {92,215,83},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
    },

    [2] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,186,104}, {0,186,104}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
    },

    [3] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0},
        {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0},
        {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0},
        {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {134,255,213}, {134,255,213}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
    },

    [4] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,255,207}, {0,255,207}, {0,255,240}, {0,255,240},
        {0,0,0}, {0,255,240}, {174,255,186}, {0,255,240}, {0,255,240},
        {0,0,0}, {0,255,240}, {0,255,207}, {0,255,240}, {0,0,0},
        {0,0,0}, {0,255,240}, {0,255,240}, {0,255,240}, {0,0,0},
        {0,0,0}, {31,255,255}, {0,255,240}, {31,255,255},
        {0,0,0}, {0,0,0}, {0,0,0},
        {31,255,255}, {0,255,240}, {0,255,240}, {0,255,240},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,255,240}, {0,255,240}, {0,255,240}, {0,255,240},
        {0,0,0}, {0,255,240}, {0,255,240}, {0,255,240}, {0,255,240},
        {0,0,0}, {0,255,240}, {0,255,240}, {0,255,240}, {0,0,0},
        {0,0,0}, {0,255,240}, {0,255,240}, {0,255,240}, {0,0,0},
        {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,255,240}, {0,255,240}, {0,255,240}, {0,255,240}
    },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rgb_matrix_get_suspend_state() || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
