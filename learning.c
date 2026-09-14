#include <stdio.h>

int* process(int *x) {
    *x = *x + 1;
    x = x + 2;
    return x;
}

int main() {
    int *p;
    int a = 5;
    p = process(&a);
    printf("%d \n", a );
    printf("%d \n", *p );
    return 0;
}

