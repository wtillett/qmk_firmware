// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    STURDY,
    NAV,
    NUM,
    SYM,
    WIN,
    GAME,
};

enum keycode_aliases {
    MAGIC = QK_AREP,
    // QWERTY HRMs
    HRM_A = LALT_T(KC_A),
    HRM_S = LT(SYM, KC_S),
    HRM_D = LSFT_T(KC_D),
    HRM_F = LT(NUM, KC_F),
    HRM_Z = LGUI_T(KC_Z),
    HRM_V = LCTL_T(KC_V),

    HRM_J = LT(WIN, KC_J),
    HRM_K = RSFT_T(KC_K),
    HRM_L = LT(SYM, KC_L),
    HRM_SC = RALT_T(KC_SCLN),
    HRM_SLSH = RGUI_T(KC_SLSH),
    HRM_DOT = LT(WIN, KC_DOT),
    HRM_M = RCTL_T(KC_M),

    // Sturdy QRMs
    HRM_SS = LALT_T(KC_S),
    HRM_ST= LT(SYM, KC_T),
    HRM_SR = LSFT_T(KC_R),
    HRM_SD = LT(NUM, KC_D),
    HRM_SX = LGUI_T(KC_X),
    HRM_SG = LCTL_T(KC_G),


    HRM_SN = LT(WIN, KC_N),
    HRM_SE = RSFT_T(KC_E),
    HRM_SA = LT(SYM, KC_A),
    HRM_SI = RALT_T(KC_I),
    HRM_SH = RCTL_T(KC_H)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // 0
    [BASE] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSPC,
        KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_BSPC, HRM_A,   HRM_S,   HRM_D,   HRM_F,   KC_G,                               KC_H,    HRM_J,   HRM_K,   HRM_L,   HRM_SC,  KC_QUOT,
        KC_LCTL, HRM_Z,   KC_X,    KC_C,    HRM_V,   KC_B,                               KC_N,    HRM_M,   KC_COMM, HRM_DOT, HRM_SLSH, MAGIC,
                                    LT(NAV, KC_BSPC),  LT(WIN, KC_TAB),   QK_REP,           LT(SYM, KC_SPC),  LT(NAV, KC_ENT),  LT(NAV, KC_DEL)
    ),
    // 1
    [STURDY] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSPC,
        KC_GRV,  KC_V,    KC_M,    KC_L,    KC_C,    KC_P,                               KC_B,    MAGIC,   KC_U,    KC_O,    KC_Q,    KC_BSLS,
        KC_BSPC, HRM_SS,  HRM_ST,  HRM_SR,  HRM_SD,  KC_Y,                               KC_F,    HRM_SN,  HRM_SE,  HRM_SA,  HRM_SI,  KC_QUOT,
        KC_LCTL, HRM_SX,  KC_K,    KC_J,    HRM_SG,   KC_W,                              KC_Z,    HRM_SH,  KC_COMM, HRM_DOT, HRM_SLSH, MAGIC,
                                    LT(NAV, KC_BSPC),  LT(WIN, KC_TAB),   QK_REP,           LT(SYM, KC_SPC),  LT(NAV, KC_ENT),  LT(NAV, KC_DEL)
    ),
    // 2
    [NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PRINT_SCREEN,
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_HOME, KC_PGUP, KC_UP,   KC_PGDN, KC_NO,   KC_NO,
        KC_NO,   KC_F6,   KC_LALT, KC_LSFT, KC_LCTL, KC_F7,                              KC_END,  KC_LEFT, KC_DOWN, KC_RIGHT,KC_INS,  KC_NO,
        KC_NO,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                            KC_NO,  KC_NO,   KC_NO,           KC_NO,  KC_NO,  KC_NO
    ),
    // 3
    [NUM] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_LAYER_LOCK,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_PLUS,   KC_7,   KC_8,   KC_9,   KC_ASTR,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_COMM,   KC_4,   KC_5,   KC_6,   KC_SLSH,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_MINS,   KC_1,   KC_2,   KC_3,   KC_ENT,   KC_NO,
                                                            KC_NO,  KC_NO,   KC_ENT,           KC_TAB,  KC_0,  KC_DOT
    ),
    // 4
    [SYM] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_ESC,  KC_GRV,  KC_MINS, KC_LT,   KC_GT,   KC_UNDS,                            KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR,  KC_NO,   KC_NO,
        KC_NO,   KC_EXLM, KC_DQT,  LT(NAV, KC_SLSH),   LT(NAV, KC_EQL),   KC_PLUS,       KC_HASH, KC_LPRN, KC_RPRN, KC_MINS, KC_AMPR, KC_NO,
        KC_NO,   KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,                            KC_AT,   KC_SLSH, KC_PIPE, KC_BSLS, KC_NO,   KC_NO,
                                                            KC_NO,  KC_NO,   KC_NO,           KC_NO,  KC_NO,  KC_NO
    ),
    // 5
    [WIN] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_F6,   KC_NO,   LGUI(KC_D),KC_NO, KC_F7,                              KC_NO,   KC_NO,   LALT(KC_TAB), LSA(KC_TAB),   KC_NO,   KC_NO,
        KC_NO,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                            KC_NO,  KC_NO,   KC_NO,           KC_NO,  KC_NO,  KC_NO
    ),
    // 6
    [GAME] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,  KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
                                               KC_LALT,  KC_LSFT,   KC_SPC,           KC_SPC,  KC_ENT,  KC_RGUI
    )
};
