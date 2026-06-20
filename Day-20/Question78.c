//WAP to check symmetric matrix.

#include<stdio.h>

int main(){

    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    if(r != c)
    {
        printf("Matrix is not symmetric (Not a square matrix).");
    }
    else
    {
        printf("Enter elements of matrix: ");
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            printf("Matrix is symmetric.");
        }
        else
        {
            printf("Matrix is not symmetric.");
        }
    }
    return 0;
}