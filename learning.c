#include <stdio.h>

int main() {
    int x, z = 5;
    double y;
    y = z / 4;       // 4 is a int, so z stays an int and 5 / 4 = 1.25 but becomes 1.00
    printf("y = %.2f\n", y);
// OR
    y = (double)z / 4; // Explicitly turns z into a double first -> 5.0 / 4 = 1.25
    printf("y = %.2f\n", y);
// OR
    y = z / 4.0;     // 4.0 is a double, so z is promoted to a double -> 5.0 / 4.0 = 1.25
    printf("y = %.2f\n", y);    

    return 0;
}