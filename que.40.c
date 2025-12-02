#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits = 0, powerOfTen = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    lastDigit = num % 10;
    temp = num;
    while (temp > 0) {
        digits++;
        if (temp >= 10) { 
            powerOfTen *= 10;
        }
        temp /= 10;
    }
    firstDigit = num / powerOfTen;
    int swappedNum = num % powerOfTen;
    swappedNum = swappedNum / 10;
    swappedNum = lastDigit * powerOfTen + swappedNum;
    swappedNum = swappedNum * 10 + firstDigit;
     printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}