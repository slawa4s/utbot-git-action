// 1656451883000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "dependent_functions_stub.h"

#define NULL ((void*)0)

int double_max_symbolic[10];
int _double_max_symbolic[10];
int double_max(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_double_max_symbolic, sizeof(_double_max_symbolic), "_double_max_symbolic");
            for (int it_105_0 = 0; it_105_0 < 10; it_105_0 ++) {
                klee_prefer_cex(_double_max_symbolic, _double_max_symbolic[it_105_0] >= -10  & _double_max_symbolic[it_105_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _double_max_symbolic[cntCall++];
}


