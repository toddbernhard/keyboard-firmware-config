#include "userspace.h"

/* Bottom Row Mods */
#ifdef BOTTOM_ROW_MODS
    /* Permissive hold
    > If you press a dual-role key, tap another key (press and release) and then release the dual-role key,
    > all within the tapping term, by default the dual-role key will perform its tap action.
    > If the PERMISSIVE_HOLD option is enabled, the dual-role key will perform its hold action instead.
    */
    bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
        /* True for all except...
           - ctrl
           - alt
        */
        switch (keycode) {
            case CT_Q:
            case CT_V:
            case AT_J:
            case AT_W:
                return false;
            default:
                return true;
        }
    }

    uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
        switch (keycode) {
            // Faster for Shift modtaps
            case SF_Z:
            case SF_SCLN:
                return 190;
            // Slow for CTRL modtaps
            case CT_Q:
            case RCTL_T(KC_V):
                return 3000;
            // Even slower for ALT modtaps
            case AT_J:
            case AT_W:
                return 300;
            default:
                return 210;
        }
    }
#endif

/* Combos */
#ifdef COMBO_ENABLE
    #include "g/keymap_combo.h"
#endif
