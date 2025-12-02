#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int i = 0;

    printf("Formatted name: ");
    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && (i == 0 || name[i-1] == ' ')) {
            int j = i;
            int wordStart = i;
            int wordEnd = i;
            while (wordEnd < len && name[wordEnd] != ' ') wordEnd++;
            j = wordEnd;

            if (wordEnd == len) {  
                for (int k = i; k < wordEnd; k++)
                    printf("%c", name[k]);
                break; 
            } else {
                printf("%c.", toupper(name[i]));
            }
        }
    }

    printf("\n");

    return 0;
}
