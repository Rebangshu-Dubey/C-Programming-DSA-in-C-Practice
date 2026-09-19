//To calculate the Average of elements in an array

#include<stdio.h>
int main()
{
    int n;
    float sum = 0;
    float average;

    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Elements:\n");

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n; i++)
    {
        sum += arr[i];
    }

    average = sum/n;
    printf("The average is: %f", average);
    return 0;
}
