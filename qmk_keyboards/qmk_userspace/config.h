#pragma once

#ifdef MODTAPS
    #define IGNORE_MOD_TAP_INTERRUPT
    #define TAPPING_TERM 210
    #define TAPPING_TERM_PER_KEY
    #define PERMISSIVE_HOLD
#endif

#ifdef COMBO_ENABLE
    #define COMBO_TERM 45
#endif
