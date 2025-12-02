 #include <stdio.h>

int main() {
    char filename[100];
    char text[1000];
    FILE *fp;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    getchar(); 

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text successfully appended to %s\n", filename);
    fclose(fp);

    return 0;
}
