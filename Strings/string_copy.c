#include<stdio.h>
int main()
{
    char str1[100];
    printf("Enter a string : ");
    scanf("%s", str1);

    char str2[100];
    int i = 0;

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("The copied string is : %s", str2);
    return 0;
}