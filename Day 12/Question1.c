#include <stdio.h>

int isPalindrome(int n);

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(isPalindrome(n)){
        printf("%d is a Palindrome Number\n",n);
    }
    else{
        printf("%d is not a Palindrome Number\n",n);
    }
    return 0;
}
int isPalindrome(int n){
    int original = n;
    int reverse = 0;
    int rem;

    while(n != 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if(original == reverse){
        return 1;
    }
    else{
        return 0;
    }
}