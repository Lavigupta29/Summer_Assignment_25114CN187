//WAP to Binary search.

#include<stdio.h>

int main(){

    int a[100], n, i, beg, end, mid, key, loc = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    beg = 0;
    end = n-1;
    while(beg <= end)
    {
        mid = (beg + end)/2;
        if(a[mid] == key)
        {
            loc = mid;
            printf("Element %d is found at %d index.", key, loc);
            break;
        }
        else if( a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if(loc == -1)
    {
        printf("Element is not found.");
    }
    return 0;
}