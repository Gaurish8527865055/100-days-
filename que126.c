#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1;
    }
    printf("Contents of '%s':\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
