#include <stdio.h>

int main() {
    int n; 
    int num; 
    int i;
    int isPrime; 
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);
    for (num = 2; num <= n; num++) {
        isPrime = 1; 
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) { 
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n"); 
    return 0; 
}