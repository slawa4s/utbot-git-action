//1656451884000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#define _Alignas(x)
union IntBytesUnion {
    char bytes[4];
    int number;
};

union ShortBytesUnion {
    char bytes[2];
    short number;
};

union SuperFloat {
    float f;
    int i;
};

union Vector2D {
    int m[2];
    struct {
        int x;
        int y;
    };
};

union Heterogeneous {
    int a;
    long long b;
    unsigned short c;
};

union MainUnion {
    union InnerUnion {
        union InInnerUnion {
            unsigned int u;
            long long l;
        };
        char c;
        union InInnerUnion ininner;
        short s;
    } inner;
    int x;
    long long y;
};

typedef enum  {
    CHAR_TAG,
    INT_TAG
} VariantTag;

struct Variant {
    VariantTag tag;
    union VariantData {
        char c;
        int i;
    } data;
};

union UnionWithPointer {
    int *a;
    long long b;
};

typedef long ptrdiff_t;

typedef unsigned long size_t;

typedef int wchar_t;

typedef struct {
    long long __max_align_ll __attribute__((aligned(__alignof(long long))));
    long double __max_align_ld __attribute__((aligned(__alignof(long double))));
} max_align_t;

