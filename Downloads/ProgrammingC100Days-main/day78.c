#include <stdio.h>

// Define an enumeration for days of the week
enum Weekday {
    MON = 1, // Start MON at 1
    TUE,     // Automatically 2
    WED,     // Automatically 3
    THU,
    FRI,
    SAT,
    SUN
};

int main() {
    enum Weekday today = WED;

    printf("The numerical value of WED is: %d\n", today);

    if (today == 3) {
        printf("It's Wednesday! The middle of the week.\n");
    }
    
    enum Weekday weekend = SAT;
    printf("Weekend starts on day %d.\n", weekend);
    
    return 0;
}