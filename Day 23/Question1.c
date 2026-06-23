#include <stdio.h>
int main(){
    char str[100];
    int i, j, count;
    int found = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        count = 0;
    

    for(j = 0; str[i] != '\0' && str[j] != '\n'; j++){
        if(str[i] == str[j]){
            count++;
        }
    }
    if(count == 1){
        printf("First non-repeating character = %c\n", str[i]);
        found = 1;
        break;
    }
 }
 if(!found){
    printf("No non-repeating character found\n");
 }
 return 0;
}