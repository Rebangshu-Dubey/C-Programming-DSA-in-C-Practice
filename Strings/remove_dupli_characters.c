//To remove duplicate characters from a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string : ");                                             // Asks the user to enter a string
    if(fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';                                          // Remove the newline character from the string

    int i = 0;                                                               // Reads the string from standard input
    int j = 0;                                                               // Tracks the position for the next unique character in the modified string

    while(str[i] != '\0')
    {
        int found = 0;

        for(int k = 0; k<i; k++)                                             // Checks if the current character has already been encountered in the modified string
        {
            if(str[k] == str[i])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';                                                           // Null-terminate the modified string

    printf("String after removing duplicate characters : %s\n", str);        // Print the modified string
    return 0;

}