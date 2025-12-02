#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

       
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = str[i];  
            j++;
        }
    }

    str[j] = '\0';  

    printf("String after removing vowels: %s\n", str);

    return 0;
}
