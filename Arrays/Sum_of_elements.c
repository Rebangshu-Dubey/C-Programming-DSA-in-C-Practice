//To find the sum of elements

#include<stdio.h>
int main() {
    int i, n;

    printf("Enter the size : ");
    scanf("%d",&n);

    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(i = 0;i < n;i++)
    {
        sum +=arr[i];
    }
    printf("Sum of the elements are : %d", sum);
    return 0;
}