#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int start = 0, end;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            int left = start, right = end;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = i + 1; 
        }

        if (str[i] == '\0') break;
    }

    printf("Sentence with each word reversed: %s\n", str);

    return 0;
}
