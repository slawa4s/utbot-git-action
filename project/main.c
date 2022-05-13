#include <stdio.h>
#include "assert.h"

void buggy_function(int a) {
    assert(a == 42);
}

int main(void) {
    printf("Hello World!");
    return 0;
}
