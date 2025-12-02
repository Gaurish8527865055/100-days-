#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int capitalizeNext = 1; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1; 
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
