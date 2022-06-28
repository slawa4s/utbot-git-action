// 1656451698000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "helloworld_stub.h"

#define NULL ((void*)0)

unsigned int helloworld_symbolic[10];
unsigned int _helloworld_symbolic[10];
unsigned int helloworld(uint32_t input) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_helloworld_symbolic, sizeof(_helloworld_symbolic), "_helloworld_symbolic");
            for (int it_106_0 = 0; it_106_0 < 10; it_106_0 ++) {
                klee_prefer_cex(_helloworld_symbolic, _helloworld_symbolic[it_106_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _helloworld_symbolic[cntCall++];
}


