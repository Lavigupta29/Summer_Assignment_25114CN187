//WAP to Reverse a string.

#include<stdio.h>
#include<string.h>

int main(){

    char str[20];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    strrev(str);

    printf("Reverse string : %s ", str);

    return 0;
}