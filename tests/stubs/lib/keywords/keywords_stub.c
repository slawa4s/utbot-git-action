// 1656430451000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "keywords_stub.h"

#define NULL ((void*)0)

int get_size_of_data_symbolic[10];
int _get_size_of_data_symbolic[10];
int get_size_of_data(struct data d) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_get_size_of_data_symbolic, sizeof(_get_size_of_data_symbolic), "_get_size_of_data_symbolic");
            for (int it_77_0 = 0; it_77_0 < 10; it_77_0 ++) {
                klee_prefer_cex(_get_size_of_data_symbolic, _get_size_of_data_symbolic[it_77_0] >= -10  & _get_size_of_data_symbolic[it_77_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _get_size_of_data_symbolic[cntCall++];
}


void stop_now(int i) {
    return;
}


typedef void (*not_null_catch__arg)(int);
unsigned char * not_null(not_null_catch__arg catch_, unsigned char * x) {
    return NULL;
}


_Bool get_flag_symbolic[10];
_Bool _get_flag_symbolic[10];
_Bool get_flag(struct class clazz) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_get_flag_symbolic, sizeof(_get_flag_symbolic), "_get_flag_symbolic");
            for (int it_78_0 = 0; it_78_0 < 10; it_78_0 ++) {
                // No constraints for _get_flag_symbolic[it_78_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _get_flag_symbolic[cntCall++];
}


unsigned char * cast(template x) {
    return NULL;
}


_Bool equals_symbolic[10];
_Bool _equals_symbolic[10];
_Bool equals(struct key key) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_equals_symbolic, sizeof(_equals_symbolic), "_equals_symbolic");
            for (int it_79_0 = 0; it_79_0 < 10; it_79_0 ++) {
                // No constraints for _equals_symbolic[it_79_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _equals_symbolic[cntCall++];
}


int access_to_int_symbolic[10];
int _access_to_int_symbolic[10];
int access_to_int(enum access access) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_access_to_int_symbolic, sizeof(_access_to_int_symbolic), "_access_to_int_symbolic");
            for (int it_80_0 = 0; it_80_0 < 10; it_80_0 ++) {
                klee_prefer_cex(_access_to_int_symbolic, _access_to_int_symbolic[it_80_0] >= -10  & _access_to_int_symbolic[it_80_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _access_to_int_symbolic[cntCall++];
}


