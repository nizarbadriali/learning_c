#include <stdio.h>

int* process_array(int *ptr) {
    *(ptr + 1) = *(ptr + 1) + 5;   // Line 1
    ptr = ptr + 2;                 // Line 2
    *ptr = *ptr - 10;              // Line 3
    return ptr;                    // Line 4
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = process_array(arr + 1);

    printf("%d\n", arr[1]);
    printf("%d\n", arr[3]);
    printf("%d\n", p[0]);
    printf("%d\n", p[-1]);

    return 0;
}