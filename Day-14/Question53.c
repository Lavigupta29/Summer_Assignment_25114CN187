//WAP to Linear search.

#include<stdio.h>

int main(){

    int arr[100], n, i, found = 0, key;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++){

        scanf("%d", &arr[i]);

    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(arr[i]==key){
            found = 1;
            break;
        }
    }

    if(found!=0){
        printf("Element found at position %d", i+1);
    }
    else{
        printf("Element not found");
    }

    return 0;
}