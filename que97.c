#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    int i = 0;
    if (isalpha(name[i])) {
        printf("%c", toupper(name[i]));
    }
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");

    return 0;
}
