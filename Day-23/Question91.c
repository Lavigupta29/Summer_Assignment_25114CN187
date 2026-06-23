//WAP to Check anagram strings.

#include<stdio.h>
#include<string.h>

int main(){

    char str1[100];
    char str2[100];
    int i, j;
    char temp;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    if(strlen(str1) != strlen(str2)){
        printf("Strings are not Anagrams.");
    }
    else{

    for(i = 0; str1[i] != '\0'; i++){
        for(j = i + 1; str1[j] != '\0'; j++){
            if(str1[i] > str1[j]){
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for(i = 0; str2[i] != '\0'; i++){
        for(j = i + 1; str2[j] != '\0'; j++){
            if(str2[i] > str2[j]){
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    if(strcmp(str1, str2) == 0){
        printf("Strings are anagrams.");
    }
    else{
        printf("Strings are not anagrams.");
    }

    return 0;
    }

}