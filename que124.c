#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);
    fclose(src);
    fclose(dest);

    return 0;
}
