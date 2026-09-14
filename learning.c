#include <stdio.h>
double process(double x, double y) {

    x = x + 1;
    return x + y;

}

int main() {

    double a[3] = {4.1, 2.5, 3.3};
    double b;
    b = process( a[0] , a[1] );
    printf("%1.1f %1.1f", b, a[0]);

}