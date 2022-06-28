// 1656451884000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "floating_point_plain_stub.h"

#define NULL ((void*)0)

int plain_isnan_symbolic[10];
int _plain_isnan_symbolic[10];
int plain_isnan(float x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_plain_isnan_symbolic, sizeof(_plain_isnan_symbolic), "_plain_isnan_symbolic");
            for (int it_129_0 = 0; it_129_0 < 10; it_129_0 ++) {
                klee_prefer_cex(_plain_isnan_symbolic, _plain_isnan_symbolic[it_129_0] >= -10  & _plain_isnan_symbolic[it_129_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _plain_isnan_symbolic[cntCall++];
}


