//WAP to count even and odd elements.

#include<stdio.h>

int main(){

    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i=0; i<n; i++){

        scanf("%d", &arr[i]);

    }

    for(i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even ++;
        }
        else{
            odd ++;
        }
    }

    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);

    return 0;
}