/*
#include <stdio.h>
int main()
{
    auto int a = 10;
    {
        auto int a;
        printf("%d\n", a); // garbage value
    }
    printf("%d", a);
    return 0;
}
*/
/*
#include <stdio.h>
int f1();
int i = 50;
int j = 80;
int main()
{
    printf("%d\n", i);
    int i = 35;
    printf("%d\n", i);
    printf("%d\n", j);
    f1();
    printf("%d\n", i);
    return 0;
}
int f1()
{
    int i = 40;
}
*/
/*
#include <stdio.h>
int f1();
int main()
{
    int a = 10;
    auto float b = 4.5;
    printf("%d\n", a);
    printf("%f", b);
    f1();
    return 0;
}
int f1()
{
    float b;
    printf("%f", b);
}
*/
/*
#include <stdio.h>
void display();
void display()
{
    extern int x;
    printf("hello from support file\n");
    printf("%d", x);
}
*/
