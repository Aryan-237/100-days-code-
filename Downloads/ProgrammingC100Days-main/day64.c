#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "zyxw cba"; // Example to demonstrate character sort
    int len = strlen(str);

    // Simple Bubble Sort on the characters of the string
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted characters: %s\n", str);
    return 0;
}