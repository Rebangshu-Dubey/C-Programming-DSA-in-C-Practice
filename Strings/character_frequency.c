// To count the frequency of each character in a string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string :");                                             // Asks the user to enter a string

    if(fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';                                          // Remove the newline character from the string

    int i , j = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        int found = 0;

        for(int k = 0; k<i; k++)                                            // Checks if the current character has already been encountered in the modified string
        {
            if(str[k] == str[i])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            int count = 0;

            for(int k = 0; str[k] != '\0'; k++)
            {
                if(str[k] == str[i])                                                // Counts the frequency of the current character in the string
                {
                    count++;
                }
            }

            printf("Frequency of %c = %d\n", str[i], count);                       // Print the frequency of the current character
            
        }
    }
    return 0;

    }
    
