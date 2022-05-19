// 1652955986000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "libfunc_stub.h"

#define NULL ((void*)0)

int libfunc_symbolic[10];
int libfunc_symbolic[10];
int libfunc(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&libfunc_symbolic, sizeof(libfunc_symbolic), "libfunc_symbolic");
            for (int it_16_0 = 0; it_16_0 < 10; it_16_0 ++) {
                klee_prefer_cex(libfunc_symbolic, libfunc_symbolic[it_16_0] >= -10  & libfunc_symbolic[it_16_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return libfunc_symbolic[cntCall++];
}

