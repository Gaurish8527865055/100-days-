#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
