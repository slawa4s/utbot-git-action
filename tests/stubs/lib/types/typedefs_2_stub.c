// 1655848521000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "typedefs_2_stub.h"

#define NULL ((void*)0)

int enumSign1ToInt_symbolic[10];
int enumSign1ToInt_symbolic[10];
int enumSign1ToInt(Sign1 s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&enumSign1ToInt_symbolic, sizeof(enumSign1ToInt_symbolic), "enumSign1ToInt_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(enumSign1ToInt_symbolic, enumSign1ToInt_symbolic[it_23_0] >= -10  & enumSign1ToInt_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return enumSign1ToInt_symbolic[cntCall++];
}


enum __Sign intToSign1_symbolic[10];
enum __Sign intToSign1_symbolic[10];
enum __Sign intToSign1(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&intToSign1_symbolic, sizeof(intToSign1_symbolic), "intToSign1_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                // No constraints for intToSign1_symbolic[it_19_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return intToSign1_symbolic[cntCall++];
}


int enumSign2ToInt_symbolic[10];
int enumSign2ToInt_symbolic[10];
int enumSign2ToInt(Sign2 s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&enumSign2ToInt_symbolic, sizeof(enumSign2ToInt_symbolic), "enumSign2ToInt_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(enumSign2ToInt_symbolic, enumSign2ToInt_symbolic[it_23_0] >= -10  & enumSign2ToInt_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return enumSign2ToInt_symbolic[cntCall++];
}


Sign2 intToSign2_symbolic[10];
Sign2 intToSign2_symbolic[10];
Sign2 intToSign2(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&intToSign2_symbolic, sizeof(intToSign2_symbolic), "intToSign2_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                // No constraints for intToSign2_symbolic[it_19_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return intToSign2_symbolic[cntCall++];
}


