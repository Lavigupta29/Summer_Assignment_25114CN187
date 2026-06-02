#include<stdio.h>

int reverse(int num){
    int rev = 0, rem;
    while(num!= 0){
        rem = num % 10; // last digit of number
        rev = rev*10 + rem; // generate a number from rev with rem as last digit
        num = num/10; 
    }
    return rev;
}


int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int rev = reverse(num);
    printf("The reversed number is %d\n", rev);

    return 0;
}   

