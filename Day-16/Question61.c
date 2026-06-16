//WAP to Find missing number in array.

#include<stdio.h>

int main(){

    int arr[100], n, sum = 0, expectedSum, missing;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n-1);
    for(int i=0; i<n-1; i++){

        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;

    printf("Missing number : %d", missing);
    
    return 0;
}