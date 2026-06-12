#include <stdio.h>
#include <math.h>

int isArmstrong(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d" ,&n);

    if(isArmstrong(n)){
        printf("%d is an Armstrong Number",n);
    }
    else{
        printf("%d is not an Armstrong",n);
    }
    return 0;
    
}
int isArmstrong(int n){
    int original, rem, digits = 0, sum = 0;
    original = n;

    while(original != 0){
        digits++;
        original = original / 10;
    }
    original = n;

    while(original != 0){
        rem = original % 10;
        sum = sum + pow(rem, digits);
        original = original / 10;
    }
    return (sum == n);

}