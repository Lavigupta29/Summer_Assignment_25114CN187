// WAP to convert binary to decimal

#include<stdio.h>

int main(){
    
    int Binary, Decimal = 0, weight = 1, rem;
    
    printf("Enter a binary number: ");
    scanf("%d", &Binary);

    while(Binary!=0){
        rem = Binary%10;
        Decimal = Decimal + rem * weight;
        Binary = Binary/10;
        weight = weight * 2;
     }

     printf("%d", Decimal);

    return 0;
}