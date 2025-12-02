#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 26 

int main() {
    char s[1000], t[1000];

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freqS[CHAR_RANGE] = {0};
    int freqT[CHAR_RANGE] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
