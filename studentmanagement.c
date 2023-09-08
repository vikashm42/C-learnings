#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to insert a new student record
void insertStudent(struct Student *students, int *numStudents) {
    if (*numStudents < 100) {
        printf("Enter Roll Number: ");
        scanf("%d", &students[*numStudents].rollNumber);
        printf("Enter Name: ");
        scanf("%s", students[*numStudents].name);
        printf("Enter Marks: ");
        scanf("%f", &students[*numStudents].marks);

        (*numStudents)++;
        printf("Student record inserted successfully!\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}

// Function to update a student record
void updateStudent(struct Student *students, int numStudents) {
    int rollNumber;
    printf("Enter Roll Number of student to update: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Enter New Name: ");
            scanf("%s", students[i].name);
            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);
            printf("Student record updated successfully!\n");
            return;
        }
    }

    printf("Student not found.\n");
}

// Function to delete a student record
void deleteStudent(struct Student *students, int *numStudents) {
    int rollNumber;
    printf("Enter Roll Number of student to delete: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < *numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            for (int j = i; j < (*numStudents) - 1; j++) {
                students[j] = students[j + 1];
            }
            (*numStudents)--;
            printf("Student record deleted successfully!\n");
            return;
        }
    }

    printf("Student not found.\n");
}

// Function to display all student records
void displayStudents(struct Student *students, int numStudents) {
    printf("Student Records:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[100];
    int numStudents = 0;
    int choice;

    do {
        printf("\nStudent Management System\n");
        printf("1. Insert Student\n");
        printf("2. Update Student\n");
        printf("3. Delete Student\n");
        printf("4. Display Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertStudent(students, &numStudents);
                break;
            case 2:
                updateStudent(students, numStudents);
                break;
            case 3:
                deleteStudent(students, &numStudents);
                break;
            case 4:
                displayStudents(students, numStudents);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
