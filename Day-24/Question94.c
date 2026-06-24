//WAP to Compress a string.

#include<stdio.h>

int main(){

    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){
        count = 1;
        while(str[i] == str[i + 1]){
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;

}