#include <stdio.h>
/*
enum months
{
    Jan,
    feb,
    mar,
    apr,
    may,
    jun,
    july,
    aug,
    sept,
    oct,
    nov,
    dec
};
int main()
{
    enum months m;
    printf("the size of enum months is %lu\n", sizeof(m));
    m = mar;
    printf("%d", m);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    enum months
    {
        Jan,
        feb,
        mar,
        apr,
        may,
        jun,
        july,
        aug,
        sept,
        oct,
        nov,
        dec
    };
    enum months m;
    // for (enum months i = Jan; i <= dec; i++)
    //{
    //     printf("%d\n", i);
    //     }
    // return 0;

    printf("%d\n", Jan * apr);
    printf("%d\n", jun - feb);
    printf("%d\n", dec + july);
}
/*
#include <stdio.h>
enum example
{
    abc = 123,
    cde = 345,
    efg = 567
};
void printings(enum example e1);
int main()
{
    enum example e1;
    printf("enter n\n");
    scanf("%d", &e1);
    printings(e1);
    return 0;
}
void printings(enum example e1)
{
    switch (e1)
    {
    case abc:
        printf("abc");
        break;
    case cde:
        printf("cde");
        break;
    default:
        printf("there is no string");
        break;
    }
}
*/