/* Copyright 2021 Michał Szczepaniak
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
            { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DELETE },
            { KC_M, KC_W, KC_B, KC_P, KC_E, KC_I },
            { KC_TRNS, LCTL(KC_A), LCTL(KC_Z), LCTL(KC_Y), KC_TRNS, KC_TRNS },
            { KC_LSHIFT, KC_LALT, KC_LBRACKET, KC_RBRACKET, KC_K, MO(2) },
            { KC_SPACE, KC_TRNS, KC_X, KC_C, RCS(KC_N), MO(1) }
        },
    [1] = {
            { LCTL(KC_S), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET },
            { LCTL(KC_C), LCTL(KC_V), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
            { LCTL(KC_X), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
            { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
            { LCTL(KC_SPACE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
        },
    [2] = {
            { RGB_TOG, RGB_MODE_PLAIN, RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RESET },
            { KC_TRNS, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, RGB_MODE_XMAS, RGB_MODE_GRADIENT, RGB_MODE_TWINKLE },
            { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
            { KC_TRNS, KC_TRNS, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS },
            { RGB_MODE_RGBTEST, KC_TRNS, RGB_HUI, RGB_HUD, KC_TRNS, KC_TRNS }
        }
};

