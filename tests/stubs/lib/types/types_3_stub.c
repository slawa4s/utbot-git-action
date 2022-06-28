// 1656451883000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "types_3_stub.h"

#define NULL ((void*)0)

int extract_value_symbolic[10];
int _extract_value_symbolic[10];
int extract_value(struct UnnamedTypeUnionField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_extract_value_symbolic, sizeof(_extract_value_symbolic), "_extract_value_symbolic");
            for (int it_57_0 = 0; it_57_0 < 10; it_57_0 ++) {
                klee_prefer_cex(_extract_value_symbolic, _extract_value_symbolic[it_57_0] >= -10  & _extract_value_symbolic[it_57_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _extract_value_symbolic[cntCall++];
}


int extract_value_2_symbolic[10];
int _extract_value_2_symbolic[10];
int extract_value_2(union UnnamedTypeStructField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_extract_value_2_symbolic, sizeof(_extract_value_2_symbolic), "_extract_value_2_symbolic");
            for (int it_58_0 = 0; it_58_0 < 10; it_58_0 ++) {
                klee_prefer_cex(_extract_value_2_symbolic, _extract_value_2_symbolic[it_58_0] >= -10  & _extract_value_2_symbolic[it_58_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _extract_value_2_symbolic[cntCall++];
}


int extract_value_3_symbolic[10];
int _extract_value_3_symbolic[10];
int extract_value_3(struct AnonymousUnionField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_extract_value_3_symbolic, sizeof(_extract_value_3_symbolic), "_extract_value_3_symbolic");
            for (int it_59_0 = 0; it_59_0 < 10; it_59_0 ++) {
                klee_prefer_cex(_extract_value_3_symbolic, _extract_value_3_symbolic[it_59_0] >= -10  & _extract_value_3_symbolic[it_59_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _extract_value_3_symbolic[cntCall++];
}


int extract_value_4_symbolic[10];
int _extract_value_4_symbolic[10];
int extract_value_4(union AnonymousStructField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_extract_value_4_symbolic, sizeof(_extract_value_4_symbolic), "_extract_value_4_symbolic");
            for (int it_60_0 = 0; it_60_0 < 10; it_60_0 ++) {
                klee_prefer_cex(_extract_value_4_symbolic, _extract_value_4_symbolic[it_60_0] >= -10  & _extract_value_4_symbolic[it_60_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _extract_value_4_symbolic[cntCall++];
}


long sum_of_symbolic[10];
long _sum_of_symbolic[10];
long sum_of(struct Vector arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sum_of_symbolic, sizeof(_sum_of_symbolic), "_sum_of_symbolic");
            for (int it_61_0 = 0; it_61_0 < 10; it_61_0 ++) {
                klee_prefer_cex(_sum_of_symbolic, _sum_of_symbolic[it_61_0] >= -10  & _sum_of_symbolic[it_61_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sum_of_symbolic[cntCall++];
}


void accept_incomplete(struct IncompleteType * arg) {
    return;
}


struct IncompleteType * return_incomplete() {
    return NULL;
}


struct ForwardDecl * pass_forward_decl(struct ForwardDecl * arg) {
    return NULL;
}


long mul_of_symbolic[10];
long _mul_of_symbolic[10];
long mul_of(struct SupportedStruct1 arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_mul_of_symbolic, sizeof(_mul_of_symbolic), "_mul_of_symbolic");
            for (int it_62_0 = 0; it_62_0 < 10; it_62_0 ++) {
                klee_prefer_cex(_mul_of_symbolic, _mul_of_symbolic[it_62_0] >= -10  & _mul_of_symbolic[it_62_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _mul_of_symbolic[cntCall++];
}


_Bool check_option_symbolic[10];
_Bool _check_option_symbolic[10];
_Bool check_option() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_check_option_symbolic, sizeof(_check_option_symbolic), "_check_option_symbolic");
            for (int it_63_0 = 0; it_63_0 < 10; it_63_0 ++) {
                // No constraints for _check_option_symbolic[it_63_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _check_option_symbolic[cntCall++];
}


