#include <stdio.h>
#include <math.h>

int main(){
    int start , end ,temp;
    printf("Enter Starting Number : ");
    scanf("%d" ,&start);
    printf("Enter Ending Number : ");
    scanf("%d" ,&end);

    printf("Armstrong Numbers between %d and %d are: \n" , start , end);

    for(int num = start; num <= end; num++){
        int n = num, rem, digits = 0, sum = 0;

        temp = n;
        while(temp != 0){
            digits++;
            temp = temp / 10;
        }
        temp = n;
        while(temp != 0){
            rem = temp % 10;
            sum = sum + (int)pow(rem , digits);
            temp = temp / 10;
        }
        if(sum == num){
            printf("%d ", num);
        }
    }
    return 0;
}