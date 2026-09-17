#include <stdio.h>

int main() {

    int a[3] = {423, 12, -780};
    int *ptr;

    ptr = &a[0];

    printf("%d \t", *ptr );
    printf("%d \t", *(ptr+1) ); // ptr goes up 1 memory then derefencers, 
    printf("%d \t", *(ptr+2) );

    return 0;
}