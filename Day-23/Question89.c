//WAP to Find first non repeating character.

#include<stdio.h>

int main(){

    char str[100];
    int i, j, flag, found = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){
        flag = 1;

        for(j = 0; str[j] != '\0'; j++){
            if( i != j && str[i] == str[j]){
                flag = 0;
                break;
            }
        }
    
        if(flag == 1){
            printf("First non repeating character: %c", str[i]);
            found = 1;
            break; 
        }
    }

    if(found == 0){
        printf("No non-repeating character found.");
    }

return 0;

}
