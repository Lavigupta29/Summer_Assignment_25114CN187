//WAP to Print character pyramid.

#include<stdio.h>

int main(){

    int i, j, k;
    int n = 5;

    for(i=1; i<=n; i++){
        //spaces
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        //Increasing characters
        for(j=1; j<=i; j++){
            printf("%c", 64 + j);
        }
        //Decreasing characters
        for(j=i-1; j>=1; j--){
            printf("%c", 64 + j);
        }
        printf("\n");

    }
    return 0;
}
