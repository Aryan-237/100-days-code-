#include <stdio.h>

// Struct: memory is sum of members (plus padding)
struct DataStruct {
    int i; // 4 bytes
    float f; // 4 bytes
    char str[20]; // 20 bytes
}; // Total size will be at least 28 bytes

// Union: memory is size of its largest member
union DataUnion {
    int i; // 4 bytes
    float f; // 4 bytes
    char str[20]; // 20 bytes
}; // Total size will be 20 bytes

int main() {
    struct DataStruct ds;
    union DataUnion du;

    printf("Size of Struct: %zu bytes\n", sizeof(ds));
    printf("Size of Union: %zu bytes\n", sizeof(du));

    // Demo: Writing to one member of a union corrupts others
    du.i = 42;
    printf("\nUnion i: %d\n", du.i);
    
    // This assignment overwrites the memory shared by du.i
    du.f = 3.14f;
    printf("Union f: %.2f\n", du.f);
    printf("Union i after float write: %d (corrupted)\n", du.i);

    return 0;
}