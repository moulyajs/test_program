
#include <stdio.h>
/*
void bubble_sort(int *p, int n);
void print_array(int *p, int n);
int main(void)
{
    int arr[] = {5, 2, 7, 9, 1, 5};
    int n = 6;
    bubble_sort(arr, n);
    printf("sorted array\n");
    print_array(arr, n);
    return 0;
}
void bubble_sort(int *p, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
void print_array(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
}
*/
/*
typedef struct student
{
    int marks;
    char name[50];
    int id;
    float cgpa;
} STUDENT;
void input_data(STUDENT *s, int n);
void display_data(STUDENT *s, int n);
void sort(STUDENT *s, int n);
int main()
{
    STUDENT s[100];
    int n;
    printf("enter number of students\n");
    scanf("%d", &n);
    input_data(s, n);
    printf("before sorting\n");
    display_data(s, n);
    sort(s, n);
    printf("after sorting\n");
    display_data(s, n);
    return 0;
}
void input_data(STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter id\n");
        scanf("%d", &s[i].id);
        printf("enter name\n");
        scanf("%s", s[i].name);
        printf("enter marks\n");
        scanf("%d", &s[i].marks);
        printf("enter cgpa\n");
        scanf("%f", &s[i].cgpa);
    }
}
void display_data(STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %d %.2f\n", s[i].id, s[i].name, s[i].marks, s[i].cgpa);
    }
}
void sort(STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if ((s[j - 1].id > s[j].id))
            {
                STUDENT t;
                t = s[j - 1];
                s[j - 1] = s[j];
                s[j] = t;
            }
        }
    }
}
*/
/*
typedef struct student
{
    int marks;
    char name[50];
    int id;
    float cgpa;
} STUDENT;
void input_data(STUDENT *s, int n);
void display_data(STUDENT *s, int n);
void sort(STUDENT **sp, int n);
void init_structures_pointers(STUDENT **sp, STUDENT *s, int n);
void display_data_pointers(STUDENT **sp, int n);
int main()
{
    STUDENT s[1000];
    int n;
    printf("enter number of students\n");
    scanf("%d", &n);
    input_data(s, n);
    STUDENT *sp[n];
    init_structures_pointers(sp, s, n);
    sort(sp, n);
    printf("after sorting:using array of structures\n");
    display_data(s, n);
    printf("after sorting:using array of pointers\n");
    display_data_pointers(sp, n);
    return 0;
}
void input_data(STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter id\n");
        scanf("%d", &s[i].id);
        printf("enter name\n");
        scanf("%s", s[i].name);
        printf("enter marks\n");
        scanf("%d", &s[i].marks);
        printf("enter cgpa\n");
        scanf("%f", &s[i].cgpa);
    }
}
void display_data(STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %d %.2f\n", s[i].id, s[i].name, s[i].marks, s[i].cgpa);
    }
}
void sort(STUDENT **sp, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if ((sp[j - 1]->id > sp[j]->id))
            {
                STUDENT *t;
                t = sp[j - 1];
                sp[j - 1] = sp[j];
                sp[j] = t;
            }
        }
    }
}
void init_structures_pointers(STUDENT **sp, STUDENT *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        sp[i] = &s[i];
    }
}
void display_data_pointers(STUDENT **sp, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %d %.2f\n", sp[i]->id, sp[i]->name, sp[i]->marks, sp[i]->cgpa);
    }
}
*/
