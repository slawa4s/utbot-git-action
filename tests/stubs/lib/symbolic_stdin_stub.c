// 1652992786000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "symbolic_stdin_stub.h"

#define NULL ((void*)0)

int check_password_symbolic[10];
int check_password_symbolic[10];
int check_password(int fd) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&check_password_symbolic, sizeof(check_password_symbolic), "check_password_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(check_password_symbolic, check_password_symbolic[it_23_0] >= -10  & check_password_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return check_password_symbolic[cntCall++];
}


