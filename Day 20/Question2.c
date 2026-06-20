#include <stdio.h>
int main(){
    int n, i, j;
    int isSymetric = 1;

    printf("Enter the order of square matrix : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements :\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymetric = 0;
                break;
            }
        }
        if(isSymetric == 0){
            break;
        }
    }
    if(isSymetric){
        printf("The matrix is symetric\n");
    }else{
        printf("The matrix is not symetric\n");
    }
    return 0;
}