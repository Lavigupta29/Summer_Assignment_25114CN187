//WAP to check perfect number

#include<stdio.h>

int main(){
    int n, i, sum = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
for(i=2; i<=n/2; i++)
{
       if(n%i == 0);
        sum += i;

}

if(sum == n){
    printf("It is perfect number.");
}
else{
    printf("It is not a perfect number.");
}
return 0;
}
