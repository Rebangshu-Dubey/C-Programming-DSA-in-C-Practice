//To Find the second largest element in an array

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");

    for(int i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int secondlargest = -999999999;

    for(int j=0;j<n;j++)
    {
        if(arr[j] > largest)
        {
            secondlargest = largest;
            largest = arr[j];
        }
        else if(arr[j] > secondlargest && arr[j] < largest)
        {
            secondlargest = arr[j];
        }
    }
    printf("The largest element is: %d ", largest);
    printf("The second largest element is: %d ", secondlargest);
    return 0;
}