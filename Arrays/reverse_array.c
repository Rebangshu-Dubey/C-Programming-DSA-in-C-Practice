//To Print the reverse of the elements of an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");

    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The reverse of the elements are:\n");

    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",arr[j]);

    }
    return 0;
}