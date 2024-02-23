#include <stdio.h>
int main()
{
    int n, i, m = 0;
    printf("enter a number");
    scanf("%d", &n);
    if (n <= 0)
        printf("invalid input");
    else
    {
        for (i = 1; i <= n; ++i)
            m *= i;
    }
    printf("factorial of %d is %d", n, m);
}