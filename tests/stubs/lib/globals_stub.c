// 1656490931000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "globals_stub.h"

#define NULL ((void*)0)

int increment_symbolic[10];
int _increment_symbolic[10];
int increment() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_increment_symbolic, sizeof(_increment_symbolic), "_increment_symbolic");
            for (int it_73_0 = 0; it_73_0 < 10; it_73_0 ++) {
                klee_prefer_cex(_increment_symbolic, _increment_symbolic[it_73_0] >= -10  & _increment_symbolic[it_73_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _increment_symbolic[cntCall++];
}


int use_global_array_symbolic[10];
int _use_global_array_symbolic[10];
int use_global_array(int x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_global_array_symbolic, sizeof(_use_global_array_symbolic), "_use_global_array_symbolic");
            for (int it_74_0 = 0; it_74_0 < 10; it_74_0 ++) {
                klee_prefer_cex(_use_global_array_symbolic, _use_global_array_symbolic[it_74_0] >= -10  & _use_global_array_symbolic[it_74_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_global_array_symbolic[cntCall++];
}


char use_global_strings_symbolic[10];
char _use_global_strings_symbolic[10];
char use_global_strings() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_global_strings_symbolic, sizeof(_use_global_strings_symbolic), "_use_global_strings_symbolic");
            for (int it_75_0 = 0; it_75_0 < 10; it_75_0 ++) {
                klee_prefer_cex(_use_global_strings_symbolic, _use_global_strings_symbolic[it_75_0] >= 'a' & _use_global_strings_symbolic[it_75_0] <= 'z' & _use_global_strings_symbolic[it_75_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_global_strings_symbolic[cntCall++];
}


int use_global_arrays_symbolic[10];
int _use_global_arrays_symbolic[10];
int use_global_arrays() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_global_arrays_symbolic, sizeof(_use_global_arrays_symbolic), "_use_global_arrays_symbolic");
            for (int it_76_0 = 0; it_76_0 < 10; it_76_0 ++) {
                klee_prefer_cex(_use_global_arrays_symbolic, _use_global_arrays_symbolic[it_76_0] >= -10  & _use_global_arrays_symbolic[it_76_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_global_arrays_symbolic[cntCall++];
}


void use_global_handler(int status) {
    return;
}


