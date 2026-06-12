//WAP to Write function for armstrong.

#include<stdio.h>
#include<math.h>

int armStrong(int n){

    int rem, sum = 0, count = 0, temp = n;

    while(temp>0){
        rem = temp%10;
        count++;
        temp = temp/10;
    }
    temp = n;

    while(temp>0){
        rem = temp%10;
        sum = sum + (int)(pow(rem, count) + 0.5);
        temp = temp/10;
    }

    return ( sum == n );

}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armStrong(num)){

        printf("%d is an Armstrong number.", num);

    }
    else{
        printf("%d is not an Armstrong number.", num);
    }

    return 0;

}