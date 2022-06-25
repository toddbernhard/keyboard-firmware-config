
# If COMBOS ...
ifeq ($(strip $(COMBO_ENABLE)), yes)
  # Gboards' combos   https://combos.gboards.ca/docs/combos/
  VPATH += keyboards/gboards
endif

SRC += userspace.c
