// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_UP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT, KC_DEL
    ),
};


bool oled_task_user(void) {
    oled_write_ln_P(PSTR("Keypad Ready"), false);
    return false;
}
