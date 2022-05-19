// 1652955986000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "qualifiers_stub.h"

#define NULL ((void*)0)

int c_strcmp_2_symbolic[10];
int c_strcmp_2_symbolic[10];
int c_strcmp_2(const char * a, const char * b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&c_strcmp_2_symbolic, sizeof(c_strcmp_2_symbolic), "c_strcmp_2_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                klee_prefer_cex(c_strcmp_2_symbolic, c_strcmp_2_symbolic[it_19_0] >= -10  & c_strcmp_2_symbolic[it_19_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return c_strcmp_2_symbolic[cntCall++];
}


int ishello_2_symbolic[10];
int ishello_2_symbolic[10];
int ishello_2(char * a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&ishello_2_symbolic, sizeof(ishello_2_symbolic), "ishello_2_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(ishello_2_symbolic, ishello_2_symbolic[it_18_0] >= -10  & ishello_2_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return ishello_2_symbolic[cntCall++];
}


const long long * returns_pointer_with_min_modifier(long long a, long long b) {
    return NULL;
}


char * foo__(int a) {
    return "";
}


const char * foo_bar(int a) {
    return "";
}


const struct MinMaxQ * returns_struct_with_min_max_Q(int a, int b) {
    return NULL;
}

