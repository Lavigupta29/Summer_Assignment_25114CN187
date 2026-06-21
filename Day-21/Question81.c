//WAP to Find string length without strlen().

#include<stdio.h>

int main(){

    int len = 0, i;
    char str[20];

    printf("Enter a string : ");
    scanf("%[^\n]", str);

    i = 0;
    while(str[i] != '\0'){
        len++;
        i++;
    }

    printf("Length of string = %d", len);

    return 0;
}