#include <stdio.h>

int isPrime(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if(isPrime(n)){
        printf("%d is a Prime Number\n",n);
    }
    else{
        printf("%d is not a Prime NUmber\n",n);
    }
    return 0;
}
int isPrime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}