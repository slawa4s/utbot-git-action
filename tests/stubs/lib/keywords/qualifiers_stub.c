// 1656451883000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "qualifiers_stub.h"

#define NULL ((void*)0)

int c_strcmp_2_symbolic[10];
int _c_strcmp_2_symbolic[10];
int c_strcmp_2(const char * a, const char * b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_c_strcmp_2_symbolic, sizeof(_c_strcmp_2_symbolic), "_c_strcmp_2_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(_c_strcmp_2_symbolic, _c_strcmp_2_symbolic[it_20_0] >= -10  & _c_strcmp_2_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _c_strcmp_2_symbolic[cntCall++];
}


int ishello_2_symbolic[10];
int _ishello_2_symbolic[10];
int ishello_2(char * a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_ishello_2_symbolic, sizeof(_ishello_2_symbolic), "_ishello_2_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(_ishello_2_symbolic, _ishello_2_symbolic[it_21_0] >= -10  & _ishello_2_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _ishello_2_symbolic[cntCall++];
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


