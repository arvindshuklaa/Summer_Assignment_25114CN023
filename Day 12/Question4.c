#include <stdio.h>

int isPerfect(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if(isPerfect(n)){
        printf("%d is a Perfect Number",n);
    }
    else{
        printf("%d is not a Perfect Number",n);
    }
    return 0;
}
int isPerfect(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    return (sum == n);
}