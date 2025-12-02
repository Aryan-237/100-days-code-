#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    Student students[5]; // Array of 5 student structures
    int i;

    // Input data for 5 students
    for (i = 0; i < 5; ++i) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Output data
    printf("\n--- All Student Records ---\n");
    for (i = 0; i < 5; ++i) {
        printf("Roll %d: Name %s, Marks %.2f\n", 
               students[i].roll, students[i].name, students[i].marks);
    }
    return 0;
}