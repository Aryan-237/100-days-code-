#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

// Converts Time struct to total seconds for easy calculation
long timeToSeconds(Time t) {
    return t.hours * 3600L + t.minutes * 60L + t.seconds;
}

int main() {
    Time t1 = {10, 30, 0};
    Time t2 = {11, 45, 15}; // t2 > t1

    // Calculate difference in seconds
    long diff_sec = timeToSeconds(t2) - timeToSeconds(t1);
    
    // Convert difference back to H:M:S
    Time diff;
    diff.hours = diff_sec / 3600;
    diff_sec %= 3600;
    diff.minutes = diff_sec / 60;
    diff.seconds = diff_sec % 60;

    printf("Time 1: 10:30:00\n");
    printf("Time 2: 11:45:15\n");
    printf("Difference: %d hours, %d minutes, %d seconds\n", 
           diff.hours, diff.minutes, diff.seconds);
    return 0;
}