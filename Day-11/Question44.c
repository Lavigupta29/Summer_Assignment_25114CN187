//WAP to Write function to find factorial

#include<stdio.h>

int fact(int n){

    int i, Fact = 1;

    for(i=n; i>=1; i--){
        
        Fact = Fact * i;

    }

    return Fact;
}

int main(){

    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = fact(num);

    printf("Factorial of %d = %d", num, result);

    return 0;
}