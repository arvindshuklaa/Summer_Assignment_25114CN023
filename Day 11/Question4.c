#include <stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d" ,&n);

    printf("factorial of %d = %d\n", n, fact(n));
    return 0;
}
int fact(int n){
    int fact = 1; 
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}