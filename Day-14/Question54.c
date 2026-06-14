//WAP to Frequency of an element.

#include<stdio.h>

int main(){

    int arr[100], n, i, key, count = 0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++){

        scanf("%d", &arr[i]);

    }

    printf("Enter element whose frequency is to be found:  ");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}