#include <stdio.h>

int sumD(int n);

int main(){
    int n;
    printf("Enter NUmber : ");
    scanf("%d" ,&n);

    printf("Sum of digits = %d\n", sumD(n));
    return 0;
}

int sumD(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sumD(n / 10);
}