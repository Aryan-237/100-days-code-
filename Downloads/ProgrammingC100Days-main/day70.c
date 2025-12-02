#include <stdio.h>

int main() {
    // String literal is stored as a char array; ptr points to the first char
    char *str = "Hello Pointers!"; 
    
    printf("Printing using pointer loop:\n");
    // Loop continues until the null terminator '\0' is reached
    while (*str != '\0') {
        printf("%c", *str); // Print the character pointed to
        str++;              // Move the pointer to the next memory address
    }
    printf("\n");
    return 0;
}