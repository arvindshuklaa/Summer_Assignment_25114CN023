#include <stdio.h>
int main(){
    int n, sum = 0;

    printf("Enter the order of square matrix : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        sum = sum + matrix[i][i];
    }
    printf("Sum of main diogonal elements = %d\n", sum);

    return 0;
}