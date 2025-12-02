#include <stdio.h>

int main() {
    enum UserRole { ADMIN = 0, USER, GUEST };
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };
    int numRoles = 3;
    for (int i = 0; i < numRoles; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
