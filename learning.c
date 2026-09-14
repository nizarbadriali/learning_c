#include <stdio.h>

int main() {
    char   c = 4;  //char is the weakest data type in C, so it will be promoted
    short  s = 10; //short is stronger than char, but weaker than int
    int    i = 3; //int is stronger than char and short, but weaker than double
    double d = 2.0; //double is th strongest, so it will promote all other data types

    // 1. s / i
    printf("1. s / i       = %d\n", s / i); //will print to int

    // 2. c + s / i
    printf("2. c + s / i   = %d\n", c + s / i); // will be int  

    // 3. s / d
    printf("3. s / d       = %f\n", s / d); // will be double

    // 4. c / i * d
    printf("4. c / i * d   = %f\n", c / i * d); // will be double as well

    return 0;
}