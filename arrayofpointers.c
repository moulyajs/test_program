
#include <stdio.h>
/*
int main()
{
    int i;
    int a[10] = {12, 4, 56, 78, 34, 56, 8, 5, 74, 78};
    int *p[10];
    p[0] = &a[0];
    p[1] = &a[1];
    p[2] = &a[2];
    for (i = 0; i < 4; i++)
    {
        printf("%p %p\n", p[i], &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d\t", *p[i]);
    }
}
*/
/*
int main()
{
    int a[5] = {3, 4, 5, 6, 7};
    printf("using original array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = &a[i];
    }
    printf("using array of pointers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *p[i]);
    }
    printf("\n");
}
*/
/*
typedef struct sample
{
    int a;
    float b;
} SAMPLE;
int main()
{
    SAMPLE s[] = {{2, 2.2}, {1, 1.1}, {4, 4.4}, {5, 5.5}};
    SAMPLE *sp[1000];
    int n = sizeof(s) / sizeof(*s);
    printf("using arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %f\n", s[i].a, s[i].b);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        sp[i] = &s[i];
    }
    printf("using pointers\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %f\n", sp[i]->a, sp[i]->b);
    }
}
*/
typedef struct sample
{
    int a;
    float b;
} SAMPLE;
void disp(SAMPLE *s, int n);
void disp2(SAMPLE **sp, int n);
void swap(SAMPLE **a, SAMPLE **b);
int main()
{
    SAMPLE s[] = {{2, 2.2}, {1, 1.1}, {4, 4.4}, {5, 5.5}};
    SAMPLE *sp[1000];
    int n = sizeof(s) / sizeof(*s);
    printf("before swap using array of structures\n");
    disp(s, n);
    for (int i = 0; i < n; i++)
    {
        sp[i] = &s[i];
    }
    printf("before swap using array of pointers to structures\n");
    disp2(sp, n);
    swap(&sp[0], &sp[n - 1]);
    printf("after swapping using array of structures\n");
    disp(s, n);
    printf("after swapping using array of pointers to structures\n");
    disp2(sp, n);
    return 0;
}
void disp(SAMPLE *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %f\n", s[i].a, s[i].b);
    }
}
void disp2(SAMPLE **sp, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %f\n", sp[i]->a, sp[i]->b);
    }
}
void swap(SAMPLE **a, SAMPLE **b)
{
    SAMPLE *temp = *a;
    *a = *b;
    *b = temp;
}