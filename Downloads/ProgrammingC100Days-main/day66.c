#include <stdio.h>

int main() {
    int var = 100;
    int *ptr = &var; // ptr stores the address of var (&var)

    printf("Value of var: %d\n", var);
    printf("Address of var (&var): %p\n", &var);
    printf("Value of ptr (address stored): %p\n", ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr); // Dereference
    return 0;
}