#pragma once

// Define danish keycodes
#define DK_AE   KC_SCLN       // Æ
#define DK_OE   KC_QUOT       // Ø
#define DK_AA   KC_LBRC       // Å

#define DK_PLUS    KC_MINS       // +
#define DK_ACUT    KC_EQL        // ´ (dead)
#define DK_DIAE    KC_RBRC       // ¨ (dead)
#define DK_QUOT    KC_NUHS       // '
#define DK_MINS    KC_SLSH       // -
#define DK_LABK    KC_NUBS       // <
#define DK_RABK    S(KC_NUBS)    // >
#define DK_EXLM    S(KC_1)       // !
#define DK_DQUO    S(KC_2)       // "
#define DK_HASH    S(KC_3)       // #
#define DK_CURR    S(KC_4)       // ¤
#define DK_PERC    S(KC_5)       // %
#define DK_AMPR    S(KC_6)       // &
#define DK_SLSH    S(KC_7)       // /
#define DK_LPRN    S(KC_8)       // (
#define DK_RPRN    S(KC_9)       // )
#define DK_EQL     S(KC_0)       // =
#define DK_QUES    S(KC_MINS)    // ?
#define DK_GRV     S(KC_EQL)     // ` (dead)
#define DK_CIRC    S(KC_RBRC)    // ^ (dead)
#define DK_ASTR    S(KC_NUHS)    // *
#define DK_SCLN    S(KC_COMM)    // ;
#define DK_COLN    S(KC_DOT)     // :
#define DK_UNDS    S(KC_SLSH)    // _
#define DK_LBRC    ALGR(KC_8)    // [
#define DK_RBRC    ALGR(KC_9)    // ]
#define DK_TILD    ALGR(KC_RBRC) // ~ (dead)

// Mac version of keycodes
#define MAC_AT     LALT(KC_NUHS)      // @
#define MAC_DLR    LSFT(LALT(KC_3))   // $
#define MAC_BSLS   LSFT(LALT(KC_7))   // (backslash)
#define MAC_PIPE   LALT(KC_I)         // |
#define MAC_LCBR   LSFT(LALT(KC_8))   // {
#define MAC_RCBR   LSFT(LALT(KC_9))   // }
#define MAC_PND    LALT(KC_4)         // £
#define MAC_EURO   LSFT(KC_4)         // €

#define MAC_PRV_WRD LALT(KC_LEFT)
#define MAC_NXT_WRD LALT(KC_RIGHT)
#define MAC_UNDO    LCMD(KC_Z)
#define MAC_CUT     LCMD(KC_X)
#define MAC_COPY    LCMD(KC_C)
#define MAC_PSTE    LCMD(KC_Z)


// PC version of keycodes
#define PC_AT      ALGR(KC_2)         // @
#define PC_DLR     ALGR(KC_4)         // $
#define PC_BSLS    ALGR(KC_NUBS)      // (backslash)
#define PC_PIPE    ALGR(KC_EQL)       // |
#define PC_LCBR    ALGR(KC_7)         // {
#define PC_RCBR    ALGR(KC_0)         // }
#define PC_PND     ALGR(KC_3)         // £
#define PC_EURO    ALGR(KC_5)         // €

#define PC_PRV_WRD LCTL(KC_LEFT)
#define PC_NXT_WRD LCTL(KC_RIGHT)
#define PC_UNDO    LCTL(KC_Z)
#define PC_CUT     LCTL(KC_X)
#define PC_COPY    LCTL(KC_C)
#define PC_PSTE    LCTL(KC_Z)
