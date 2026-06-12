//WAP to write function for perfect number.

#include<stdio.h>

int Perfect(int n)

{
    int sum = 0;

    for(int i=1; i<n; i++){

        if(n%i==0){

            sum = sum + i;
        }
    }

    return(sum==n);   
}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(Perfect(num)){
        printf("%d is a Perfect number.", num);
    }
    else{
        printf("%d is not a Perfect number.", num);
    }

    return 0;
}