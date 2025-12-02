
#include <stdio.h>
#include <ctype.h> 

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        if ((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z')) {
            char ch = tolower(str1[i]);
            freq1[ch - 'a']++;
        }
    }
    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        if ((str2[i] >= 'A' && str2[i] <= 'Z') || (str2[i] >= 'a' && str2[i] <= 'z')) {
            char ch = tolower(str2[i]);
            freq2[ch - 'a']++;
        }
    }
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
