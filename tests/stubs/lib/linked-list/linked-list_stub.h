//1656490931000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#define _Alignas(x)
typedef long ptrdiff_t;

typedef unsigned long size_t;

typedef int wchar_t;

typedef struct {
    long long __max_align_ll __attribute__((aligned(__alignof(long long))));
    long double __max_align_ld __attribute__((aligned(__alignof(long double))));
} max_align_t;

struct Node {
    int x;
    struct Node *next;
};

struct HardNode {
    struct Inner {
        int x;
        struct SuperInner {
            struct HardNode *next;
            int step;
        } superIn;
        double d;
    } in;
    char letter;
    struct HardNode *randomRef;
};

struct Kuku {
    struct Ququ {
        struct Kuku *next;
        char letter;
    } in;
    int x;
};


