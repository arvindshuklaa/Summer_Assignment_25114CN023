#include <stdio.h>

int main(){
    int arr[100], n;
    int sum = 0;
    float avg;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n",n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n", avg);

    return 0;
}