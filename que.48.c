#include <stdio.h>

int main() {
    int i, j;
    int num_rows = 5; 
    for (i = 1; i <= num_rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}