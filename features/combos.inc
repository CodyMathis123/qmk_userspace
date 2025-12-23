// 3x5_2 layout key reference
// KC_Q    KC_W    KC_E    KC_R    KC_T      KC_Y    KC_U    KC_I    KC_O    KC_P
// HM_A    HM_S    HM_D    HM_F    KC_G      KC_H    HM_J    HM_K    HM_L    HM_QUOT
// KC_Z    KC_X    KC_C    KC_V    KC_B      KC_N    TH_M    TH_COMM TH_DOT  TH_SLSH
//                      SYM_TAB LCA_ENT      SFT_SPC NUM_BSP

COMB(nav_dn,  KC_DOWN,  KC_M,    KC_COMM)
COMB(nav_up,  KC_UP,  KC_COMM, KC_DOT)
// caps lock
COMB(caps_l, KC_CAPS, HM_A, HM_QUOT)
// backslash - X and C
COMB(bk_sls, KC_BSLS, KC_X, KC_C)
// semicolon - Z and X
COMB(semicolon, KC_SCLN, KC_Z, KC_X)
// - or Minus - C and V
COMB(dash, KC_MINS, KC_C, KC_V)
