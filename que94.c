#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int maxLength = 0, length = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }
            length = 0;
            start = i + 1;
        }
    }
    if (length > maxLength) {
        maxLength = length;
        maxStart = start;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
