#include <stdio.h>

int main() {
    FILE *fp;
    char line[256]; 
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
