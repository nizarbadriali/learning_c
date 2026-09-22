#include <stdio.h>

int* ModifyValues(int *ptr) {
    *(ptr - 1) = *(ptr - 1) + 2;   // Line 1
    *(ptr + 1) = *(ptr + 1) * 3;   // Line 2
    ptr = ptr + 1;                 // Line 3
    return ptr;                    // Line 4
}

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int *p;

    p = ModifyValues(arr + 2);

    printf("%d\n", arr[1]);
    printf("%d\n", arr[3]);
    printf("%d\n", p[0]);
    printf("%d\n", p[-2]);

    return 0;
}