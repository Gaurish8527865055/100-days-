#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount, swappedNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 9) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }
    lastDigit = num % 10;
    digitsCount = (int)log10(num);
    firstDigit = (int)(num / pow(10, digitsCount));
    swappedNum = lastDigit;
    swappedNum *= (int)pow(10, digitsCount);
    
    swappedNum += num % ((int)pow(10, digitsCount)); 
    swappedNum -= lastDigit; 
    swappedNum += firstDigit;

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}