#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
