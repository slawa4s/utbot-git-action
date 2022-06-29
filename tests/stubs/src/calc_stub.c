// 1656490931000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "calc_stub.h"

#define NULL ((void*)0)

int calc_two_numbers_symbolic[10];
int _calc_two_numbers_symbolic[10];
int calc_two_numbers(char op, int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_calc_two_numbers_symbolic, sizeof(_calc_two_numbers_symbolic), "_calc_two_numbers_symbolic");
            for (int it_16_0 = 0; it_16_0 < 10; it_16_0 ++) {
                klee_prefer_cex(_calc_two_numbers_symbolic, _calc_two_numbers_symbolic[it_16_0] >= -10  & _calc_two_numbers_symbolic[it_16_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _calc_two_numbers_symbolic[cntCall++];
}


int f_symbolic[10];
int _f_symbolic[10];
int f(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_f_symbolic, sizeof(_f_symbolic), "_f_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(_f_symbolic, _f_symbolic[it_17_0] >= -10  & _f_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _f_symbolic[cntCall++];
}


int other_module_call_symbolic[10];
int _other_module_call_symbolic[10];
int other_module_call(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_other_module_call_symbolic, sizeof(_other_module_call_symbolic), "_other_module_call_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(_other_module_call_symbolic, _other_module_call_symbolic[it_18_0] >= -10  & _other_module_call_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _other_module_call_symbolic[cntCall++];
}


int calc_two_numbers_f_symbolic[10];
int _calc_two_numbers_f_symbolic[10];
int calc_two_numbers_f(char a, char b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_calc_two_numbers_f_symbolic, sizeof(_calc_two_numbers_f_symbolic), "_calc_two_numbers_f_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                klee_prefer_cex(_calc_two_numbers_f_symbolic, _calc_two_numbers_f_symbolic[it_19_0] >= -10  & _calc_two_numbers_f_symbolic[it_19_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _calc_two_numbers_f_symbolic[cntCall++];
}


