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
