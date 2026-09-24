#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a string : ");
    scanf("%s", str);

    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    printf("The length of the string is : %d", count);

    return 0;
}