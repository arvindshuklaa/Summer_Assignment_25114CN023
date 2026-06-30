#include <stdio.h>

int main() {
    int choice, n = 0, i, searchId;
    int empId[100];
    char empName[100][50];
    float salary[100];

    while (1) {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &empId[n]);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", empName[n]);

            printf("Enter Salary: ");
            scanf("%f", &salary[n]);

            n++;
            printf("Employee added successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("\nNo employee records found!\n");
            } else {
                printf("\n------ Employee Records ------\n");
                printf("ID\tName\t\tSalary\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%.2f\n",
                           empId[i], empName[i], salary[i]);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (empId[i] == searchId) {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", empName[i]);
                    printf("Salary      : %.2f\n", salary[i]);
                    break;
                }
            }

            if (i == n)
                printf("Employee not found!\n");

            break;

        case 4:
            printf("Thank you for using Employee Management System!\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}