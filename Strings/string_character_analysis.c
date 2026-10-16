// To analyze the characters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string : ");                            // Asks the user to enter a string
    if(fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;                                           // Return if input fails
    }                                                       // Read the string from standard input

    str[strcspn(str, "\n")] = '\0';                              // Remove the newline character from the string
    
    int i = 0;
    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    while(str[i] != '\0')
    {

        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))        // Check if the character is an alphabet
        {

            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')              // Check if the character is a vowel
            {
                 vowelCount++;                                   // Count vowels
            }
            else
            {
            consonantCount++;                               // Count consonants
            }
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;                                   // Count digits
        }
        else
        {
            otherCount++;                                   // Count other characters
        }

        i++;
    }

    printf("Vowels in the string : %d\n", vowelCount);                    // Print the count of vowels
    printf("Consonants in the string : %d\n", consonantCount);
    printf("Digits in the string : %d\n", digitCount);
    printf("Other characters in the string : %d\n", otherCount);

    return 0;

}