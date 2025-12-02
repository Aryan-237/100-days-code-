#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int n = strlen(str);
    int i = 0, j = n - 1;
    char temp;

    // Standard string reversal
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[] = "welcome to C programming"; 
    printf("Original: %s\n", str);
    
    // Reversing the entire string:
    // "welcome to C programming" -> "gnimmargorp C ot emoclew"
    reverseString(str);
    printf("Reversed characters: %s\n", str); 

    // To reverse words, one must then reverse each word individually, which is
    // left as an advanced exercise!

    return 0;
}