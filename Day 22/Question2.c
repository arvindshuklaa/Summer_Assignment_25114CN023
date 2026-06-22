#include <stdio.h>
int main(){
    char str[100];
    int words = 0, i = 0;

    printf("Enter a sentence : ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n'){
        if((i == 0 && str[i] != ' ')||(str[i] != ' ' && str[i - 1] == ' ')){
            words++;
        }
        i++;
    }
    printf("Number of words = %d\n", words);

    return 0;
}