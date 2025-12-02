#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

  
    hours = totalSeconds / 3600;

   
    int remainingSeconds = totalSeconds % 3600;

   
    minutes = remainingSeconds / 60;

    
    seconds = remainingSeconds % 60;

  
    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}