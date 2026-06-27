#include <stdio.h>
#include <string.h>

struct Salary {
    int empId;
    char name[50];
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

int main() {
    struct Salary s[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (n >= 100) {
                    printf("Record storage is full!\n");
                    break;
                }

                printf("Enter Employee ID: ");
                scanf("%d", &s[n].empId);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &s[n].basicSalary);

                printf("Enter Bonus: ");
                scanf("%f", &s[n].bonus);

                printf("Enter Deduction: ");
                scanf("%f", &s[n].deduction);

                s[n].netSalary = s[n].basicSalary + s[n].bonus - s[n].deduction;

                n++;
                printf("Salary record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\n===== Salary Records =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\n---------------------------\n");
                        printf("Employee ID  : %d\n", s[i].empId);
                        printf("Name         : %s\n", s[i].name);
                        printf("Basic Salary : %.2f\n", s[i].basicSalary);
                        printf("Bonus        : %.2f\n", s[i].bonus);
                        printf("Deduction    : %.2f\n", s[i].deduction);
                        printf("Net Salary   : %.2f\n", s[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].empId == id) {
                        printf("\nEmployee Salary Found:\n");
                        printf("Employee ID  : %d\n", s[i].empId);
                        printf("Name         : %s\n", s[i].name);
                        printf("Basic Salary : %.2f\n", s[i].basicSalary);
                        printf("Bonus        : %.2f\n", s[i].bonus);
                        printf("Deduction    : %.2f\n", s[i].deduction);
                        printf("Net Salary   : %.2f\n", s[i].netSalary);

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Salary record not found.\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}