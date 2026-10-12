// To count a character in a string using while loop.

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    char key;
    printf("Enter a character to count : ");
    scanf(" %c", &key);                         // space between %c and &key to avoid skipping the input

    int i = 0;
    int count = 0;
    int index = -1;

    while(str[i] != '\0')
    {
        if(str[i] == key)
        {
            count++;
            index = i; 
        }

        i++;
    }

    if(count > 0)
    {
        printf("Character %c found %d times", key, count);

        if(index != -1)
        {
            printf(" and Last found at index %d", index);
        }
    }
    
    else
    {
        printf("Character %c not found in the string", key);
    }

    
    return 0;

}