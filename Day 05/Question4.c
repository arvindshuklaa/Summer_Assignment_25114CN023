#include <stdio.h>

int main(){
    int n, largestprime = -1;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            int prime = 1;

            for(int j = 2; j*j <= i; j++){
                if(i % j == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime){
                largestprime = i;
            }
        }
    }
    printf("Largest Prime Factor = %d" ,largestprime);
    return 0;
}