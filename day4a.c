#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n a = %d, b = %d\n", a, b);

    return 0;
}