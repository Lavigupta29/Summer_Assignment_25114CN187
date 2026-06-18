//WAP to Find diagonal sum.

#include<stdio.h>

int main(){

    int a[10][10];
    int r, c, i, j, sum = 0;

    printf("Enter rows and columns of matrix:  ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    if(r == c){
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                if(i == j){
                    sum += a[i][j];
                }
            }
        }
        printf("Sum of all diagonal elements = %d", sum);
    }
    return 0;
}