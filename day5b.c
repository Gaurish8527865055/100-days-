#include <stdio.h>

int main() {
    int seconds, hours, minutes, rs;
 
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
 
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    rs = seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, rs);

    return 0;
}