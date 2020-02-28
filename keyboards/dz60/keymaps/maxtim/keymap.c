#include QMK_KEYBOARD_H

//Helpful defines
#define _______ KC_TRNS
#define XXXXXXX KC_NO

//Macros Declare
enum custom_keycodes {
  M_1 = SAFE_RANGE,
  M_2,
  M_3,
  M_4,
  M_5,
  M_6,
  M_7,
  M_8,
  M_9,
  M_0,
  M_A,
  M_B,
  M_D,
  M_F,
  CtrlP,
  Traffic_Liner,
  NEW1111,
  NEW1001,
  NEW1079,
  NEW9999,    //save in Adobe Import folder as NEW9999.wav
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base layer (_BL)
* ### 0 Qwerty
* ```
* ,-----------------------------------------------------------------------------------------.
* | Esc/~|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bkspc   |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
* |-----------------------------------------------------------------------------------------+
* |   Fn1   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* |   LShift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      RShift     |
* |-----------------------------------------------------------------------------------------+
* | Ctrl | Super |  Alt  |              Space                 | Fn2 | Menu | Fn1  |  RCtrl  |
* `-----------------------------------------------------------------------------------------'
* ```
*/

LAYOUT(
  KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,  KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
  TT(1),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,  KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
  KC_LSFT, XXXXXXX, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, XXXXXXX,
  KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(2), KC_APP, XXXXXXX, MO(1),   KC_LCTL),

/*
* ### 1 (_FL) Layer
* ```
* FN Layer
* ,-----------------------------------------------------------------------------------------.
* |  l0  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |   DEL    |
* |-----------------------------------------------------------------------------------------+
* |        | Del |  Up | Home| End |     |     |     |PLAY |STOP | PREV| NEXT |volu |PntScrn|
* |-----------------------------------------------------------------------------------------+
* |         | Lft | Dwn | R   |     |     |     |     |  UP | Up  |     |vold |             |
* |-----------------------------------------------------------------------------------------+
* |           |PGUP |exit  |PGDWN|     |     |     |  LFT| DWN |RGHT|     |     CAPS        |
* |-----------------------------------------------------------------------------------------+
* |      |       |       |              Space                | Fn3 |       |      |         |
* `-----------------------------------------------------------------------------------------'
* ```
*/

LAYOUT(
  TO(0),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
  _______, KC_DEL,  KC_UP,   KC_HOME, KC_END,  _______, _______, _______, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, KC_VOLU, KC_PSCR,
  _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, KC_UP,   KC_UP,   _______, KC_VOLD, _______,
  _______, _______, KC_PGUP, M_F,    KC_PGDOWN,_______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, KC_CAPS, _______,
  _______, _______, _______, _______, _______, _______, TT(3),   _______, _______, _______, _______),

/*    (_RL 2)
### 2 Layer
```
FN Layer
,-----------------------------------------------------------------------------------------.
|RGtog|     |     |     |     |     |     |     |     |     |     |     |     |           |
|-----------------------------------------------------------------------------------------+
|        |     |     |     |     |     |     |     |     |     |     |      |     |       |
|-----------------------------------------------------------------------------------------+
|         |RGmo+|     |     |     |     |Hue+|  SAT+|     |     |BR+  | Eff+|             |
|-----------------------------------------------------------------------------------------+
|           |RGmo-|     |     |     |     |Hue- | SAT-|     |BR-  | Eff-|                 |
|-----------------------------------------------------------------------------------------+
|      |       |       |                                   |      |      |       |        |
`-----------------------------------------------------------------------------------------'
```

*/

LAYOUT(
  RGB_TOG,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX,RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_SAI, XXXXXXX, XXXXXXX, RGB_VAI, RGB_SPI, XXXXXXX,
  XXXXXXX,XXXXXXX, RGB_RMOD,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUD, RGB_SAD, XXXXXXX, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX,
  XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

/*  (_ML)
* ### 3 Layer
* ```
* FN Layer
* ,-----------------------------------------------------------------------------------------.
* |Layer0|    |     |     |     |     |     |     |     |     |     |     |     |           |
* |-----------------------------------------------------------------------------------------+
* |        | MO1 | MO2 | MO3 | MO4 | MO5 |     |     |     |     |CtrlP|      |     |       |
* |-----------------------------------------------------------------------------------------+
* |         | MO6 | MO7 | MO8 | MO9 | MO0 |     |     |     |     |     |     |             |
* |-----------------------------------------------------------------------------------------+
* |           | MOA | MOB |     | MOD |     | weat|     | rewi| Isl |Traf | Traffic_Liner   |
* |-----------------------------------------------------------------------------------------+
* |      |       |       |                                   |      |      |       |        |
* `-----------------------------------------------------------------------------------------'
* ```
*/

LAYOUT(
  TO(0),  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, M_1,    M_2,     M_3,     M_4,     M_5,     _______, _______, _______, _______, CtrlP,   _______, _______, _______,
  _______, M_6,    M_7,     M_8,     M_9,     M_0,     _______, _______, _______, _______, _______, _______, TO(4),
  _______, _______,M_A,     M_B,     _______, M_D,     _______, NEW1111, _______, NEW1079, NEW1001, NEW9999, Traffic_Liner, _______,
  _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______),

  /* Base layer (_BL)
  * ### 4 Qwerty
  * ```
  * ,-----------------------------------------------------------------------------------------.
  * | Esc/~|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bkspc   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
  * |-----------------------------------------------------------------------------------------+
  * |   Fn1   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * |   LShift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      RShift     |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl | Super |  Alt  |              Space                 | Fn2 | Menu | Fn1  |  RCtwwrl  |
  * `-----------------------------------------------------------------------------------------'
  * ```
  */

  LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,  KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    MO(5),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,  KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, XXXXXXX, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, XXXXXXX,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(6), KC_APP, XXXXXXX, MO(5),   KC_LCTL),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case M_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tMonday ");
            }
            return false; break;
        case M_2:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tTuesday ");
            }
            return false; break;
        case M_3:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tWednesday ");
            }
            return false; break;
        case M_4:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tThursday ");
            }
            return false; break;
        case M_5:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tFriday ");
            }
            return false; break;
        case M_6:
            if (record->event.pressed) {
                SEND_STRING("Morning Headlines\t");
            }
            return false; break;
        case M_7:
            if (record->event.pressed) {
                SEND_STRING("Morning Weather");
            }
            return false; break;
        case M_8:
            if (record->event.pressed) {
                SEND_STRING("Morning Brief\tRewind 1079");
            }
            return false; break;
        case M_9:
            if (record->event.pressed) {
                SEND_STRING("Midday Headlines\t\t\t\t\t"
                        SS_LCTRL("c")
                        "\t\t"
                        SS_LCTRL("v")
                        "\t24:59:59"
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB))
                        SS_LSFT(SS_TAP(X_TAB)));
            }
            return false; break;
        case M_0:
            if (record->event.pressed) {
                SEND_STRING("Midday Weather");
            }
            return false; break;
        case M_A:
            if (record->event.pressed) {
                SEND_STRING("The Island");
            }
            return false; break;
        case M_B:
            if (record->event.pressed) {
                SEND_STRING("Rewind 1079");
            }
            return false; break;
        case M_D:
            if (record->event.pressed) {
                SEND_STRING("\t\t\t\t\tSEC\t\t\t\t\t\t \t\n\n");
            }
            return false; break;
        case M_F:
            if (record->event.pressed) {
                SEND_STRING("exit\n");
            }
            return false; break;
        case CtrlP:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\t");
            }
            return false; break;
        case Traffic_Liner:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("p")
                        "\t\t\t\t\t\t\t \t\t\t\t\t\tTraffic Tracker Hotline\t833-900-7623");
            }
            return false; break;
        case NEW1001:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL(SS_LSFT("s")));
                _delay_ms(500);
                SEND_STRING("\t\t\t\t\tD:\\RadioTemp\\NEW1001\n");
                layer_on(0); 
                layer_off(1); 
                layer_off(2); 
                layer_off(3);
            }
            return false; break;
        case NEW1111:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL(SS_LSFT("s")));
                _delay_ms(500);
                SEND_STRING("\t\t\t\t\tD:\\RadioTemp\\NEW1111\n");
                layer_on(0); 
                layer_off(1); 
                layer_off(2); 
                layer_off(3);
            }
            return false; break;
        case NEW1079:
           if (record->event.pressed) {
                SEND_STRING(SS_LCTRL(SS_LSFT("s")));
               _delay_ms(500);
               SEND_STRING("\t\t\t\t\tD:\\RadioTemp\\NEW1079\n");
               layer_on(0); 
               layer_off(1); 
               layer_off(2); 
               layer_off(3);
            }
            return false; break;
        case NEW9999:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL(SS_LSFT("s")));
                _delay_ms(500);
                SEND_STRING("\t\t\t\t\tD:\\RadioTemp\\NEW9999\n");
                layer_on(0); 
                layer_off(1); 
                layer_off(2); 
                layer_off(3);
            }
            return false; break;
    }
  return true;
};
