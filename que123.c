#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; 
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++; 

        if (ch == '\n') {
            lineCount++; 
        }

        if (isspace(ch)) {
            inWord = 0; 
        } else if (inWord == 0) {
            inWord = 1; 
            wordCount++;
        }
    }
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(fp);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
