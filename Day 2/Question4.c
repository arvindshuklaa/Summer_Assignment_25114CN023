#include <stdio.h>
int main(){
    int n , original , rem ,reverse = 0;
    printf("Enter Number : ");
    scanf("%d" ,&n);

    original = n;

    while(n != 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;  
    }
    if(original == reverse){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}