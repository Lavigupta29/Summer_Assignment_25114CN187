// WAP to find largest prime factor

#include<stdio.h>

    int main(){
        int n, i, maxPrime = -1;

        printf("Enter any number: ");
        scanf("%d", &n);

        while(n%2 == 0){
            maxPrime = 2;
            n = n/2;
        }
        
        for(i=3; i*i<=n; i= i+2){
            while(n%i == 0){
                maxPrime = i;
                n = n/i;
            }
        }

        if(n>2){
            maxPrime = n;
        }

        printf("Largest Prime Factor: %d\n", maxPrime);

    return 0;
    }



