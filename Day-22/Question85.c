// WAP to Check palindrome string.

#include<stdio.h>
#include<string.h>

int main(){

    int i, len, flag = 1;
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for(i = 0; i <= len/2; i++){
        if(str[i] != str[len -i -1]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("It is a palindrome string.");
    }
    else{
    printf("Not a palindrome string.");
    }
    return 0;
}