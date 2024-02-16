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