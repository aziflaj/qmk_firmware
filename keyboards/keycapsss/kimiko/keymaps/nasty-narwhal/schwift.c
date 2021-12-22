#include "schwift.h"

#include QMK_KEYBOARD_H
#include <stdbool.h>

#define SHIFTED_KEYS_COUNT sizeof(shift_reversed_keys) / sizeof(uint8_t)

const uint16_t shift_reversed_keys[] = {
  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
  KC_MINS, KC_QUOT, KC_SCLN
};

bool is_shift_reversible(uint16_t keycode) {
  for (int i = 0; i < SHIFTED_KEYS_COUNT; i++) {
    if (keycode == shift_reversed_keys[i]) {
      return true;
    }
  }

  return false;
}
