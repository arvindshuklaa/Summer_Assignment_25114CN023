#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float english, maths, science;
    float total, percentage;
    char grade;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Add Student Marks\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (n >= 100) {
                printf("Record storage is full!\n");
                break;
            }

            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter English Marks: ");
            scanf("%f", &s[n].english);

            printf("Enter Maths Marks: ");
            scanf("%f", &s[n].maths);

            printf("Enter Science Marks: ");
            scanf("%f", &s[n].science);

            s[n].total = s[n].english + s[n].maths + s[n].science;
            s[n].percentage = s[n].total / 3.0;

            if (s[n].percentage >= 90)
                s[n].grade = 'A';
            else if (s[n].percentage >= 75)
                s[n].grade = 'B';
            else if (s[n].percentage >= 60)
                s[n].grade = 'C';
            else if (s[n].percentage >= 40)
                s[n].grade = 'D';
            else
                s[n].grade = 'F';

            n++;
            printf("Marksheet generated successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No records found.\n");
            } else {
                printf("\n===== Student Marksheets =====\n");

                for (i = 0; i < n; i++) {
                    printf("\n-----------------------------\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("English     : %.2f\n", s[i].english);
                    printf("Maths       : %.2f\n", s[i].maths);
                    printf("Science     : %.2f\n", s[i].science);
                    printf("Total       : %.2f\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);
                    printf("Grade       : %c\n", s[i].grade);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\n===== Student Marksheet =====\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("English     : %.2f\n", s[i].english);
                    printf("Maths       : %.2f\n", s[i].maths);
                    printf("Science     : %.2f\n", s[i].science);
                    printf("Total       : %.2f\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);
                    printf("Grade       : %c\n", s[i].grade);

                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student record not found.\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}