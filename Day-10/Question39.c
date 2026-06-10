//WAP to Print number pyramid.

#include<stdio.h>

int main(){

    int i, j, k;
    int n = 5;

    for(i=1; i<=n; i++){
        //spaces
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        //Increasing numbers
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        //Decreasing numbers
        for(j=i-1; j>=1; j--){
            printf("%d", j);
        }

        printf("\n");

    }

    return 0;
}


