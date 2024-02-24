// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐             ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │             │ 6 │ 7 │ 8 │ 9 │ 0 │ / │
     * ├───┼───┼───┼───┼───┼───┤             ├───┼───┼───┼───┼───┼───┤
     * │TAB│ Q │ W │ E │ R │ T │             │ Y │ U │ I │ O │ P │ * │
     * ├───┼───┼───┼───┼───┼───┤             ├───┼───┼───┼───┼───┼───┤
     * │SHT│ A │ S │ D │ F │ G │             │ H │ J │ K │ L │ 3 │ - │
     * ├───┼───┼───┼───┼───┼───┤             ├───┼───┼───┼───┼───┼───┤
     * │CTR│ Z │ X │ C │ V │ B │             │ N │ M │ , │ . │ / │ + │
     * └───┴───┴───┴───┴───┴───┘             └───┴───┴───┴───┴───┴───┘
     *                      ┌───┬───┐   ┌───┬───┐        ┌───┬───┬───┐
     *                      │ 0 │ + │   │ 0 │ + │        │ < │MID│ > │
     *                      └───┴───┘   └───┴───┘        └───┴───┴───┘
     */
    [0] = LAYOUT_ibakey54(
        KC_ESC  , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,
        KC_TAB  , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,
        KC_LSFT , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,
        KC_LCTL , KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      ,
                                                      KC_PENT   , KC_SPC    ,

        KC_6    , KC_7      , KC_8      , KC_9      , KC_0      , KC_EQL    ,
        KC_Y    , KC_U      , KC_I      , KC_O      , KC_P      , KC_DEL    ,
        KC_H    , KC_J      , KC_K      , KC_L      , KC_SCLN   , KC_QUOT   ,
        KC_N    , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   , KC_HOME   ,
        KC_BSPC , KC_APP
    ),
};

// #ifdef OLED_ENABLE
// bool oled_task_user(void) {
//     // Host Keyboard Layer Status
//     oled_write_P(PSTR("Layer: "), false);

//     switch (get_highest_layer(layer_state)) {
//         case _QWERTY:
//             oled_write_P(PSTR("Default\n"), false);
//             break;
//         case _FN:
//             oled_write_P(PSTR("FN\n"), false);
//             break;
//         case _ADJ:
//             oled_write_P(PSTR("ADJ\n"), false);
//             break;
//         default:
//             // Or use the write_ln shortcut over adding '\n' to the end of your string
//             oled_write_ln_P(PSTR("Undefined"), false);
//     }

//     // Host Keyboard LED Status
//     led_t led_state = host_keyboard_led_state();
//     oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
//     oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
//     oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

//     return false;
// }
// #endif
