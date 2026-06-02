#include<stdio.h>

int main(){ 
    int n, product = 1, r;
    printf("enter a number:");
    scanf("%d", &n);
     while( n!=0 ){
        r = n % 10;
        product = product * r;
        n = n/10;
     }
     printf("The product of digits of a number is %d", product);
     return 0;
}     
