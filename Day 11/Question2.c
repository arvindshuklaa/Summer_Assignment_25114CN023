#include <stdio.h>

int max(int a, int b);

int main(){
    int a, b, result;
    printf("Enter First Number : ");
    scanf("%d" ,&a);
    printf("Enter Second Number : ");
    scanf("%d" ,&b);

    result = max(a, b);
    printf("Maximum = %d",result);
}
int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}