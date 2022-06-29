// 1656490931000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "array-sort_stub.h"

#define NULL ((void*)0)

int sort_array_symbolic[10];
int _sort_array_symbolic[10];
int sort_array(int * arr, int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sort_array_symbolic, sizeof(_sort_array_symbolic), "_sort_array_symbolic");
            for (int it_48_0 = 0; it_48_0 < 10; it_48_0 ++) {
                klee_prefer_cex(_sort_array_symbolic, _sort_array_symbolic[it_48_0] >= -10  & _sort_array_symbolic[it_48_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sort_array_symbolic[cntCall++];
}


typedef int (*sort_array_with_comparator_cmp_arg)(int, int);
int sort_array_with_comparator_symbolic[10];
int _sort_array_with_comparator_symbolic[10];
int sort_array_with_comparator(int * arr, int n, sort_array_with_comparator_cmp_arg cmp) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sort_array_with_comparator_symbolic, sizeof(_sort_array_with_comparator_symbolic), "_sort_array_with_comparator_symbolic");
            for (int it_49_0 = 0; it_49_0 < 10; it_49_0 ++) {
                klee_prefer_cex(_sort_array_with_comparator_symbolic, _sort_array_with_comparator_symbolic[it_49_0] >= -10  & _sort_array_with_comparator_symbolic[it_49_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sort_array_with_comparator_symbolic[cntCall++];
}


