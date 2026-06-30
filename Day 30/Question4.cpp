#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n = 0;

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("Student record added successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\n----------- Student Records -----------\n");
    printf("Roll No\tName\t\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, searchRoll;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++) {
        if (roll[i] == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student not found!\n");
}

// Function to delete student
void deleteStudent() {
    int i, j, delRoll;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &delRoll);

    for (i = 0; i < n; i++) {
        if (roll[i] == delRoll) {
            for (j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            n--;
            printf("Student record deleted successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank you for using Student Management System!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}