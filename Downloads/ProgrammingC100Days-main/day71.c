#include <stdio.h>
#include <stdlib.h> // For malloc()

// Function returning a pointer to a dynamically allocated integer
int *createNumber(int value) {
    // Allocate memory for one integer dynamically
    int *ptr = (int*)malloc(sizeof(int));
    
    if (ptr != NULL) {
        *ptr = value;
    }
    return ptr;
}

int main() {
    int *myNumPtr = createNumber(42);

    if (myNumPtr != NULL) {
        printf("Value returned by pointer: %d\n", *myNumPtr);
        // Important: Free dynamic memory when done
        free(myNumPtr); 
    }
    return 0;
}