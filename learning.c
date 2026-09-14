#include <stdio.h> // Library needed for printf()
#include <stdlib.h> // Library needed for rand(), srand()
    
int main() {
    int i, val;
    for (i = 0; i < 4; i++) {
        val = rand(); // Generate a (pseudo) random value between 0 and RAND_MAX
        printf("%d ", val);
    }
}