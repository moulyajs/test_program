/*
#include <stdio.h>
int search(int *, int, int);
int main()
{
    int a[100];
    int n, m;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d", &m);
    if (search(a, n, m))
        printf("element is found");
    else
        printf("element is not found");
    return 0;
}
int search(int *a, int n, int m)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (m == *a++)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
*/

//  RECURSION //
/*
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("the factorial is %d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
*/
/*
#include <stdio.h>
int find_sum(int);
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int result = find_sum(n);
    if (result == -1)
        printf("sum is not possible");
    else
        printf("sum is %d", result);
    return 0;
}
int find_sum(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else
        return n + find_sum(n - 1);
}
*/
/*
#include <stdio.h>
int rem, sum = 0;
int rev_num(int n);
int rev_num(int n)
{
    if (n)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        rev_num(n / 10);
    }
    else
        return sum;
    return sum;
}
int main()
{
    int n, rev;
    printf("enter the value of n:");
    scanf("%d", &n);
    rev = rev_num(n);
    printf("the reversed number is: %d", rev);
}
*/
/*
#include <stdio.h>
int lcm(int num1, int num2);
int main()
{
    int num1 = 8, num2 = 12;

    if (num1 > num2)
        lcm(num2, num1);
    else
        lcm(num1, num2);
    printf("the lcm is %d", lcm(num1, num2));
    return 0;
}
int lcm(int num1, int num2)
{
    int multiple = 0;
    multiple += num2;
    if (multiple % num1 == 0 && multiple % num2 == 0)
        return multiple;
    else
        return lcm(num1, num2);
}
*/
/*
#include <stdio.h>
int powe(int, int);
int main()
{
    int x = 5, y = 2;
    printf("%d to the power %d is %d", x, y, powe(x, y));
    return 0;
}
int powe(int a, int b)
{
    int result = 1;
    if (b == 0)
        return result;
    else
        return result = a * (powe(a, b - 1));
}
*/
