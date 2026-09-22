#include <stdio.h>

int* modify_and_shift(int *ptr) {
    *ptr = *ptr * 2;   // Step 1
    ptr = ptr - 1;     // Step 2
    return ptr;        // Step 3
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = modify_and_shift(arr + 3);

    printf("%d\n", arr[3]);
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);

    return 0;
}