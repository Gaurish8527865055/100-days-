#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt the user to enter the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    
    // Read the input from the user
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula
    // F = (C * 9/5) + 32
    fahrenheit = (celsius * 1.8) + 32; 

    // Display the result, formatted to two decimal places
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}