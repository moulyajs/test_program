/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x, n, i;
    printf("rnter the n:");
    scanf("%d", &n);
    x = (int *)malloc(n * sizeof(int));
    if (x == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter values:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }
        printf("the entered values are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(x + i));
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x, n, i;
    printf("rnter the n:");
    scanf("%d", &n);
    x = (int *)calloc(n, sizeof(int));
    if (x == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter values:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }
        printf("the entered values are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(x + i));
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x, n, i;
    printf("rnter the n:");
    scanf("%d", &n);
    x = (int *)malloc(n* sizeof(int));
    if (x == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("initial address %p\n", x);
        printf("enter values:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }
        printf("the entered values are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(x + i));
        }
    }
    int ns;
    printf("rnter the new sizes:");
    scanf("%d", &ns);
    x = (int *)realloc(x, ns * sizeof(int));
    if (x == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("new address %p\n", x);
        printf("the entered values are:\n");
        for (i = 0; i < ns; i++)
        {
            printf("%d\n", *(x + i));
        }
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x;
    x = (int *)malloc(sizeof(int));
    *x = 10;
    printf("x= %p\n", x);
    printf("x is pointing to %d\n", *x);
    free(x);
    printf("the pointer is freed successfully\n");
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1 = (int *)calloc(5, sizeof(int));
    printf("before %p\n", p1);
    printf("enter the elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p1[i]);
    }
    int *p2 = (int *)realloc(p1, 1000 * sizeof(int));
    printf("after increasing size %p\n", p2);
    printf("content at p2 %d\n", *p2);
    printf("after realloc %p\n", p1);
    printf("content at p1 %d", *p1);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1 = (int *)malloc(sizeof(int));
    *p1 = 100;
    printf("%d\n", *p1);
    int *p2 = p1;
    printf("%d\n", *p2);
    free(p1);
    p1 = NULL;
    p2 = NULL;
    //printf("%d\n", *p1); //guaranteed crash
    //printf("%d\n", *p2); //guaranteed crash
}
*/
