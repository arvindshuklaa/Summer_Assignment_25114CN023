#include <stdio.h>
int main(){
    int n ,i , sum = 0;
    printf("Enter NUmber : ");
    scanf("%d" ,&n);

    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Sum of first %d number =  %d" ,n , sum);
    return 0;
}