//WAP to Create quiz application.

#include<stdio.h>

int main(){

    int choice, score = 0;

    printf("\n===== QUIZ APPLICATION =====\n\n");


    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 1)
        score++;

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
        score++;

    printf("\nQ4. Which symbol is used to end a C statement?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\nQ5. How many bits are there in 1 byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if(score == 5){
        printf("Excellent!\n");
    }
    else if(score >= 3){
        printf("Good Job!\n");
    }
    else{
        printf("Keep Practicing!\n");
    }

return 0;
    
}