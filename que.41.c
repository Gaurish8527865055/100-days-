#include <stdio.h>
int isPerfect(int num) {
    if (num <= 0) { 
        return 0; 
    }

    int sum_of_divisors = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
            if (i * i != num) { 
                sum_of_divisors += num / i;
            }
        }
    }
    return (sum_of_divisors == num && num != 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}