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

enum custom_keycodes {
    ARROW = SAFE_RANGE,
    UPDIR,
    USRNAME,
    // Macros invoked through the Magic key.
    M_DOCSTR,
    M_EQEQ,
    M_INCLUDE,
    M_ION,
    M_MENT,
    M_MKGRVS,
    M_QUEN,
    M_THE,
    M_TMENT,
    M_UPDIR,
    M_NBSP,
    M_NOOP,
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
        KC_NO,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                             KC_NO,   SELWBAK, SELLINE, SELWORD, KC_NO,   KC_NO,
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
        KC_ESC,  KC_GRV,  KC_ASTR, KC_LT,   KC_GT,   KC_UNDS,                            KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR,  KC_NO,   KC_NO,
        KC_NO,   KC_EXLM, KC_DQT,  LT(NAV, KC_SLSH),   LT(NAV, KC_EQL),   KC_PLUS,       KC_HASH, KC_LPRN, KC_RPRN, KC_MINS, KC_AMPR, KC_NO,
        KC_NO,   KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,                            KC_AT,   KC_SLSH, KC_PIPE, KC_BSLS, KC_NO,   KC_NO,
                                                            USRNAME,  KC_NO,   KC_NO,           KC_NO,  KC_NO,  KC_NO
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

///////////////////////////////////////////////////////////////////////////////
// Combos (https://docs.qmk.fm/features/combo)
///////////////////////////////////////////////////////////////////////////////

const uint16_t PROGMEM caps_lock_combo[]  = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM caps_word_combo[]  = {HRM_V, HRM_M, COMBO_END};
const uint16_t PROGMEM copy_combo[]  = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cut_combo[]  = {KC_X, HRM_V, COMBO_END};
const uint16_t PROGMEM paste_combo[]  = {KC_C, HRM_V, COMBO_END};
const uint16_t PROGMEM game_combo[]  = {KC_GRV, KC_BSLS, COMBO_END};
const uint16_t PROGMEM comm_dot_combo[]  = {KC_COMM, HRM_DOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(caps_lock_combo, CL_TOGG),
    COMBO(caps_word_combo, CW_TOGG),
    COMBO(copy_combo, LCTL(KC_C)),
    COMBO(cut_combo, LCTL(KC_X)),
    COMBO(paste_combo, LCTL(KC_V)),
    COMBO(game_combo, TG(GAME)),
    COMBO(comm_dot_combo, KC_SEMICOLON)
};

///////////////////////////////////////////////////////////////////////////////
// Tap-hold configuration (https://docs.qmk.fm/tap_hold)
///////////////////////////////////////////////////////////////////////////////

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    // Use lower tapping term for HRM shift keys and the LT NAV key
    switch (keycode) {
        case HRM_D:
        case HRM_K:
        case HRM_SR:
        case HRM_SE:
            return TAPPING_TERM - 45;
        case LT(NAV, KC_DEL):
            return TAPPING_TERM - 100;
        default:
            return TAPPING_TERM;
    }
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record,
                           uint16_t prev_keycode) {
    // Only apply Flow Tap when following a letter key, and not hotkeys.
    if (get_tap_keycode(prev_keycode) <= KC_Z &&
        (get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) == 0) {
        switch (keycode) {
            case HRM_A:
            case HRM_S:
            case HRM_D:
            case HRM_F:
            case HRM_Z:
            case HRM_J:
            case HRM_K:
            case HRM_L:
            case HRM_SC:
            case HRM_SLSH:
            case HRM_DOT:
            case HRM_SS:
            case HRM_ST:
            case HRM_SR:
            case HRM_SD:
            case HRM_SX:
            case HRM_SN:
            case HRM_SE:
            case HRM_SA:
            case HRM_SI:
                return FLOW_TAP_TERM;

            case HRM_V:
            case HRM_M:
            case HRM_SG:
            case HRM_SH:
                return FLOW_TAP_TERM - 25;
        }
    }

    return 0;
}

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L',    'L',    'L',    'L',    'L',                               'R',    'R',    'R',    'R',    'R',    'R',
        'L', 'L',    'L',    'L',    'L',    'L',                               'R',    'R',    'R',    'R',    'R',    'R',
        'L', 'L',    'L',    'L',    'L',    'L',                               'R',    'R',    'R',    'R',    'R',    'R',
        'L', 'L',    'L',    'L',    'L',    'L',                               'R',    'R',    'R',    'R',    'R',    'R',
                                         'L',    'L',    'L',                               'R',    'R',    'R'
    );

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    // The following describes the magic key functionality, where * represents the
    // magic key and @ the repeat key. For example, tapping A and then the magic key
    // types "ao". Most of this is coded in my `get_alt_repeat_key_keycode_user()`
    // definition below.
    //
    // SFB removal and common n-grams:
    //
    //     A * -> AO     L * -> LK      S * -> SK
    //     C * -> CY     M * -> MENT    T * -> TMENT
    //     D * -> DY     O * -> OA      U * -> UE
    //     E * -> EU     P * -> PY      Y * -> YP
    //     G * -> GY     Q * -> QUEN    spc * -> THE
    //     I * -> ION    R * -> RL
    //
    // When the magic key types a letter, following it with the repeat key produces
    // "n". This is useful to type certain patterns without SFBs.
    //
    //     A * @ -> AON             (like "kaon")
    //     D * @ -> DYN             (like "dynamic")
    //     E * @ -> EUN             (like "reunite")
    //     O * @ -> OAN             (like "loan")
    //
    // Other patterns:
    //
    //     spc * @ -> THEN
    //     I * @ -> IONS            (like "nations")
    //     M * @ -> MENTS           (like "moments")
    //     Q * @ -> QUENC           (like "frequency")
    //     T * @ -> TMENTS          (like "adjustments")
    //     = *   -> ===             (JS code)
    //     ! *   -> !==             (JS code)
    //     " *   -> """<cursor>"""  (Python code)
    //     ` *   -> ```<cursor>```  (Markdown code)
    //     # *   -> #include        (C code)
    //     & *   -> &nbsp;          (HTML code)
    //     . *   -> ../             (shell)
    //     . * @ -> ../../
    keycode = get_tap_keycode(keycode);

    if ((mods & ~MOD_MASK_SHIFT) == 0) {
        switch (keycode) {
            case KC_SPC:    // spc -> THE
            case KC_ENT:
            case KC_TAB:
                return M_THE;

            // Fix SFBs and awkward strokes.
            case KC_A: return KC_O;         // A => O
            case KC_O: return KC_A;         // O -> A
            case KC_E: return KC_U;         // E -> U
            case KC_U: return KC_E;         // U -> E
            case KC_I:
                if ((mods & MOD_MASK_SHIFT) == 0) {
                    return M_ION;           // I => ON
                } else {
                    return KC_QUOT;         // Shift I => '
                }
            case KC_M: return M_MENT;       // M -> ENT
            case KC_Q: return M_QUEN;       // Q -> UEN
            case KC_T: return M_TMENT;      // T -> TMENT

            case KC_C: return KC_Y;         // C -> Y
            case KC_D: return KC_Y;         // D -> Y
            case KC_G: return KC_Y;         // G -> Y
            case KC_P: return KC_Y;         // P -> Y
            case KC_Y: return KC_P;         // Y -> P

            case KC_L: return KC_K;         // L -> K
            case KC_S: return KC_K;         // S -> K

            case KC_R: return KC_L;         // R -> L
            case KC_DOT:
                if ((mods & MOD_MASK_SHIFT) == 0) {
                return M_UPDIR;  // . -> ./
                }
                return M_NOOP;
            case KC_HASH: return M_INCLUDE;  // # -> include
            case KC_AMPR: return M_NBSP;     // & -> nbsp;
            case KC_EQL: return M_EQEQ;      // = -> ==
            case KC_RBRC: return KC_SCLN;    // ] -> ;
            case KC_AT: return USRNAME;      // @ -> <username>

            case KC_PLUS:
            case KC_MINS:
            case KC_ASTR:
            case KC_PERC:
            case KC_PIPE:
            case KC_CIRC:
            case KC_TILD:
            case KC_EXLM:
            case KC_DLR:
            case KC_RABK:
            case KC_LPRN:
            case KC_RPRN:
            case KC_UNDS:
            case KC_COLN:
                return KC_EQL;

            case KC_F:
            case KC_V:
            case KC_X:
            case KC_SCLN:
            case KC_1 ... KC_0:
                return M_NOOP;

        }
    }

    switch (keycode) {
        case SELWBAK: return SELWORD;
        case SELWORD: return SELWBAK;
    }

    return KC_TRNS;
}

// An enhanced version of SEND_STRING: if Caps Word is active, the Shift key is
// held while sending the string. Additionally, the last key is set such that if
// the Repeat Key is pressed next, it produces `repeat_keycode`. This helper is
// used for several macros below in my process_record_user() function.
#define MAGIC_STRING(str, repeat_keycode) \
    magic_send_string_P(PSTR(str), (repeat_keycode))
static void magic_send_string_P(const char* str, uint16_t repeat_keycode) {
    uint8_t saved_mods = 0;
    // If Caps Word is on, save the mods and hold Shift.
    if (is_caps_word_on()) {
        saved_mods = get_mods();
        register_mods(MOD_BIT_LSHIFT);
    }

    send_string_P(str);  // Send the string.
    set_last_keycode(repeat_keycode);

    // If Caps Word is on, restore the mods.
    if (is_caps_word_on()) {
        set_mods(saved_mods);
    }
}


///////////////////////////////////////////////////////////////////////////////
// User macro callbacks (https://docs.qmk.fm/feature_macros)
///////////////////////////////////////////////////////////////////////////////

bool process_record_user(uint16_t keycode, keyrecord_t *record) {


    // If alt repeating key A, E, I, O, U, Y with no mods other than Shift, set
    // the last key to KC_N. Above, alternate repeat of KC_N is defined to be
    // again KC_N. This way, either tapping alt repeat and then repeat (or
    // equivalently double tapping alt repeat) is useful to type certain patterns
    // without SFBs:
    //
    //   D <altrep> <rep> -> DYN (as in "dynamic")
    //   O <altrep> <rep> -> OAN (as in "loan")

    const uint8_t all_mods = (get_mods() | get_weak_mods());

    if (get_repeat_key_count() < 0 && (all_mods & ~MOD_MASK_SHIFT) == 0 &&
        (keycode == KC_A || keycode == KC_E || keycode == KC_I ||
         keycode == KC_O || keycode == KC_U || keycode == KC_Y)) {
        set_last_keycode(KC_N);
        set_last_mods(0);
    }

    if (record->event.pressed) {
        switch (keycode) {
            case UPDIR:
                SEND_STRING_DELAY("../", TAP_CODE_DELAY);
                return false;
            case USRNAME:
                SEND_STRING_DELAY("wtillett", TAP_CODE_DELAY);
            case M_THE:     MAGIC_STRING("the", KC_N); break;
            case M_ION:     MAGIC_STRING(/*i*/"on", KC_S); break;
            case M_MENT:    MAGIC_STRING(/*m*/"ent", KC_S); break;
            case M_QUEN:    MAGIC_STRING(/*q*/"uen", KC_C); break;
            case M_TMENT:   MAGIC_STRING(/*t*/"ment", KC_S); break;
            case M_UPDIR:   MAGIC_STRING(/*.*/"./", UPDIR); break;
            case M_INCLUDE: SEND_STRING_DELAY(/*#*/"include ", TAP_CODE_DELAY); break;
            case M_EQEQ:    SEND_STRING_DELAY(/*=*/"==", TAP_CODE_DELAY); break;
            case M_NBSP:    SEND_STRING_DELAY(/*&*/"nbsp;", TAP_CODE_DELAY); break;

        }
    }
    return true;
}
