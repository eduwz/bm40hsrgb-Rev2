/* Copyright 2020 tominabox1
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

enum layers {
  _QWERTY, 
  _COLEMAK,
  _EDUWZ,
  _GAME,
  _LOWER,
  _RAISE,
  _FUNMB,
  _NUMP,
  _ADJUST
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define GAME TG(_GAME)
#define NUMP TG(_NUMP)
#define QWTY DF(_QWERTY)
#define CLMK DF(_COLEMAK)
#define EDWZ DF(_EDUWZ)
#define FUNMB MO(_FUNMB)
#define DCTRL RCTL_T(KC_DEL)
#define SOUND C(G(KC_V))
#define WINU G(KC_UP)
#define WINL G(KC_LEFT)
#define WIND G(KC_DOWN)
#define WINR G(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | GEsc |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | SEnt |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  GUI |  Alt |FuNmb |Lower |    Space    |Raise | Entr |  Alt | Menu | DCtr |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12_1x2uC(
    QK_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_SENT,
    KC_LCTL, KC_LGUI, KC_LALT, FUNMB,     LOWER,   KC_SPC,  RAISE,   KC_ENT,  KC_RALT, KC_APP,  DCTRL
),
/* Colemak-DH
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   D  |   V  |   K  |   H  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_ortho_4x12_1x2uC(
    KC_TRNS, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_TRNS,
    KC_TRNS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_TRNS,
    KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
 ),
/* Layout on progess
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   P  |   D  |   F  |   W  |   J  |   M  |   U  |   O  |   ;  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   A  |   S  |   T  |   R  |   G  |   Y  |   N  |   E  |   L  |   I  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   B  |   C  |   V  |   K  |   H  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_EDUWZ] = LAYOUT_ortho_4x12_1x2uC(
    KC_TRNS, KC_Q,    KC_P,    KC_D,    KC_F,    KC_W,    KC_J,    KC_M,    KC_U,    KC_O,    KC_SCLN, KC_TRNS,
    KC_TRNS, KC_A,    KC_S,    KC_T,    KC_R,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_L,    KC_I,    KC_TRNS,
    KC_TRNS, KC_Z,    KC_X,    KC_B,    KC_C,    KC_V,    KC_K,    KC_H,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
 ),
/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      | Home | Pg Up| Pg Dn|  End |FcsUrl|      | Home | Pg Up| Pg Dn|  End |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  Up  | Left | Down | Right|Search|      | Left | Down | Right|  Up  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy | Paste| Redo |      | WinL | WinD | WinR | WinU |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | ---- |             |Adjust|      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12_1x2uC(
    KC_TRNS,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  C(KC_L), KC_TRNS, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_TRNS,
    KC_TRNS,   KC_UP,   KC_LEFT, KC_DOWN, KC_RGHT, C(KC_F), KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_UP,   KC_TRNS,
    KC_TRNS,   C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y), KC_TRNS, WINL,    WIND,    WINR,    WINU,    KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, ADJUST,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   [  |   ]  |   (  |   )  |   ~  |   '  |   -  |   +  |   =  |   |  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |   {  |   }  |   ^  |   \  |   _  |   <  |   >  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Adjust|             | ---- |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
*/
[_RAISE] = LAYOUT_ortho_4x12_1x2uC(
    KC_GRV,  KC_EXLM,  KC_AT,  KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
    KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_TILD, KC_QUOT, KC_MINS, KC_PLUS, KC_EQL,  KC_PIPE, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_CIRC, KC_BSLS, KC_UNDS, KC_LT,   KC_GT,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ADJUST,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
/* Functions & Numbers
 * ,-----------------------------------------------------------------------------------.
 * |  TAB |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F11 |  F12 | Print|      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | ---- |      |             |      | Sound| Prev | Next | Play |
 * `-----------------------------------------------------------------------------------'
*/
[_FUNMB] = LAYOUT_ortho_4x12_1x2uC(
    KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
    KC_TRNS, KC_F11,  KC_F12,  KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SOUND,   KC_MPRV, KC_MNXT, KC_MPLY
),
/* Game
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   W  |   E  |   R  |   T  |      |      |      |      |   P  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | FuNmB|   A  |   S  |   D  |   F  |   G  |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   4  |   3  |   2  |   1  |             |      |      |      |      | GAME |
 * `-----------------------------------------------------------------------------------'
 */
[_GAME] = LAYOUT_ortho_4x12_1x2uC(
    KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P,    KC_TRNS,
    FUNMB,   KC_A, KC_S, KC_D, KC_F, KC_G,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_4, KC_3, KC_2, KC_1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, GAME
),
/* Numpad
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |   /  |   7  |   8  |   9  |   -  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   *  |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   0  |   1  |   2  |   3  |   =  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |   .  |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMP] = LAYOUT_ortho_4x12_1x2uC(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_TRNS, KC_TRNS
),
/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * | GAME |      | RGB  |RGBM+ | HUE+ | SAT+ |BRGTH+|SPEED+|      |      |      | NUMP |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |RGBM- | HUE- | SAT- |BRGTH-|SPEED-|      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty|Colemk| EdWz |      |      |      |      |      |      | Reset| Debug|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | ---- |             | ---- |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12_1x2uC(
    GAME,  KC_NO, RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO,   KC_NO,   NUMP,
    KC_NO, KC_NO, KC_NO,   RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO,   KC_NO,   KC_NO,
    QWTY,  CLMK,  EDWZ,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT, DB_TOGG, KC_NO,
    KC_NO, KC_NO, KC_NO,   KC_NO,    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO, KC_NO,   KC_NO
)
};

bool rgb_matrix_indicators_advanced_user (uint8_t led_min, uint8_t led_max) {

  /* Layer indicator only on keys with configured keycodes */
  if (get_highest_layer (layer_state) > 0) {
    uint8_t layer = get_highest_layer (layer_state);

    for (uint8_t row = 0; row < MATRIX_ROWS; ++ row) {
      for (uint8_t col = 0; col < MATRIX_COLS; ++ col) {
        uint8_t index = g_led_config. matrix_co [row][col];

        if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
          switch (layer) {
            case _LOWER:
              rgb_matrix_set_color(index, RGB_TEAL);
              break;
            case _RAISE:
              rgb_matrix_set_color(index, RGB_PURPLE);
              break;
            case _FUNMB:
              rgb_matrix_set_color(index, RGB_RED);
              break;
            case _GAME:
              rgb_matrix_set_color(index, RGB_GREEN);
              break;
            case _NUMP:
              rgb_matrix_set_color(index, RGB_BLUE);
              break;
            case _ADJUST:
              rgb_matrix_set_color(index, RGB_ORANGE);
              break;
            default:
              break;
          }
        }
      }
    }
    return true;
  }
  return false;
}
