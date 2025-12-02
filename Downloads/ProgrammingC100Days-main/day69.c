#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    // Array name 'arr' decays into a pointer to its first element
    int *ptr = arr; 

    printf("Elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        // *(ptr + i) is equivalent to arr[i]
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    return 0;
}