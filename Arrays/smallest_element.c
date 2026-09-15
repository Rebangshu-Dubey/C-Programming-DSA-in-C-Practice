//To find the smallest element in an array

#include<stdio.h>
int main() {
    int i , n , min;
    printf("Enter the size : ");
    scanf("%d",&n);

    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    min = arr[0];
    for(i = 1;i < n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];

        }
    }
    printf("Smallest = %d", min);
    return 0;
    
}