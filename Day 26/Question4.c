#include <stdio.h>
int main(){
    int answer, score = 0;

    printf("===== Welcome to the Quiz Application =====\n\n");

    printf("1. What is the capital of India ?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer : ");
    scanf("%d", &answer);
    if(answer == 2){
        score++;
    }

    printf("\n2. Which language is used for system programming ?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer : ");
    scanf("%d", &answer);
    if(answer == 1){
        score++;
    }

    printf("\n3. How many days are there in a leap year ?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer : ");
    scanf("%d", &answer);
    if(answer == 2){
        score++;
    }

    printf("\n4. Which symbol is used to end a statement in C ?\n");
    printf("1. :\n2. .\n3. ;\n4. ,\n");
    printf("Enter your answer : ");
    scanf("%d", &answer);
    if(answer == 3){
        score++;
    }

    printf("\n5. Who is known as the Father of C Language ?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    printf("Enter your answer : ");
    scanf("%d", &answer);
    if(answer == 1){
        score++;
    }

    printf("\n===== Quiz Completed =====\n");
    printf("Your Score : %d/5\n", score);

    if(score == 5){
        printf("Excellent! Perfect Score.\n");
    }
    else if(score >= 3){
        printf("Good Job!\n");
    }
    else{
        printf("Keep Practising!\n");
    }

    return 0;
}