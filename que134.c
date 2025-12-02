#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status code;
    int choice;
    printf("Enter status code (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &choice);

    code = (enum Status)choice;
    switch (code) {
        case SUCCESS:
            printf("Operation was successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status code!\n");
    }

    return 0;
}
