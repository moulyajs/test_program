/*
#include <stdio.h>
int main()
{
    int n, pos;
    printf("enter the number");
    scanf("%d", &n);
    printf("enter position");
    scanf("%d", &pos);
    printf("before setting the bit %d\n", n);
    n = n | 1 << pos;
    printf("after setting the bit %d\n", n);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n, pos;
    printf("enter the number");
    scanf("%d", &n);
    printf("enter position");
    scanf("%d", &pos);
    printf("before clearing the bit %d\n", n);
    n = n & ~(1 << pos);
    printf("after clearing the bit %d\n", n);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 20, b = 40;
    (a > b) ? printf("%d", a) : printf("%d", b);
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 100, b = 40;
    char c = 'a';
    printf("the size of a is %d\n", sizeof(a));
    printf("the size of c is %d\n", sizeof(c));
    printf("the size of float is %d\n", sizeof(float));
    printf("the size of double is %d\n", sizeof(double));
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 11;
    b = a++;
    printf("the value of b %d\n", b);
    printf("the value of a %d\n", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 11;
    b = ++a;
    printf("the value of b %d\n", b);
    printf("the value of a %d\n", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 11;
    b = a--;
    printf("the value of b %d\n", b);
    printf("the value of a %d\n", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 11;
    b *= a;
    printf("the value of b %d\n", b);
    printf("the value of a %d\n", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a;
    a = 2 % 5 + (8 / 4) + 20 - 5;
    printf("%d", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 11;
    printf("%d\n", a++ == 12 || a == 12);
    printf("\n%d", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 22;
    if (a < 10)
    {
        printf("good morning\n");
    }
    else if (a < 15)
    {
        printf("good afternoon\n");
    }
    else
    {
        printf("good evening\n");
    }

    printf("end of program");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a,b,c;
    int count = 0;
    printf("enter side a:\n");
    scanf("%d",&a);
    printf("enter side b:\n");
    scanf("%d",&b);
    printf("enter side c:\n");
    scanf("%d",&c);
    if (a==b)
        ++ count;
    if (b==c)
        ++ count;
    if (a==c)
        ++ count;
    if (count == 0 )



}
*/
/*
#include <stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c", &a);
    if (a == 'a' | 'A' | 'e' | 'E' | 'i' | 'I' | 'o' | 'O' | 'u' | 'U')
        printf("the entered word is vowel");
    else
        printf("the entered word is not  vowel");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a % 13 == 0)
        printf("the entered number is divisible by 13");
    else
        printf("the entered number is not divisible by 13");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    if (i > 0)
    {
        printf("the entered number is positive\n");
        if (i % 2 == 0)
            printf("even number");
        else
            printf("odd number");
    }
    else
        printf("the number is negative");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a;
    printf("enter a");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("enter an expression ");
    scanf("%d %c %d", &a, &c, &b);

    switch (c)
    {
    case '+':
        printf("the sum is %d", a + b);
        break;
    case '-':
        printf("subtraction : %d", a - b);
        break;
    case '*':
        printf("the product is %d", a * b);
        break;
    case '/':
        if (b == 0)
            printf("division by zero");
        else
            printf("the quotient is %d", a / b);

        break;
    default:
        printf("invalid operation");
        break;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
*/
// check whether the number is prime or not
/*
#include <stdio.h>
int main()
{
    int i, j, flag = 0;
    printf("enter j:\n");
    scanf("%d", &j);
    if (j == 0 || j == 1)
    {
        flag = 1;
    }

    for (i = 2; i <= j / 2; i++)
    {
        if (j % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number", j);
    }
    else
        printf("%d is a prime number", j);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//rows
    {
        for (j = 1; j <= i; j++)//columns
        {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 1; j <= i; j++) // columns
        {
            printf("%d ", j);
                }
        printf("\n");
    }
}
*/
/*
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//rows
    {
        for (j = 1; j <= i; j++)//columns
        {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
#include <stdio.h>
int func1()
{
    printf("hello");
    return 0;
}
int func2()
{
    printf(" world");
    return 1;
}
int main()
{
    int var = func1() + func2();
    getchar();
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 11;
    printf("%d\n", a++ == 12 || a == 12);
    printf("\n%d", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    printf("%d %d", sizeof(int), sizeof(char));
    return 0;
}
*/
/*
#include <stdio.h>
#include <limits.h>
int main()
{
    printf("max int  of int %d ", INT_MAX);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char n, char_to_search;
    int count = 0;
    printf("enter the character to be searched");
    char_to_search = getchar();
    printf("enter the string from which character is searched:");
    while ((n = getchar()) != EOF)
    {
        if (n == char_to_search)
            count++;
    }
    printf("%c is present %d in the string", char_to_search, count);

    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int nl = 0, nw = 0, nc = 0, inword = 0;
    char ch;
    while ((ch == getchar()) != EOF)
    {
        nc++;
        if (ch == '\n')
            nl++;
        if (inword && (ch == ' ' || ch == '\n' || ch == '\t'))
        {
            nw++;
            inword = 0;
        }
        else if (!(ch == ' ' || ch == '\n' || ch == '\t'))
            inword = 1;
    }
    printf("words = %d\nlines = %d\ncharacters = %d", nw, nl, nc);
    return 0;
}
*/
