// To count the even and odd elements in an array

#include<stdio.h>
int main() 
{
    int n;
    int even = 0;
    int odd = 0;

    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even elements are: %d\n", even);
    printf("Odd elements are: %d\n", odd);
    return 0;

}