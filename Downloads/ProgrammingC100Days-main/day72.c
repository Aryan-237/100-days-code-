#include <stdio.h>

int main() {
    int var = 500;
    int *ptr1 = &var;   // Pointer to an integer
    int **ptr2 = &ptr1; // Pointer to a pointer to an integer

    printf("Value of var: %d\n", var);
    printf("Value using *ptr1: %d\n", *ptr1);
    printf("Value using **ptr2: %d\n", **ptr2); // Double dereference gives var's value
    
    // Change value using the double pointer
    **ptr2 = 750;
    printf("New value of var: %d\n", var);
    return 0;
}