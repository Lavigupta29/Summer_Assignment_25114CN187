#include<stdio.h>

int main(){
    int n, a=0, b=1, c, i;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if(n==1){
        printf("Nth Fibonacci term is : %d", a);
    }
    else if(n==2){
        printf("Nth Fibonacci term is : %d", b);
    }
    else{
        for(i=3; i<=n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term is: %d", b);
    }
    return 0;

}