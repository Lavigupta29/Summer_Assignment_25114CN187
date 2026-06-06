// WAP to find x^n without pow()

#include<stdio.h>

int main(){

    int x, n, i;
    long long result = 1;

    printf("Enter the base(x): ");
    scanf("%d", &x);
    printf("Enter the power(n): ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        result = result * x;
    }

    printf("%d^%d is %lld\n", x, n, result);

    return 0;
}