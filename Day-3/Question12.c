#include<stdio.h>
 
int main(){
    int a, b, temp, GCD, LCM;
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    GCD = a;
    
    LCM = num1*num2/ GCD;
    printf("LCM of two numbers: %d\n", LCM);

    return 0;
}