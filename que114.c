#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s); 

    int n = strlen(s);
    int lastIndex[CHAR_RANGE]; 
    for (int i = 0; i < CHAR_RANGE; i++)
        lastIndex[i] = -1; 

    int maxLen = 0;
    int start = 0; 

    for (int i = 0; i < n; i++) {
        char currentChar = s[i];
        if (lastIndex[(int)currentChar] >= start) {
            start = lastIndex[(int)currentChar] + 1;
        }
        lastIndex[(int)currentChar] = i;
        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
