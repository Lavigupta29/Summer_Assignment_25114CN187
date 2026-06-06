// WAP to convert decimal to binary

#include<stdio.h>

int main()
{   
    int n, i=0, j, rem, a[100];

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0){
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;

    }

    for(j = i-1; j>=0; j--){
        printf("%d", a[j]);
    }
    return 0;
}