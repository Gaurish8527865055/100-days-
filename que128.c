#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) { 
            ch = tolower(ch); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
