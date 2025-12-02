#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Prompt the user to enter the length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate the area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Print the results
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}