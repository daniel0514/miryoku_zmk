#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#define XXX &none

#define MIRYOKU_LAYERMAPPING_BASE( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LBKT  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RBKT \
&kp DLLR  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SEMI \
&kp LPAR  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RPAR \
                    K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYERMAPPING_EXTRA( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC  &kp TAB    &kp Q  &kp W  &kp E  &kp R       &kp T  &kp Y  &kp U  &kp I         &kp O       XXX \
XXX      &kp LSHFT  &kp A  &kp S  &kp D  &kp F       &kp G  &kp H  &kp J  &kp K         &kp L       XXX \
XXX      &kp LCTRL  &kp Z  &kp X  &kp C  &kp V       &kp B  &kp N  &kp M  &kp KP_COMMA  &kp KP_DOT  XXX \
                 &kp LALT  &kp SPC   &mo U_TAP       U_NP   U_NP   U_NP


#define MIRYOKU_LAYERMAPPING_TAP( \
          K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
          K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
          K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
          N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC  &kp TAB    &kp N1  &kp W  &kp N3  &kp N5       &kp F1  &kp F2    &kp F3    &kp F4    &kp F5    XXX \
XXX      &kp LSHFT  &kp A   &kp S  &kp D   &kp N6       &kp F6  &kp F7    &kp F8    &kp F9    &kp F10   XXX \
XXX      &kp LCTRL  &kp N2  &kp X  &kp N4  &kp N7       &kp P   &kp SEMI  &kp FSLH  &kp LBKT  &kp RBKT  XXX \
                 &kp LALT       &kp SPC    XXX       &to U_BASE        U_NP      U_NP


#define MIRYOKU_LAYERMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K09  K18  K07  K08  &kp RET \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K19  K06  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYERMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K09  K18  K07  K08  &kp RET \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K19  K06  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

