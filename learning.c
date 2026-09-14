#include <stdio.h>

int* process(int *x) {
    *x = *x + 1; //changes value stored at original a address
    x = x + 2; //changes address of p, not a
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

