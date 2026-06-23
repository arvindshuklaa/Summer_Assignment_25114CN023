#include <stdio.h>
int main(){
    char str[100];
    int i, j;
    int found = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        for(j = i + 1; str[j] != '\0' && str[j] != '\n'; j++){
        if(str[i] == str[j]){
            printf("First repesting character = %c\n", str[i]);
            found = 1;
            break;
        }
    }
    if(found){
        break;
    }
  }
  return 0;
}