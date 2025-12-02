#include <stdio.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    Student s1;
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);
    
    return 0;
}
