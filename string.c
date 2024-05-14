// to find the position or index of the given element in the string
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "This is an exam";
    char *b = strchr(a, 's');
    if (b != NULL)
    {
        int p = b - a;
        printf("the character is found at position %d", p);
    }
    else
    {
        printf("the character not found");
    }
    return 0;
}
*/
// to find the length of the given string
/*
#include <stdio.h>
int my_len(char a[]);
int main()
{
    char a[] = "hello world";
    int l = my_len(a);
    printf("%d", l);
}
int my_len(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}
*/
/*
#include <stdio.h>
void my_copy(char b[], char a[]);
int main()
{
    char a[30] = "happybirthday";
    char b[30];
    my_copy(b, a);
    return 0;
}
void my_copy(char b[], char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    printf("the copied string is %s", b);
}
*/
/*
#include <stdio.h>
int my_len(char a[]);
int main()
{
    char a[] = "hello world";

    int l = my_len(a);
    printf("%d", l);
}
int my_len(char *s)
{
    int i = 0;
    while (*s)
    {
        i++;
        s++;
    }
    return i;
}
*/
/*
#include <stdio.h>
int my_len(char a[]);
int main()
{
    char a[] = "hello world";

    int l = my_len(a);
    printf("%d", l);
}
int my_len(char *s)
{
    int i = 0;
    if (!(*s))
        return 0;
    else
        return 1 + my_len(++s);
}
*/
/*
#include <stdio.h>
void my_copy(char *b, char *a);
int main()
{
    char a[30] = "happybirthday";
    char b[30];
    my_copy(b, a);
    return 0;
}
void my_copy(char *b, char *a)
{
    char *start = b;

    while (*a)
    {
        *b = *a;

        a++;
        b++;
    }
    *b = '\0';

    printf("the copied string is %s\n", start);
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter string 1:");
    scanf("%s", str1);
    printf("enter string 2:");
    scanf("%s", str2);
    int r = strcmp(str1, str2);
    if (r == 0)
    {
        printf("%s and %s are equal", str1, str2);
    }
    else if (r > 0)
    {
        printf("%s is higher than %s", str1, str2);
    }
    else
    {
        printf("%s is lower than %s", str1, str2);
    }
}
*/
