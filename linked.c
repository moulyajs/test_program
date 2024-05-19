#include <stdio.h>
#include <stdlib.h>

/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A a1;
    struct A a2;
    a1.a = 100;
    int c = 200;
    a1.b = &c;
    printf("a1 values : %d and %d\n", a1.a, *(a1.b));
    a2 = a1;
    printf("a2 values : %d and %d\n", a2.a, *(a2.b));
    a1.a = 300;
    *(a1.b) = 400;
    printf("a2 values : %d and %d\n", a2.a, *(a2.b));
    printf("a1 values : %d and %d\n", a1.a, *(a1.b));
    struct A *p = &a1;
    printf("a1 values : %d and %d\n", p->a, *(p->b));
    return 0;
}
*/
/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A s;
    s.a = 10;
    s.b = &(s.a);
    printf("%d and %d\n", s.a, *(s.b));
    struct A s1;
    s1.a = 100;
    s1.b = &(s1.a);
    printf("%d and %d\n", s1.a, *(s1.b));
    struct A s2 = s1;
    printf("%p and %p\n", s1.b, s2.b);

    printf("%d and %d\n", s2.a, *(s2.b));
    s2.a = 200;
    printf("%p and %p\n", s1.b, s2.b);
    printf("%d and %d\n", s1.a, *(s1.b));
    printf("%d and %d\n", s2.a, *(s2.b));
    s2.b = &(s2.a);
    *(s2.b) = 400;
    printf("%p and %p\n", s1.b, s2.b);
    printf("%d and %d\n", s1.a, *(s1.b));
    printf("%d and %d\n", s2.a, *(s2.b));
    return 0;
}
*/
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A a1;
    struct A a2;
    a1.a = 100;
    a1.b = (int *)malloc(sizeof(int));
    *(a1.b) = 200;
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    a2 = a1;
    printf("a2 values %d and %d\n", a2.a, *(a2.b));
    free(a2.b);
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    return 0;
}