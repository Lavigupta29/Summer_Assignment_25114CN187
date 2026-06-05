// WAP to check strong number


#include<stdio.h>

int main(){
    int n, digit, temp, i, fact, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);  
     
    temp = n;

    while(n>0){
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i++ ){
            fact = fact * i;
        }

        sum += fact;
        n /= 10;
    }

    if( sum == temp){
        printf("%d is a Strong Number\n", temp);
    }
    else{
        printf("%d is not a Strong Number\n", temp);
    }
return 0;
}