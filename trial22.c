#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    scanf("%s", str);
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s", str);

    return 0;
}