// 1656431235000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "typedefs_2_stub.h"

#define NULL ((void*)0)

int enumSign1ToInt_symbolic[10];
int _enumSign1ToInt_symbolic[10];
int enumSign1ToInt(Sign1 s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_enumSign1ToInt_symbolic, sizeof(_enumSign1ToInt_symbolic), "_enumSign1ToInt_symbolic");
            for (int it_107_0 = 0; it_107_0 < 10; it_107_0 ++) {
                klee_prefer_cex(_enumSign1ToInt_symbolic, _enumSign1ToInt_symbolic[it_107_0] >= -10  & _enumSign1ToInt_symbolic[it_107_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _enumSign1ToInt_symbolic[cntCall++];
}


enum __Sign intToSign1_symbolic[10];
enum __Sign _intToSign1_symbolic[10];
enum __Sign intToSign1(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_intToSign1_symbolic, sizeof(_intToSign1_symbolic), "_intToSign1_symbolic");
            for (int it_108_0 = 0; it_108_0 < 10; it_108_0 ++) {
                // No constraints for _intToSign1_symbolic[it_108_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _intToSign1_symbolic[cntCall++];
}


int enumSign2ToInt_symbolic[10];
int _enumSign2ToInt_symbolic[10];
int enumSign2ToInt(Sign2 s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_enumSign2ToInt_symbolic, sizeof(_enumSign2ToInt_symbolic), "_enumSign2ToInt_symbolic");
            for (int it_109_0 = 0; it_109_0 < 10; it_109_0 ++) {
                klee_prefer_cex(_enumSign2ToInt_symbolic, _enumSign2ToInt_symbolic[it_109_0] >= -10  & _enumSign2ToInt_symbolic[it_109_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _enumSign2ToInt_symbolic[cntCall++];
}


Sign2 intToSign2_symbolic[10];
Sign2 _intToSign2_symbolic[10];
Sign2 intToSign2(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_intToSign2_symbolic, sizeof(_intToSign2_symbolic), "_intToSign2_symbolic");
            for (int it_110_0 = 0; it_110_0 < 10; it_110_0 ++) {
                // No constraints for _intToSign2_symbolic[it_110_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _intToSign2_symbolic[cntCall++];
}


