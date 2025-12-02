
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid positive number.\n");
    } else {
        printf("Natural numbers from 1 to %d are:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}