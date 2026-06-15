//WAP to Move zeros to end.

#include<stdio.h>

int main(){

    int arr[100], n, i, temp, j=0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] != 0){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros to end:  \n");

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}