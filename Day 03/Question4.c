#include <stdio.h>
int main(){
    int a , b, max , lcm;

    printf("Enter Two Numbers : ");
    scanf("%d%d" , &a ,&b);

    max = (a > b) ? a : b;

    while(1){
        if (max % a == 0 && max %b == 0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is = %d", a, b , lcm);
    return 0;
}