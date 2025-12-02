#include <stdio.h>

int main() {
    char ch;

   
    printf("Enter a character: ");
    scanf(" %c", &ch); 
   
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
    }

   
    if (ch >= 'a' && ch <= 'z') {
      
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a VOWEL.\n", ch);
        } else {
            printf("%c is a CONSONANT.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}