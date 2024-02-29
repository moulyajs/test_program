/*
#include <stdio.h>
int main()
{
    int a[10] = {12, 45, 64, 34, 67, 87, 34, 5, 45, 12};
    printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{

    int n;
    int a[n];
    int i;
    printf("enter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the elements:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d %d %d", a, p, *p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n", p);
    printf("%p", (int *)p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int i;
    int a[] = {13, 45, 55, 42};
    for (i = 0; i < (sizeof(a)) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", (char *)p + 1);
    printf("%p\n", p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 5, 6, 77, 76};
    int *p = a;
    //a[0] = 200;
    p[0] = 250;
    printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 44, 23, 34, 56};
    int *p = a;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 44, 23, 34, 56};
    int *p = a;
    int i;
    for (i = 0; i < (sizeof(a)) / sizeof(a[0]); i++)
    {
        printf("%d\t", *p++);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 56, 43, 32};
    int sum = 0;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
        sum += a[i];

    printf("sum of array is %d", sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int *p = a;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++, ++p)
    {
        printf("%d\n", *(p + i));
        printf("%d\n", *p);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%p\n", (int *)p + 1);
    printf("%p\n", (char *)p + 1);
    printf("%p\n", (float *)p + 1);
    printf("%p\n", (double *)p + 1);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    printf("%lu %lu %lu", sizeof(int *), sizeof(char *), sizeof(double *));
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 5, 66};
    int *p = a;
    // a[0] = 23;
    // p[0] = 345;
    // a++; //error: a is a constant pointer
    p++;
    printf("%d\n", *p);
    // printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int product(int a, int b); // declaring the function
int main()
{
    int a = 3;
    int b = 2;
    printf("the product is %d", product(a, b)); // calling the function
    return 0;
}
int product(int a, int b) // defining the function
{
    // int a = 14;
    // int b = 23;
    int c;
    c = a * b;
    return (c);
    // printf("the product is %d\n", c);
}
*/