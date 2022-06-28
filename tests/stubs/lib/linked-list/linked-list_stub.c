// 1656451884000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "linked-list_stub.h"

#define NULL ((void*)0)

int length_of_linked_list3_symbolic[10];
int _length_of_linked_list3_symbolic[10];
int length_of_linked_list3(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_length_of_linked_list3_symbolic, sizeof(_length_of_linked_list3_symbolic), "_length_of_linked_list3_symbolic");
            for (int it_142_0 = 0; it_142_0 < 10; it_142_0 ++) {
                klee_prefer_cex(_length_of_linked_list3_symbolic, _length_of_linked_list3_symbolic[it_142_0] >= -10  & _length_of_linked_list3_symbolic[it_142_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _length_of_linked_list3_symbolic[cntCall++];
}


int length_of_linked_list2_symbolic[10];
int _length_of_linked_list2_symbolic[10];
int length_of_linked_list2(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_length_of_linked_list2_symbolic, sizeof(_length_of_linked_list2_symbolic), "_length_of_linked_list2_symbolic");
            for (int it_143_0 = 0; it_143_0 < 10; it_143_0 ++) {
                klee_prefer_cex(_length_of_linked_list2_symbolic, _length_of_linked_list2_symbolic[it_143_0] >= -10  & _length_of_linked_list2_symbolic[it_143_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _length_of_linked_list2_symbolic[cntCall++];
}


int sum_list_symbolic[10];
int _sum_list_symbolic[10];
int sum_list(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sum_list_symbolic, sizeof(_sum_list_symbolic), "_sum_list_symbolic");
            for (int it_144_0 = 0; it_144_0 < 10; it_144_0 ++) {
                klee_prefer_cex(_sum_list_symbolic, _sum_list_symbolic[it_144_0] >= -10  & _sum_list_symbolic[it_144_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sum_list_symbolic[cntCall++];
}


int sign_sum_symbolic[10];
int _sign_sum_symbolic[10];
int sign_sum(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sign_sum_symbolic, sizeof(_sign_sum_symbolic), "_sign_sum_symbolic");
            for (int it_145_0 = 0; it_145_0 < 10; it_145_0 ++) {
                klee_prefer_cex(_sign_sum_symbolic, _sign_sum_symbolic[it_145_0] >= -10  & _sign_sum_symbolic[it_145_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sign_sum_symbolic[cntCall++];
}


int hard_length2_symbolic[10];
int _hard_length2_symbolic[10];
int hard_length2(struct HardNode * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_hard_length2_symbolic, sizeof(_hard_length2_symbolic), "_hard_length2_symbolic");
            for (int it_146_0 = 0; it_146_0 < 10; it_146_0 ++) {
                klee_prefer_cex(_hard_length2_symbolic, _hard_length2_symbolic[it_146_0] >= -10  & _hard_length2_symbolic[it_146_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _hard_length2_symbolic[cntCall++];
}


int middle_length2_symbolic[10];
int _middle_length2_symbolic[10];
int middle_length2(struct Kuku * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_middle_length2_symbolic, sizeof(_middle_length2_symbolic), "_middle_length2_symbolic");
            for (int it_147_0 = 0; it_147_0 < 10; it_147_0 ++) {
                klee_prefer_cex(_middle_length2_symbolic, _middle_length2_symbolic[it_147_0] >= -10  & _middle_length2_symbolic[it_147_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _middle_length2_symbolic[cntCall++];
}


int cycle_list3_symbolic[10];
int _cycle_list3_symbolic[10];
int cycle_list3(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_cycle_list3_symbolic, sizeof(_cycle_list3_symbolic), "_cycle_list3_symbolic");
            for (int it_148_0 = 0; it_148_0 < 10; it_148_0 ++) {
                klee_prefer_cex(_cycle_list3_symbolic, _cycle_list3_symbolic[it_148_0] >= -10  & _cycle_list3_symbolic[it_148_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _cycle_list3_symbolic[cntCall++];
}


int len_bound_symbolic[10];
int _len_bound_symbolic[10];
int len_bound(struct Node * head, int bound) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_len_bound_symbolic, sizeof(_len_bound_symbolic), "_len_bound_symbolic");
            for (int it_149_0 = 0; it_149_0 < 10; it_149_0 ++) {
                klee_prefer_cex(_len_bound_symbolic, _len_bound_symbolic[it_149_0] >= -10  & _len_bound_symbolic[it_149_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _len_bound_symbolic[cntCall++];
}


int sort_list_symbolic[10];
int _sort_list_symbolic[10];
int sort_list(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sort_list_symbolic, sizeof(_sort_list_symbolic), "_sort_list_symbolic");
            for (int it_150_0 = 0; it_150_0 < 10; it_150_0 ++) {
                klee_prefer_cex(_sort_list_symbolic, _sort_list_symbolic[it_150_0] >= -10  & _sort_list_symbolic[it_150_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sort_list_symbolic[cntCall++];
}


typedef int (*sort_list_with_comparator_cmp_arg)(int, int);
int sort_list_with_comparator_symbolic[10];
int _sort_list_with_comparator_symbolic[10];
int sort_list_with_comparator(struct Node * head, sort_list_with_comparator_cmp_arg cmp) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sort_list_with_comparator_symbolic, sizeof(_sort_list_with_comparator_symbolic), "_sort_list_with_comparator_symbolic");
            for (int it_151_0 = 0; it_151_0 < 10; it_151_0 ++) {
                klee_prefer_cex(_sort_list_with_comparator_symbolic, _sort_list_with_comparator_symbolic[it_151_0] >= -10  & _sort_list_with_comparator_symbolic[it_151_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sort_list_with_comparator_symbolic[cntCall++];
}


typedef int (*find_maximum_compare_arg)(int, int);
int find_maximum_symbolic[10];
int _find_maximum_symbolic[10];
int find_maximum(int x, int y, find_maximum_compare_arg compare) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_find_maximum_symbolic, sizeof(_find_maximum_symbolic), "_find_maximum_symbolic");
            for (int it_152_0 = 0; it_152_0 < 10; it_152_0 ++) {
                klee_prefer_cex(_find_maximum_symbolic, _find_maximum_symbolic[it_152_0] >= -10  & _find_maximum_symbolic[it_152_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _find_maximum_symbolic[cntCall++];
}


typedef char (*vowel_consonant_vowel_arg)(char);
int vowel_consonant_symbolic[10];
int _vowel_consonant_symbolic[10];
int vowel_consonant(char c, vowel_consonant_vowel_arg vowel) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_vowel_consonant_symbolic, sizeof(_vowel_consonant_symbolic), "_vowel_consonant_symbolic");
            for (int it_153_0 = 0; it_153_0 < 10; it_153_0 ++) {
                klee_prefer_cex(_vowel_consonant_symbolic, _vowel_consonant_symbolic[it_153_0] >= -10  & _vowel_consonant_symbolic[it_153_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _vowel_consonant_symbolic[cntCall++];
}


