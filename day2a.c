#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %f\n", area);
    printf("Perimeter of the rectangle: %f\n", perimeter);

    return 0;
}