#include <stdio.h>
    
int main() {
    int i;
    double grades [5]; // Array to hold 5 grades
    grades [0] = 85.5; // Assigning values to the array
    grades [1] = 90.0;
    grades [2] = 78.5;
    grades [3] = 92.0;
    grades [4] = 88.5;
    for (i = 0; i < 5; i++) {
        printf("Grade %d: %.1f\n", i, grades[i]); // Print each grade
        printf("%p\n", &grades[i]); // Print the address of each grade
        printf("At index: grades[%d]\n", i);   
    }
    return 0;
}