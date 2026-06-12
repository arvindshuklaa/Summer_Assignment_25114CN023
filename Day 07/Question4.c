#include <stdio.h>

int reverse = 0;

void reverseN(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d" ,&n);

    reverseN(n);
    printf("Reverse of number is = %d", reverse);
    return 0;
}
void reverseN(int n){
    if(n == 0){
        return;
    }
    reverse = reverse * 10 + (n % 10);
    reverseN(n / 10); 
}