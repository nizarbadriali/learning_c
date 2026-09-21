#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Required for time()


int main() {
    // Seed the random number generator using the current time
    srand(time(NULL)); 

    printf("%d\n", rand());
    printf("%d\n", rand());
}
