#include <stdio.h>
int main(){
    int n ,flag;
    printf("Enter Number : ");
    scanf("%d" , &n);

    if(n <= 1){
        printf("%d is not a Prime Number", n);
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("%d is Prime Number");
    }
    else{
        printf("%d is not a Prime Number");
    }
    return 0;
}