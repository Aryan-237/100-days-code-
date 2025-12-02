#include <stdio.h>

int main() {
    int a = 10, b = 20, sum;
    int *ptr_a = &a;
    int *ptr_b = &b;

    // Calculate sum by dereferencing the pointers
    sum = *ptr_a + *ptr_b;

    printf("Sum of %d and %d is: %d\n", *ptr_a, *ptr_b, sum);
    return 0;
}