#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi=3.141;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);

    return 0;
}

