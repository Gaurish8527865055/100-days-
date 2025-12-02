#include <stdio.h>
int main()
{
    float a, b, sum;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    // Alternatively, you can take input in a single line as below:
    //scanf("%f %f", &a, &b);
    sum = a + b;
    printf("Sum = %.2f", sum);
    return 0;
}