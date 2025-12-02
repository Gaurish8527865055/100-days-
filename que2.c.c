#include <stdio.h>
int main()
{
    float a, b, sum, diff, prod, quot;
    printf("Enter two numbers separated by white space: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", prod);
    printf("Quotient = %.2f\n", quot);
    return 0;
}