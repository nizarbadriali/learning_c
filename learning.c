#include <stdio.h>

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int *ptr = a;       
    ptr++;              
    printf("%d %p\n", *ptr, ptr); 
    return 0;
}

