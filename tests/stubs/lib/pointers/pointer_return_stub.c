// 1656451698000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "pointer_return_stub.h"

#define NULL ((void*)0)

long long * returns_pointer_with_min(long long a, long long b) {
    return NULL;
}


unsigned int * returns_pointer_with_max(unsigned int a, unsigned int b) {
    return NULL;
}


int * five_square_numbers(int from) {
    return NULL;
}


struct MinMax * returns_struct_with_min_max(int a, int b) {
    return NULL;
}


const char * return_const_char(int a) {
    return "";
}


const char * return_char_const_pointer(int a) {
    return "";
}


const struct MinMax * returns_const_struct_with_min_max(int a, int b) {
    return NULL;
}


void * void_pointer_return_int_usage(int a, int b) {
    return NULL;
}


void * void_pointer_return_char_usage(char * a) {
    return NULL;
}


int ** returns_2d_pointer_for_int(int a) {
    return NULL;
}


const struct MinMax ** returns_2d_pointer_for_struct(int a, int b) {
    return NULL;
}


void * return_array_like_void_ptr() {
    return NULL;
}


int * return_nullptr(int x) {
    return NULL;
}


