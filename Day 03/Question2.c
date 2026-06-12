#include <Stdio.h>
int main(){
    int start, end, flag;
    printf("Enter Starting Number : ");
    scanf("%d" ,&start);
    printf("Enter Ending Number : ");
    scanf("%d" ,&end);

    printf("Prime Numbes between %d and %d are : \n" ,start ,end);

    for(int n = start; n <= end; n++){
        if(n <= 1){
            continue;
        }
        flag = 0;
        for(int i = 2; i*i <= n; i++){
            if(n % 2 == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d " ,n);
        }
    }
    return 0;
}