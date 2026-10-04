// To concatenate two strings using while loop.

#include<stdio.h>
int main()
{
    int i = 0, j = 0;

    char str1[100];
    char str2[100];

    printf("Enter str1 : ");
    scanf("%s", str1);

    printf("Enter str2 : ");
    scanf("%s", str2);

    while(str1[i] != '\0')
    {
        i++;
    }
    str1[i] = ' ';
    i++;

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;

    }

    str1[i] = '\0';

    printf("Concatenated String is : %s", str1);

    return 0;

}