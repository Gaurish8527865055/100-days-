#include <stdio.h>

int main() {
    int decimalNumber, i;
    int binaryArray[32]; 
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    i = 0;
    while (decimalNumber > 0) {
        binaryArray[i] = decimalNumber % 2; 
        decimalNumber = decimalNumber / 2;  
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    printf("\n");

    return 0;
}