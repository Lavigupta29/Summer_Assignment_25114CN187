//WAP to Find maximum frequency element.

#include<stdio.h>

int main(){

    int arr[100], n;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i=0; i<n; i++){    
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, maxElement;

    for(int i=0; i<n; i++){
        int count = 0;

        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }   
        }
    

        if(count > maxFreq){
            maxFreq = count;
            maxElement = arr[i]; 
        }
    
    }

    printf("Maximum Frequency Element: %d\n", maxElement);
    printf("Frequency : %d\n", maxFreq);

    return 0;
}