// To compare Two strings using while loop.

#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("Enter str1 :");
    scanf("%s", str1);

    printf("Enter str2 :");
    scanf("%s", str2);

    int i = 0;

    int found = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            found = 1;
            break;
        }

        i++;

    }

    if(str1[i] != '\0' || str2[i] != '\0')
    {
        found = 1;
    }

    if(found == 1)
    {
        printf("Both strings are Unequal");
    }
    else
    {
        printf("Both Strings are Equal");
    }

    return 0;

}
