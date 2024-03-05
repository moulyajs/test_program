/*
#include <stdio.h>
int main()
{
    int a[10] = {12, 45, 64, 34, 67, 87, 34, 5, 45, 12};
    printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{

    int n;
    int a[n];
    int i;
    printf("enter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the elements:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d %d %d", a, p, *p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n", p);
    printf("%p", (int *)p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int i;
    int a[] = {13, 45, 55, 42};
    for (i = 0; i < (sizeof(a)) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", (char *)p + 1);
    printf("%p\n", p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 5, 6, 77, 76};
    int *p = a;
    //a[0] = 200;
    p[0] = 250;
    printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 44, 23, 34, 56};
    int *p = a;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 44, 23, 34, 56};
    int *p = a;
    int i;
    for (i = 0; i < (sizeof(a)) / sizeof(a[0]); i++)
    {
        printf("%d\t", *p++);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 56, 43, 32};
    int sum = 0;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
        sum += a[i];

    printf("sum of array is %d", sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int *p = a;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++, ++p)
    {
        printf("%d\n", *(p + i));
        printf("%d\n", *p);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%p\n", (int *)p + 1);
    printf("%p\n", (char *)p + 1);
    printf("%p\n", (float *)p + 1);
    printf("%p\n", (double *)p + 1);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    printf("%lu %lu %lu", sizeof(int *), sizeof(char *), sizeof(double *));
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {12, 34, 5, 66};
    int *p = a;
    // a[0] = 23;
    // p[0] = 345;
    // a++; //error: a is a constant pointer
    p++;
    printf("%d\n", *p);
    // printf("%d %d", a[0], a[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int product(int a, int b); // declaring the function
int main()
{
    int a = 3;
    int b = 2;
    printf("the product is %d", product(a, b)); // calling the function
    return 0;
}
int product(int a, int b) // defining the function
{
    // int a = 14;
    // int b = 23;
    int c;
    c = a * b;
    return (c);
    // printf("the product is %d\n", c);
}
*/
/*
#include <stdio.h>
int main()
{
    int a[] = {34, 56, 223, 12};
    int *p = a;
    int *p1 = &a[2];
    printf("%d", p1 - p);
    return 0;
}
*/
/*
#include <stdio.h>
int product(int *ptr1, int *ptr2);
int main()
{

    int main()
    {
        int a = 3;
        int b = 2;
        printf("the product is %d", product(&a, &b)); // calling the function
        return 0;
    }
    int product(int *ptr1, int *ptr2) // defining the function
    {
        // int a = 14;
        // int b = 23;
        int c;
        c = (*ptr1) * (*ptr2);
        return (c);
        // printf("the product is %d\n", c);
    }
}
*/
/*
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4;
    int b = 5;
    int result;
    result = sum(a, b);
    printf("%d", result);
    return 0;
}
int sum(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
*/

// five numbers from user and store it in array and display
/*
#include <stdio.h>
int main()
{
    int a[5] = {};
    int i, j;
    printf("enter 5 numbers\n");
    for (i = 1; i <= 5; i++)
        scanf("%d", &a[i]);
    for (j = 1; j <= 5; j++)
        printf("%d\t", a[j]);
    return 0;
}
*/
// find the average of elements in an array
/*
#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    int i;
    int sum = 0;
    float average = 0.0;
    for (i = 0; i < 3; i++)
        sum += a[i];
    average = (float)sum / 3;
    printf("%.2f", average);
    return 0;
}
*/
/*
#include <stdio.h>
int square(int a);
int main()

{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    int result = square(n);
    printf("%d", result);
    return 0;
}
int square(int a)
{
    int c;
    c = a * a;
    return c;
}
*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    float sum = 0;
    int n, i, j;
    printf("enter the number of elements");
    scanf("%d", &n);
    int square = 0;
    for (i = 0; i <= n; i++)

        square = i * i;
    for (j = 0; j <= n; j++)
        sum += 1 / square;

    printf("%d", sum);
    return 0;
}
*/
// MULTI DIMENSIONAL ARRAYS
/*
#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], sum[100][100];
    int r, c, i, j;
    printf("enter the number of rows\n ");
    scanf("%d", &r);
    printf("rnter the number of columns\n");
    scanf("%d", &c);
    printf("enter the elements in the matrix1\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements in the matrix2\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];


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
    int m1[10][10],m2[10][10],product[10][10];
}
*/
/*
#include <stdio.h>
int main()
{
    int row, col;
    int i, j;

    scanf("%d%d", &row, &col);

    int matrix[row][col];
    int(*p)[col];
    p = matrix;

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", (*(p + i) + j));

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
void input(int[], int);
void output(int[], int);
int main()
{
    int a[100], n;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    input(a, n);
    output(a, n);
    return 0;
}
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements\n");
        scanf("%d", &a[i]);
    }
}
void output(int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n entered elements are:");
        printf("%d", b[i]);
    }
}
*/
/*
#include <stdio.h>
void input(int[], int);
void output(int[], int);
int main()
{
    int a[100], n;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    printf("the size of array in main %lu:\n", sizeof(a));
    input(a, n);
    output(a, n);
    return 0;
}
void input(int a[], int n)
{
    printf("the size of array in main %lu:\n", sizeof(a));
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements\n");
        scanf("%d", &a[i]);
    }
}
void output(int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n entered elements are:");
        printf("%d", b[i]);
    }
}
*/