// 1656490931000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "tree_stub.h"

#define NULL ((void*)0)

int deep_symbolic[10];
int _deep_symbolic[10];
int deep(struct Tree * root) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_deep_symbolic, sizeof(_deep_symbolic), "_deep_symbolic");
            for (int it_116_0 = 0; it_116_0 < 10; it_116_0 ++) {
                klee_prefer_cex(_deep_symbolic, _deep_symbolic[it_116_0] >= -10  & _deep_symbolic[it_116_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _deep_symbolic[cntCall++];
}


