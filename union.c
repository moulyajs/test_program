#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/*
union car
{
    char name[10];
    float a;
};
int main()
{
    printf("size of union %d\n", sizeof(union car));
    return 0;
}
*/
/*
union car
{
    char name[10];
    float a;
};
int main()
{
    union car c;
    strcpy(c.name, "john");
    c.a = 7.890;
    printf("name is %s\n", c.name);
    printf("float value is %f\n", c.a); // value of name gets corrupted because float value occupies its place
    return 0;
}
*/
/*
union car
{
    char name[10];
    float a;
};
int main()
{
    union car c;
    strcpy(c.name, "john");

    printf("name is %s\n", c.name);
    c.a = 7.890;
    printf("float value is %f\n", c.a);
    return 0;
}
*/
/*
union A
{
    int x;
    int y;
    int z;
};
struct B
{
    int x;
    int y;
    int z;
};
int main()
{
    printf("%lu\n", offsetof(union A, y));
    printf("%lu\n", offsetof(struct B, y));
    printf("%lu\n", offsetof(struct B, z));
    return 0;
}
*/
struct test
{
    int i;
    union test2
    {
        char a[20];
        float k;
        int j;
    } u;
};
int main()
{
    printf("size of struct %d\n", sizeof(struct test));
    union test2 t2;
    t2.k = 23.56;
    printf("k is %f\n", t2.k);
    struct test t;
    t.u.j = 34;

    printf("j is %d\n", t.u.j);
    t.u.k = 78.9;
    printf("k is %f\n", t.u.k);
    return 0;
}
