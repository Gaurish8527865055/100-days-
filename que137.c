#include <stdio.h>

int main() {
    enum UserRole { ADMIN, USER, GUEST };

    int choice;
    enum UserRole role;
    printf("Enter user role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &choice);

    role = (enum UserRole)choice;
 
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
