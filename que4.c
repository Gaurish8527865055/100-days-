#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159; // Using a more precise value for PI

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Calculate the circumference
    circumference = 2 * PI * radius;

    // Print the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}