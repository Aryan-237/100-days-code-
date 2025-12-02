#include <stdio.h>
#include <stdlib.h> // For malloc() and free()

int main() {
    int *arr;
    int N;

    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    // Allocate N * size_of_int bytes of memory
    arr = (int*)malloc(N * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Access using array syntax
    }

    printf("Elements entered: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the memory block
    return 0;
}