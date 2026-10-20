#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}