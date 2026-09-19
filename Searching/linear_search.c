//Linear Search in C

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements:\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key:");
    scanf("%d", &key);

    int found = 0;
    int index;
    
    for(int j = 0;j<n;j++)
    {
        if(arr[j] == key)
        {
            found = 1;
            index = j;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found at index: %d", index);
    }
    else
    {
        printf("Element Not found");
    }

    return 0;
        
}
