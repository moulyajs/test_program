/*
#include <stdio.h>
int main()
{
    char a[] = {'a', 'b', 'c'};
    char b[] = {'a', 'b', 'c', '\0'};
    char c[] = "abc";
    char d[] = "abc\0";
    char e[] = {'a', 't', 'm', 'a', '\0', 't', 'r', 'i', 's', 'h', 'a', '\0'};
    printf("a is %s\n", a);
    printf("b is %s\n", b);
    printf("c is %s\n", c);
    printf("d is %s\n", d);
    printf("e is %s\n", e);
    printf("size of e is %d\n", sizeof(e));
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "hello";
    printf("%d\n", sizeof(a));
    printf("%d\n", strlen(a));
    char b[] = "hello\0";
    printf("%d\n", sizeof(b));
    printf("%d\n", strlen(b));
}
*/
/*
#include <stdio.h>
int main()
{
    char a[10];
    scanf("%[^abcd]s", a);
    printf("%s", a);
}
*/