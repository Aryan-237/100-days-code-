#include <stdio.h>

typedef struct {
    int id;
    char name[20];
} Person;

int main() {
    Person p1 = {101, "Alice"};
    Person *p_ptr = &p1; // Pointer to the structure

    // 1. Using the dot operator (for struct variables)
    printf("Using dot operator: ID = %d, Name = %s\n", p1.id, p1.name);

    // 2. Using the arrow operator (->) for struct pointers (standard way)
    printf("Using arrow operator: ID = %d, Name = %s\n", p_ptr->id, p_ptr->name);
    
    // 3. Using dereference and dot operator (equivalent to arrow operator)
    printf("Using dereference: ID = %d, Name = %s\n", (*p_ptr).id, (*p_ptr).name);
    return 0;
}