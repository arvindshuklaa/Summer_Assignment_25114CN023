#include <stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while(1){
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){

            case 1 : 
               printf("Enter Roll Number : ");
               scanf("%d", &s[n].roll);

               printf("Enter Name : ");
               scanf(" %[^\n]", s[n].name);

               printf("Enter Marks :");
               scanf("%f", &s[n].marks);

               n++;
               printf("Student record added successfully!\n");
               break;

            case 2 : 
               if(n == 0){
                printf("No records found.\n");
               }else{
                printf("\nStudent Records: \n");
                for(i = 0; i < n; i++){
                    printf("\nRoll No : %d",s[i].roll);
                    printf("\nName : %s", s[i].name);
                    printf("\nMarks : %.2f\n",s[i].marks);
                }
            }
            break;

            case 3 : 
                printf("Enter Roll Number to search : ");
                scanf("%d", &roll);

                found = 0;
                for(int i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        printf("\nStudents Found :\n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name : %s\n",s[i].name);
                        printf("Marks : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    printf("Student Record not found.\n");
                }
                break;

                case 4 :
                    printf("Exiting Program.....\n");
                    return 0;

                default : 
                    printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}