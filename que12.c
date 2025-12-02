#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");

    
    scanf("%d", &number);

    
    if (number >= 0) {
        
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
           
            printf("%d is a positive number.\n", number);
        }
    } else {
        
        printf("%d is a negative number.\n", number);
    }

    return 0;
}