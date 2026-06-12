//WAP to Write function for Fibonacci.

#include<stdio.h>

void Fibonacci(int n){

    int a = 0, b = 1, c, i;

    printf("Fibonacci series: ");

    for(i=1; i<=n; i++){

        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
              
    }

}

int main(){

    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    Fibonacci(num);

    return 0;

}