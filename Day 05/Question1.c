#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter Number : ");
    scanf("%d" ,&n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum  = sum + i;
        }
    }
    if(sum == n){
        printf("%d is a Perfect Number",n);
    }
    else{
        printf("%d is not a Perfect Number",n);
    }
    return 0;
}