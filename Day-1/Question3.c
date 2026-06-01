#include<stdio.h>
int main(){
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==0||n==1)
    printf("Factorial = 1");
    i = 1;
    while(i<=n)
    {
        fact = fact * i;
        i++;

    }
    printf("Factorial of %d is %d",n ,fact);
    return 0;
}