// To reverse a string using while loop.

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");            // Prompt the user to enter a string
    scanf("%s", str);

    int i = 0;
    int length = 0;

    while(str[i] != '\0')
    {
        length++;                       // Count the length of the string
        i++; 
    }

    int left = 0;
    int right = length - 1;

    while(left < right)
    {
        int temp = str[left];   
        str[left] = str[right];                          // Swap the characters at left and right indices
        str[right] = temp;

        left++;
        right--;

    }

    printf("Reversed string is : %s", str);          // Print the reversed string
    return 0;

}