// 1656490931000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "multi_arrays_stub.h"

#define NULL ((void*)0)

int kek_symbolic[10];
int _kek_symbolic[10];
int kek(int (*a)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_kek_symbolic, sizeof(_kek_symbolic), "_kek_symbolic");
            for (int it_81_0 = 0; it_81_0 < 10; it_81_0 ++) {
                klee_prefer_cex(_kek_symbolic, _kek_symbolic[it_81_0] >= -10  & _kek_symbolic[it_81_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _kek_symbolic[cntCall++];
}


int sumSign_symbolic[10];
int _sumSign_symbolic[10];
int sumSign(int (*a)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sumSign_symbolic, sizeof(_sumSign_symbolic), "_sumSign_symbolic");
            for (int it_82_0 = 0; it_82_0 < 10; it_82_0 ++) {
                klee_prefer_cex(_sumSign_symbolic, _sumSign_symbolic[it_82_0] >= -10  & _sumSign_symbolic[it_82_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sumSign_symbolic[cntCall++];
}


int value_symbolic[10];
int _value_symbolic[10];
int value(int (*a)[3]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_value_symbolic, sizeof(_value_symbolic), "_value_symbolic");
            for (int it_83_0 = 0; it_83_0 < 10; it_83_0 ++) {
                klee_prefer_cex(_value_symbolic, _value_symbolic[it_83_0] >= -10  & _value_symbolic[it_83_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _value_symbolic[cntCall++];
}


int value2_symbolic[10];
int _value2_symbolic[10];
int value2(int (*a)[3]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_value2_symbolic, sizeof(_value2_symbolic), "_value2_symbolic");
            for (int it_84_0 = 0; it_84_0 < 10; it_84_0 ++) {
                klee_prefer_cex(_value2_symbolic, _value2_symbolic[it_84_0] >= -10  & _value2_symbolic[it_84_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _value2_symbolic[cntCall++];
}


int some_method_symbolic[10];
int _some_method_symbolic[10];
int some_method(int ** pointer2d) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_some_method_symbolic, sizeof(_some_method_symbolic), "_some_method_symbolic");
            for (int it_85_0 = 0; it_85_0 < 10; it_85_0 ++) {
                klee_prefer_cex(_some_method_symbolic, _some_method_symbolic[it_85_0] >= -10  & _some_method_symbolic[it_85_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _some_method_symbolic[cntCall++];
}


int return_sign_sum_symbolic[10];
int _return_sign_sum_symbolic[10];
int return_sign_sum(struct MyStructMult st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_return_sign_sum_symbolic, sizeof(_return_sign_sum_symbolic), "_return_sign_sum_symbolic");
            for (int it_86_0 = 0; it_86_0 < 10; it_86_0 ++) {
                klee_prefer_cex(_return_sign_sum_symbolic, _return_sign_sum_symbolic[it_86_0] >= -10  & _return_sign_sum_symbolic[it_86_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _return_sign_sum_symbolic[cntCall++];
}


long long return_sign_sum_of_struct_array_symbolic[10];
long long _return_sign_sum_of_struct_array_symbolic[10];
long long return_sign_sum_of_struct_array(struct PointStruct (*arr)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_return_sign_sum_of_struct_array_symbolic, sizeof(_return_sign_sum_of_struct_array_symbolic), "_return_sign_sum_of_struct_array_symbolic");
            for (int it_87_0 = 0; it_87_0 < 10; it_87_0 ++) {
                klee_prefer_cex(_return_sign_sum_of_struct_array_symbolic, _return_sign_sum_of_struct_array_symbolic[it_87_0] >= -10  & _return_sign_sum_of_struct_array_symbolic[it_87_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _return_sign_sum_of_struct_array_symbolic[cntCall++];
}


int point_quart_symbolic[10];
int _point_quart_symbolic[10];
int point_quart(struct PointStruct ** point) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_point_quart_symbolic, sizeof(_point_quart_symbolic), "_point_quart_symbolic");
            for (int it_88_0 = 0; it_88_0 < 10; it_88_0 ++) {
                klee_prefer_cex(_point_quart_symbolic, _point_quart_symbolic[it_88_0] >= -10  & _point_quart_symbolic[it_88_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _point_quart_symbolic[cntCall++];
}


struct IntArray return_struct_with_2d_array_symbolic[10];
struct IntArray _return_struct_with_2d_array_symbolic[10];
struct IntArray return_struct_with_2d_array(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_return_struct_with_2d_array_symbolic, sizeof(_return_struct_with_2d_array_symbolic), "_return_struct_with_2d_array_symbolic");
            for (int it_89_0 = 0; it_89_0 < 10; it_89_0 ++) {
                // No constraints for _return_struct_with_2d_array_symbolic[it_89_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _return_struct_with_2d_array_symbolic[cntCall++];
}


int sum_matrix_symbolic[10];
int _sum_matrix_symbolic[10];
int sum_matrix() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sum_matrix_symbolic, sizeof(_sum_matrix_symbolic), "_sum_matrix_symbolic");
            for (int it_90_0 = 0; it_90_0 < 10; it_90_0 ++) {
                klee_prefer_cex(_sum_matrix_symbolic, _sum_matrix_symbolic[it_90_0] >= -10  & _sum_matrix_symbolic[it_90_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sum_matrix_symbolic[cntCall++];
}


int count_dashes_symbolic[10];
int _count_dashes_symbolic[10];
int count_dashes() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_count_dashes_symbolic, sizeof(_count_dashes_symbolic), "_count_dashes_symbolic");
            for (int it_91_0 = 0; it_91_0 < 10; it_91_0 ++) {
                klee_prefer_cex(_count_dashes_symbolic, _count_dashes_symbolic[it_91_0] >= -10  & _count_dashes_symbolic[it_91_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _count_dashes_symbolic[cntCall++];
}


