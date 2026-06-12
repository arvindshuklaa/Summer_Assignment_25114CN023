#include <stdio.h>

int sumN(int a, int b);

int main(){
    int a, b, result;
    printf("Enter First Number : ");
    scanf("%d" ,&a);
    printf("Enter Second Number : ");
    scanf("%d" ,&b);

    result = sumN(a, b);
    printf("Sum of numbers is = %d", result);
}
int sumN(int a, int b){
    return a + b;
}