#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[count] != '\0' && str[count] != '\n') { 
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
