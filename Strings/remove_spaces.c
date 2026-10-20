// To remove spaces from a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string : ");                                             // Asks the user to enter a string
    if(fgets(str, sizeof(str), stdin) == NULL)                              // Read the string from standard input
    {
        return 1;                                                            // Return if input fails
    }
    str[strcspn(str, "\n")] = '\0';                                          // Remove the newline character from the string

    int i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';                                                           // Null-terminate the modified string

    printf("String after Removing spaces : %s\n", str);                      // Print the modified string
    return 0;
}