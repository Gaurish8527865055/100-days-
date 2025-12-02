#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping logic using a third variable
    temp = num1; // Store the value of num1 in temp
    num1 = num2; // Assign the value of num2 to num1
    num2 = temp; // Assign the value of temp (original num1) to num2

    // Display numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}