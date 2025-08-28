#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    scanf("%d", &total_seconds);

    // Conversion
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Output
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
