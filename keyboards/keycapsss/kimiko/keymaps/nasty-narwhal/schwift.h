#ifndef SCHWIFT_H
#define SCHWIFT_H

#include QMK_KEYBOARD_H
#include <stdbool.h>

extern const uint16_t shift_reversed_keys[];

bool is_shift_reversible(uint16_t keycode);

#endif
