#include <stdio.h>
#include "assert.h"

void buggy_function1(int a) {
    assert(a == 42);
}

void buggy_function2(int a) {
    assert(a == 0);
}

int buggy_function3(int a) {
    return 1/a;
}

int foo(int a) {
    assert(a == 13);
    return a;
}

int ritasexample(int a) {
    return foo(a);
}

int main(void) {
    printf("Hello World!");
    return 0;
}
