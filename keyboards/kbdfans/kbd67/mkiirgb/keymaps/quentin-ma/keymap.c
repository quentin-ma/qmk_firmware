#include "keymap_french.h"
#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
			FR_SUP2,       FR_AMPR,     FR_EACU,     FR_DQUO,  FR_QUOT,  FR_LPRN,  FR_MINS,    FR_EGRV,  FR_UNDS,    FR_CCED,     FR_AGRV,     FR_RPRN,  KC_EQL,  KC_BSPC,   KC_HOME,\
		    KC_TAB,        FR_A,     FR_Z,     FR_E,  FR_R,  FR_T,  FR_Y,    FR_U,  FR_I,    FR_O,     FR_P,     FR_CIRC,  FR_DLR, KC_BSLASH, KC_PGUP,\
			CTL_T(KC_CAPS),FR_Q,     FR_S,     FR_D,  FR_F,  FR_G,  FR_H,    FR_J,  FR_K,    FR_L,     FR_M,  FR_UGRV,   KC_ENT,    KC_PGDN,\
		    KC_LSFT,       FR_W,     FR_X,     FR_C,  FR_V,  FR_B,  FR_N,    FR_COMM,  FR_SCLN, FR_COLN,   FR_EXLM,  KC_RSFT,           KC_UP,     KC_END,\
		    KC_LCTL,       KC_LGUI,  KC_LALT,                KC_SPC,                KC_RALT,           MO(1),    KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
			KC_GESC,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,\
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_PGUP,\
			CTL_T(KC_CAPS),RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EEP_RST,  KC_PGDN,\
		    KC_LSFT,       KC_NUBS,  S(KC_NUBS), KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_VOLU,  KC_MUTE,\
		    KC_TRNS,       KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS,          KC_TRNS,  KC_MPRV,          KC_VOLD,  KC_MNXT),
};
void matrix_init_user(void)
{
  //user initialization
}

void matrix_scan_user(void)
{
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	  return true;
}
