/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    // printing the values
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int *A = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    // printing the values
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(A, 2 * n * sizeof(int));
    printf("the old memory address is %p and new memory address is %p", A, B);

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(NULL, n * sizeof(int)); // equals to malloc function
    printf("the old memory address is %p and new memory address is %p", A, B);

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
*/
