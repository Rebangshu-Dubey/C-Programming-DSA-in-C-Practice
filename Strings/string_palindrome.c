// To check if a string is a palindrome.

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");                         // Prompt the user to enter a string
    scanf("%s", str);

    int i = 0;
    int length = 0;
    
    while(str[i] != '\0')
    {
        length++;                                        // count the length of the string
        i++;
    }

    int left = 0;
    int right = length - 1;

    int isPalindrome = 1;                                // Assume the string is a palindrome

    while(left < right)
    {
        if(str[left] == str[right]) 
        {
            isPalindrome = 1;
            left++;
            right--;
        }

        else
        {
            isPalindrome = 0;
            break;                                      // If characters don't match, it's not a palindrome
        }
    }

    if(isPalindrome == 1)
    {
        printf("The string is a palindrome.");          // Print if the string is a palindrome
    }
    else
    {
        printf("The string is not a palindrome.");      // Print if the string is not a palindrome
    }

    return 0;

}