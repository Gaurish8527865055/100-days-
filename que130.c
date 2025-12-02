#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s.name); 
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);  
    printf("\n--- Student Records from File ---\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    i = 1;
    while (fscanf(fp, " %49s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("\nStudent %d:\n", i++);
        printf("Name: %s\n", s.name);
        printf("Roll Number: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
