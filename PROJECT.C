#include <stdio.h>
#include <string.h>

// Structure for student record
struct Student {
    int sap_id;
    int roll_no;
    char name[50];
    char phone[15];
    char email[50];
    int year;
    int semester;
    float sgpa[8];    // SGPA of 8 semesters
    float cgpa;
};

// Function to calculate CGPA
float calcCGPA(float sgpa[]) {
    float sum = 0;
    for(int i = 0; i < 8; i++) {
        sum += sgpa[i];
    }
    return sum / 8;
}

// Add student details
void addStudent(struct Student s[], int index) {
    printf("\nEnter SAP ID: ");
    scanf("%d", &s[index].sap_id);

    printf("Enter Roll No: ");
    scanf("%d", &s[index].roll_no);

    printf("Enter Name: ");
    scanf("%s", s[index].name);

    printf("Enter Phone: ");
    scanf("%s", s[index].phone);

    printf("Enter Email: ");
    scanf("%s", s[index].email);

    printf("Enter Year (1-4): ");
    scanf("%d", &s[index].year);

    printf("Enter Semester (1-8): ");
    scanf("%d", &s[index].semester);

    printf("Enter SGPA of 8 semesters:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%f", &s[index].sgpa[i]);
    }

    s[index].cgpa = calcCGPA(s[index].sgpa);
    printf("\nStudent Added Successfully!\n");
}

// Display one student
void displayStudent(struct Student st) {
    printf("\nSAP ID: %d", st.sap_id);
    printf("\nRoll No: %d", st.roll_no);
    printf("\nName: %s", st.name);
    printf("\nPhone: %s", st.phone);
    printf("\nEmail: %s", st.email);
    printf("\nYear: %d", st.year);
    printf("\nSemester: %d", st.semester);
    printf("\nCGPA: %.2f\n", st.cgpa);
}

// Display all students
void displayAll(struct Student s[], int total) {
    for(int i = 0; i < total; i++) {
        if(s[i].sap_id != 0) {
            displayStudent(s[i]);
        }
    }
}

// Search student by SAP ID
void searchStudent(struct Student s[], int total) {
    int id;
    printf("\nEnter SAP ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < total; i++) {
        if(s[i].sap_id == id) {
            printf("\nRecord Found!\n");
            displayStudent(s[i]);
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}

// Delete student
void deleteStudent(struct Student s[], int total) {
    int id;
    printf("\nEnter SAP ID to delete: ");
    scanf("%d", &id);

    for(int i = 0; i < total; i++) {
        if(s[i].sap_id == id) {
            s[i].sap_id = 0;   // Mark as deleted
            printf("\nRecord Deleted!\n");
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}

// Sort by SAP ID
void sortBySAP(struct Student s[], int total) {
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - i - 1; j++) {
            if(s[j].sap_id > s[j+1].sap_id) {
                struct Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nSorted by SAP ID!\n");
}

// Sort by Name
void sortByName(struct Student s[], int total) {
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - i - 1; j++) {
            if(strcmp(s[j].name, s[j+1].name) > 0) {
                struct Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nSorted by Name!\n");
}

int main() {
    struct Student s[5];   // Only 5 students allowed
    int total_students = 5;
    int count = 0;
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Sort by SAP ID\n");
        printf("6. Sort by Name\n");
        printf("0. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < total_students) {
                addStudent(s, count);
                count++;
            } else {
                printf("\nOnly 5 Students Allowed!\n");
            }
        }
        else if(choice == 2) {
            displayAll(s, count);
        }
        else if(choice == 3) {
            searchStudent(s, count);
        }
        else if(choice == 4) {
            deleteStudent(s, count);
        }
        else if(choice == 5) {
            sortBySAP(s, count);
        }
        else if(choice == 6) {
            sortByName(s, count);
        }
        else if(choice == 0) {
            printf("\nExiting Program...\n");
        }
        else {
            printf("\nInvalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}