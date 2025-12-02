#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}
