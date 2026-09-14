#include <stdio.h>

int main() {

    int i = 3, j = 2;
    double x, y = 3.14;

    x = i/j; // Integer division: i/j is 1
    printf("x1: %1.2f \n",x);
   
    x = i/(double)j; // Typecast j; floating point division
    printf("x2: %1.2f \n",x);

    x = (double)i/j; // Typecast i; floating point division
    printf("x3: %1.2f \n ",x);

    return 0;
}