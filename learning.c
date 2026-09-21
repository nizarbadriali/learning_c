#include <stdio.h>

int main() {

    int x = 5;
    int y = ++x * 3;
    
    printf("Value of y: %d\n", y);
    printf("Value of x: %d\n", x);

    return 0;
}