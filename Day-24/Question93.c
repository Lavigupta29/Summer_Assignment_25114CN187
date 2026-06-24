//WAP to Check string rotation.

#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    if(strlen(str1) != strlen(str2)){

        printf("Not a Rotation.");
        
    }
    else{

        strcpy(temp, str1);
        strcat(temp, str1);

        if(strstr(temp, str2)){
            printf("Rotation of string.\n");
        }
        else{
            printf("Not a rotation.\n");
        }
    }

    return 0;
}



