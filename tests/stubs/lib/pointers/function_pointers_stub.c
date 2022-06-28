// 1656431235000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "function_pointers_stub.h"

#define NULL ((void*)0)

int worker_symbolic[10];
int _worker_symbolic[10];
int worker(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_worker_symbolic, sizeof(_worker_symbolic), "_worker_symbolic");
            for (int it_155_0 = 0; it_155_0 < 10; it_155_0 ++) {
                klee_prefer_cex(_worker_symbolic, _worker_symbolic[it_155_0] >= -10  & _worker_symbolic[it_155_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _worker_symbolic[cntCall++];
}


typedef int (*receiver_f_arg)(int, int);
int receiver_symbolic[10];
int _receiver_symbolic[10];
int receiver(receiver_f_arg f, char c) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_receiver_symbolic, sizeof(_receiver_symbolic), "_receiver_symbolic");
            for (int it_156_0 = 0; it_156_0 < 10; it_156_0 ++) {
                klee_prefer_cex(_receiver_symbolic, _receiver_symbolic[it_156_0] >= -10  & _receiver_symbolic[it_156_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _receiver_symbolic[cntCall++];
}


void entry_point_func() {
    return;
}


typedef char * (*pointerParam_f_arg)(int *);
char * pointerParam(pointerParam_f_arg f, int * x) {
    return "";
}


typedef int (*pointerToPointer_f_arg)(int);
typedef int (**pointerToPointer_f_arg_arr)(int);
char pointerToPointer_symbolic[10];
char _pointerToPointer_symbolic[10];
char pointerToPointer(pointerToPointer_f_arg_arr f, char x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_pointerToPointer_symbolic, sizeof(_pointerToPointer_symbolic), "_pointerToPointer_symbolic");
            for (int it_157_0 = 0; it_157_0 < 10; it_157_0 ++) {
                klee_prefer_cex(_pointerToPointer_symbolic, _pointerToPointer_symbolic[it_157_0] >= 'a' & _pointerToPointer_symbolic[it_157_0] <= 'z' & _pointerToPointer_symbolic[it_157_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _pointerToPointer_symbolic[cntCall++];
}


typedef int (*structParam_f_arg)(struct MyStruct);
int structParam_symbolic[10];
int _structParam_symbolic[10];
int structParam(structParam_f_arg f, const char * s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_structParam_symbolic, sizeof(_structParam_symbolic), "_structParam_symbolic");
            for (int it_158_0 = 0; it_158_0 < 10; it_158_0 ++) {
                klee_prefer_cex(_structParam_symbolic, _structParam_symbolic[it_158_0] >= -10  & _structParam_symbolic[it_158_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _structParam_symbolic[cntCall++];
}


typedef int (*structPointerParam_f_arg)(struct MyStruct *);
int structPointerParam_symbolic[10];
int _structPointerParam_symbolic[10];
int structPointerParam(structPointerParam_f_arg f, const int * arr) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_structPointerParam_symbolic, sizeof(_structPointerParam_symbolic), "_structPointerParam_symbolic");
            for (int it_159_0 = 0; it_159_0 < 10; it_159_0 ++) {
                klee_prefer_cex(_structPointerParam_symbolic, _structPointerParam_symbolic[it_159_0] >= -10  & _structPointerParam_symbolic[it_159_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _structPointerParam_symbolic[cntCall++];
}


int f_add_symbolic[10];
int _f_add_symbolic[10];
int f_add(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_f_add_symbolic, sizeof(_f_add_symbolic), "_f_add_symbolic");
            for (int it_160_0 = 0; it_160_0 < 10; it_160_0 ++) {
                klee_prefer_cex(_f_add_symbolic, _f_add_symbolic[it_160_0] >= -10  & _f_add_symbolic[it_160_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _f_add_symbolic[cntCall++];
}


int f_sub_symbolic[10];
int _f_sub_symbolic[10];
int f_sub(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_f_sub_symbolic, sizeof(_f_sub_symbolic), "_f_sub_symbolic");
            for (int it_161_0 = 0; it_161_0 < 10; it_161_0 ++) {
                klee_prefer_cex(_f_sub_symbolic, _f_sub_symbolic[it_161_0] >= -10  & _f_sub_symbolic[it_161_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _f_sub_symbolic[cntCall++];
}


int f_mul_symbolic[10];
int _f_mul_symbolic[10];
int f_mul(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_f_mul_symbolic, sizeof(_f_mul_symbolic), "_f_mul_symbolic");
            for (int it_162_0 = 0; it_162_0 < 10; it_162_0 ++) {
                klee_prefer_cex(_f_mul_symbolic, _f_mul_symbolic[it_162_0] >= -10  & _f_mul_symbolic[it_162_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _f_mul_symbolic[cntCall++];
}


typedef int (*return_op_return)(int, int);
return_op_return return_op(char op) {
    return (int (*)(int, int)){0};
}


typedef int (*f_chain_functions_arg)(int, int);
typedef int (**f_chain_functions_arg_arr)(int, int);
int f_chain_symbolic[10];
int _f_chain_symbolic[10];
int f_chain(f_chain_functions_arg_arr functions, int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_f_chain_symbolic, sizeof(_f_chain_symbolic), "_f_chain_symbolic");
            for (int it_163_0 = 0; it_163_0 < 10; it_163_0 ++) {
                klee_prefer_cex(_f_chain_symbolic, _f_chain_symbolic[it_163_0] >= -10  & _f_chain_symbolic[it_163_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _f_chain_symbolic[cntCall++];
}


typedef int (*get_chain_return)(int, int);
typedef int (**get_chain_return_arr)(int, int);
get_chain_return_arr get_chain(char * c) {
    return NULL;
}


int calcFunctionStruct_symbolic[10];
int _calcFunctionStruct_symbolic[10];
int calcFunctionStruct(struct FStruct function_struct, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_calcFunctionStruct_symbolic, sizeof(_calcFunctionStruct_symbolic), "_calcFunctionStruct_symbolic");
            for (int it_164_0 = 0; it_164_0 < 10; it_164_0 ++) {
                klee_prefer_cex(_calcFunctionStruct_symbolic, _calcFunctionStruct_symbolic[it_164_0] >= -10  & _calcFunctionStruct_symbolic[it_164_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _calcFunctionStruct_symbolic[cntCall++];
}


