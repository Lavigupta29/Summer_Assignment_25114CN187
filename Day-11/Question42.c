//WAP to Write function to find maximum.

#include<stdio.h>

int Maximum(int a, int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int num1, num2, max;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    max = Maximum(num1, num2);

    printf("Maximum number = %d", max);
 
    return 0;
}