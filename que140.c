#include <stdio.h>
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;
typedef struct {
    char name[50];
    Gender gender;
} Person;
void printGender(Gender g) {
    switch (g) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }
}

int main() {
    Person p1 = {"Alice", FEMALE};
    
    printf("Person's name: %s\n", p1.name);
    printf("Person's gender: ");
    printGender(p1.gender);
    
    return 0;
}
