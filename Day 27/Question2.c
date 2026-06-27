#include <stdio.h>
#include <string.h>

struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main(){
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while(1){
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1 :
               if(n >= 100){
                printf("Employee record is full!\n");
                break;
               }
            printf("Enter Employee ID : ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name : ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Department : ");
            scanf(" %[^\n]", emp[n].department);

            printf("Enter Salary : ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee added successfully!\n");
            break;


        case 2 : 
            if(n == 0){
                printf("No employee record found.\n");
            }else{
                printf("\n===== Employee Records =====\n");
                for(i = 0; i < n; i++){
                    printf("\n--------------------------\n");
                    printf("Employee ID : %d\n",emp[i].id);
                    printf("Name        : %s\n",emp[i].name);
                    printf("Department  : %s\n,emp[i].department");
                    printf("Salary      : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3 : 
            printf("Enter Employee ID to search : ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++){
                if(emp[i].id == id){
                    printf("\nEmployee Found:\n");
                    printf("Employee ID : %d\n", emp[i].id);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Department  : %s\n", emp[i].department);
                    printf("Salary      : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }
            if(!found){
                printf("Employee record not found.\n");
                break;
            }
        case 4 :
            printf("Exiting Program...\n");
            return 0;

        default :
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}