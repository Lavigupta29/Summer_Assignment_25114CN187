//WAP to Find maximum occuring character.

#include<stdio.h>

int main(){

    int i, j, count, max = 0;
    char ch;
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){
        count = 0;
        for(j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
            }
        }

        if(count > max){
            max = count;
            ch = str[i];
        }
    }
    printf("Maximum occuring character: %c\n", ch);
    printf("Frequency of maximum character: %d", max);

    return 0;
}