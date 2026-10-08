// To find a character in a string using while loop.

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    char key;
    printf("Enter a character to find : ");
    scanf(" %c", &key);                         // space between %c and &key to avoid skipping the input

    int found = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == key)
        {
            found = 1;
            break;
        }

        i++;
    }

    if(found == 1)
    {
        printf("Character %c found in the string at index %d ", key, i);
    }
    else
    {
        printf("Character %c not found in the string", key);
    }

    return 0;

}