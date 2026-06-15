#include <stdio.h>
int main(){
    int arr[100], n, i, j = 0, temp;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n",n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    printf("Array after moving zeros to the end:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}