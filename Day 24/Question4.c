#include <stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};
    int i, j= 0;
    char result[100];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 0){
            result[j++] = str[i];
            freq[(unsigned char)str[i]]++;
        }
    }
    result[j] = '\0';
    printf("String after removing duplicates : %s\n", result);
    
    return 0;
}