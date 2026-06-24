//WAP to Find longest word.

#include<stdio.h>
#include<string.h>


int main(){

    char str[100], word[100], longest[100];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    longest[0] = '\0';

    for(i = 0; ;i++){

        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n'){
            word[j++] = str[i];
        }
        else{
            word[j] = '\0';

            if(strlen(word) > strlen(longest)){
                strcpy(longest, word);
            }
        
            j = 0;
        }  
        if(str[i] =='\0'){
            break;
        }

    }

    printf("Longest word: %s", longest);

    return 0;

}