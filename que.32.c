#include <stdio.h>

int main() {
    int number, reversed_number = 0, original_number, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original_number = number;
    while (number != 0) {
        remainder = number % 10; 
        reversed_number = reversed_number * 10 + remainder; 
        number /= 10; 
    }
    if (original_number == reversed_number) {
        printf("%d is a palindrome number.\n", original_number);
    } else {
        printf("%d is not a palindrome number.\n", original_number);
    }

    return 0;
}