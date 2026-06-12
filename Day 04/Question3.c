#include <stdio.h>
#include <math.h>

int main(){
    int n, original, rem, digits = 0, sum = 0;

    printf("Enter a number : ");
    scanf("%d" ,&n);

    original = n;

    while(n != 0){
        digits++;
        n = n / 10;
    }

    n = original;
    
    while(n != 0){
        rem = n % 10;
        sum = sum +(int)pow(rem , digits);
        n = n / 10;
    }
    if(sum == original){
        printf("%d is an Armstrong Number" ,original);
    }
    else{
        printf("%d is not an Armstrong Number",original);
    }
    return 0;
}