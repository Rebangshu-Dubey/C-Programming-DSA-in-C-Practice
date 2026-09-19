// To print the maximum and minimum element in an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int j = 1;j<n;j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
        }
        if(arr[j]  < min)
        {
            min = arr[j];
        }
    }
    
    printf("The maximum element is : %d\n", max);
    printf("The minimum element is : %d", min);

    return 0;

}