/*
#include <stdio.h>
int main()
{
    int i;
    char a[20];
    printf("enter a string\n");
    scanf("%s", a);
    int is_digit = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            is_digit = 1;
            int num = a[i] - '0';
            printf("%d\n", num * num);
        }
        i++;
    }
    if (!is_digit)
    {
        printf("digits not found");
    }
    return 0;
}
*/
/*
#include <stdio.h>
struct restaurant
{
    int food_id;
    char food_name[25];
    char customer_name[25];
    float price;
};
void read(struct restaurant a[], int n);
void display(struct restaurant a[], int n);
void sort(struct restaurant a[], int n);

int main()
{
    int n;
    struct restaurant a[20];
    printf("enter n\n");
    scanf("%d", &n);
    read(a, n);
    printf("before sorting\n");
    display(a, n);
    printf("after sorting\n");
    sort(a, n);
    display(a, n);
    return 0;
}
void read(struct restaurant a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].food_id);
        scanf("%s", a[i].food_name);
        scanf("%s", a[i].customer_name);
        scanf("%f", &a[i].price);
    }
}
void display(struct restaurant a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i].food_id);
        printf("%s\t", a[i].food_name);
        printf("%s\t", a[i].customer_name);
        printf("%f\t", a[i].price);
    }
}
void sort(struct restaurant a[], int n)
{
    struct restaurant t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].food_id > a[j + 1].food_id)
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
}
*/
/*
#include <stdio.h>
struct restaurant
{
    int food_id;
    char food_name[25];
    char customer_name[25];
    float price;
};
void read(struct restaurant a[], int n);
void binary(struct restaurant a[], int left, int right, int n);

int main()
{
    int n;
    struct restaurant a[20];
    printf("enter n\n");
    scanf("%d", &n);
    read(a, n);
    int id;
    printf("enter id to be searched\n");
    scanf("%d", &id);
    binary(a, 0, n - 1, id);
    return 0;
}
void read(struct restaurant a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].food_id);
        scanf("%s", a[i].food_name);
        scanf("%s", a[i].customer_name);
        scanf("%f", &a[i].price);
    }
}
void binary(struct restaurant a[], int left, int right, int id)

{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (id == a[mid].food_id)
        {
            printf("%d\t", a[mid].food_id);
            printf("%s\t", a[mid].food_name);
            printf("%s\t", a[mid].customer_name);
            printf("%f\t", a[mid].price);
        }

        if (id > a[mid].food_id)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        }
}
*/
/*
#include <stdio.h>
int main()
{
    FILE *fp = fopen("read.txt", "w");
    fprintf(fp, "%s", "hello everyone");
    fclose(fp);
}
*/
#include <stdio.h>
int main()
{
    FILE *fp = fopen("read.txt", "w");
    char ch = getc(fp);
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    printf("data written successfully\n");
    fclose(fp);
    return 0;
}