#include <stdio.h>

int main(){
    int arr[100], n, i, j;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n",n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are : \n");

    for(i = 0; i < n; i++){
        int isDuplicate = 0;

        for(j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate){
            continue;
        }
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("%d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}