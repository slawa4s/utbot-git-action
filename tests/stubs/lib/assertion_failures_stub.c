// 1652992786000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "assertion_failures_stub.h"

#define NULL ((void*)0)

int buggy_function1_symbolic[10];
int buggy_function1_symbolic[10];
int buggy_function1(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&buggy_function1_symbolic, sizeof(buggy_function1_symbolic), "buggy_function1_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(buggy_function1_symbolic, buggy_function1_symbolic[it_24_0] >= -10  & buggy_function1_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return buggy_function1_symbolic[cntCall++];
}


int buggy_function2_symbolic[10];
int buggy_function2_symbolic[10];
int buggy_function2(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&buggy_function2_symbolic, sizeof(buggy_function2_symbolic), "buggy_function2_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(buggy_function2_symbolic, buggy_function2_symbolic[it_24_0] >= -10  & buggy_function2_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return buggy_function2_symbolic[cntCall++];
}


int buggy_function3_symbolic[10];
int buggy_function3_symbolic[10];
int buggy_function3(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&buggy_function3_symbolic, sizeof(buggy_function3_symbolic), "buggy_function3_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(buggy_function3_symbolic, buggy_function3_symbolic[it_24_0] >= -10  & buggy_function3_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return buggy_function3_symbolic[cntCall++];
}


