// 1652955986000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "packed_structs_stub.h"

#define NULL ((void*)0)

int get_sign_packedStruct1_symbolic[10];
int get_sign_packedStruct1_symbolic[10];
int get_sign_packedStruct1(struct PackedStruct1 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_sign_packedStruct1_symbolic, sizeof(get_sign_packedStruct1_symbolic), "get_sign_packedStruct1_symbolic");
            for (int it_31_0 = 0; it_31_0 < 10; it_31_0 ++) {
                klee_prefer_cex(get_sign_packedStruct1_symbolic, get_sign_packedStruct1_symbolic[it_31_0] >= -10  & get_sign_packedStruct1_symbolic[it_31_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_sign_packedStruct1_symbolic[cntCall++];
}


char get_val_by_packedStruct2_symbolic[10];
char get_val_by_packedStruct2_symbolic[10];
char get_val_by_packedStruct2(struct PackedStruct2 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_val_by_packedStruct2_symbolic, sizeof(get_val_by_packedStruct2_symbolic), "get_val_by_packedStruct2_symbolic");
            for (int it_33_0 = 0; it_33_0 < 10; it_33_0 ++) {
                klee_prefer_cex(get_val_by_packedStruct2_symbolic, get_val_by_packedStruct2_symbolic[it_33_0] >= 'a' & get_val_by_packedStruct2_symbolic[it_33_0] <= 'z' & get_val_by_packedStruct2_symbolic[it_33_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_val_by_packedStruct2_symbolic[cntCall++];
}


short get_val_by_otherPackedStruct_symbolic[10];
short get_val_by_otherPackedStruct_symbolic[10];
short get_val_by_otherPackedStruct(struct OtherPackedStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_val_by_otherPackedStruct_symbolic, sizeof(get_val_by_otherPackedStruct_symbolic), "get_val_by_otherPackedStruct_symbolic");
            for (int it_37_0 = 0; it_37_0 < 10; it_37_0 ++) {
                klee_prefer_cex(get_val_by_otherPackedStruct_symbolic, get_val_by_otherPackedStruct_symbolic[it_37_0] >= -10  & get_val_by_otherPackedStruct_symbolic[it_37_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_val_by_otherPackedStruct_symbolic[cntCall++];
}


