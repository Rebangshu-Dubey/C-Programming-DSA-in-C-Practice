// Insertion Sort in C

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size :");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(int j=1; j<n; j++)
    {
        int key = arr[j];
        int k = j-1;

        while(k>=0 && arr[k] > key)
        {
            arr[k+1] = arr[k];
            k--;
        }

        arr[k+1] = key;
    }

    printf("Sorted Array: ");

    for(int l=0; l<n; l++)
    {
        printf("%d ", arr[l]);
    }

    return 0;

}