#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All substrings of the string:\n");
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            for (int k = start; k <= end; k++) {
                putchar(str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
