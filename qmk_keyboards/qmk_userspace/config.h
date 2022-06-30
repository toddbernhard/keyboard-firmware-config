#pragma once

#ifdef BOTTOM_ROW_MODS
    #define IGNORE_MOD_TAP_INTERRUPT
    #define TAPPING_TERM_PER_KEY
#endif

#ifdef COMBO_ENABLE
    #define COMBO_TERM 45
#endif
