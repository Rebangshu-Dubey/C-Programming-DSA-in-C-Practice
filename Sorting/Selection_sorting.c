//Selection Sorting in C

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int pass=0; pass<n-1; pass++)
    {
        int minIndex = pass;

        for(int j = pass+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[pass];
        arr[pass] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted Array: ");

    for(int k=0; k<n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;

}