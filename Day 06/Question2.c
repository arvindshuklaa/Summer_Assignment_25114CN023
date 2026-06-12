#include <stdio.h>
#include <math.h>
int main(){
int binary, rem, decimal = 0, power = 0;

printf("Enter Binary Number : ");
scanf("%d" ,&binary);

while(binary != 0){
    rem = binary % 10;
    decimal = decimal + rem * pow(2 , power);
    power++;
    binary = binary / 10;
}
printf("Decimal = %d" ,decimal);
return 0;

}