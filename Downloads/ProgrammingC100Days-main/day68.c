#include <stdio.h>

// Function accepts addresses (pointers)
void swap(int *a, int *b) {
    int temp = *a; // Store value at address 'a'
    *a = *b;       // Change value at address 'a' to value at address 'b'
    *b = temp;     // Change value at address 'b' to original value of 'a'
}

int main() {
    int n1 = 10, n2 = 20;

    printf("Before swap: n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2); // Pass addresses (&)
    printf("After swap: n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}