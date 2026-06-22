//WAP to Count words in a sentence.

#include<stdio.h>


int main(){

    char str[100];
    int i, words = 1;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);


    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            words++;
        }
    }
    printf("Words in a sentence: %d", words);

    return 0;
}
