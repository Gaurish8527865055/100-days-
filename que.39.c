#include <stdio.h>
#include <string.h> 

int main() {
    char binary[32]; 
    char onesComp[32];
    int i;
    int isValidBinary = 1; 

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            onesComp[i] = '1';
        } else if (binary[i] == '1') {
            onesComp[i] = '0';
        } else {
            printf("Invalid input: Please enter a valid binary number (containing only 0s and 1s).\n");
            isValidBinary = 0; 
            break; 
        }
    }
    onesComp[length] = '\0';

    if (isValidBinary) {
        printf("Original binary: %s\n", binary);
        printf("1's complement: %s\n", onesComp);
    }

    return 0;
}