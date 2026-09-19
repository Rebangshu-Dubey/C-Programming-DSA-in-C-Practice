// Binary Search in c

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key :");
    scanf("%d", &key);

    int left = 0;
    int right = n-1;
    int mid;

    while(left <= right)
    {

        mid = (left + right)/2;

        if(arr[mid] == key)
        {
            printf("The key is found at index : %d", mid);
            break;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 0;

}
