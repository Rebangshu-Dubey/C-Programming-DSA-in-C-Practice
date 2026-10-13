// To remove a character from a string using while loop.

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    char key;
    printf("Enter a character to remove : ");
    scanf(" %c", &key);                        // space between %c and &key to avoid skipping the input


    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == key)
        {
            int j = i;
            while(str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }

        else
        {
            i++;
        }
        
    }

    printf("String after removing character %c : %s", key, str);
    return 0;

}