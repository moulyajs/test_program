#include <stdio.h>
struct car
{
    char company[20];
    char model[30];
    int year;
};
void display_year(struct car *arr_car, int n);
void read(struct car *arr_car, int n);
void display(struct car *arr_car, int n);
int main()
{
    struct car arr_car[100];
    int n;
    printf("how many car details u want to store\n");
    scanf("%d", &n);
    read(arr_car, n);
    display(arr_car, n);
    display_year(arr_car, n);
    return 0;
}
void display_year(struct car *arr_car, int n)
{
    int yy;
    printf("enter year to display car details\n");
    scanf("%d", &yy);
    for (int i = 0; i < n; i++)
    {
        if (arr_car[i].year == yy)
        {
            printf("company:%s\n", arr_car[i].company);
            printf("model:%s\n", arr_car[i].model);
        }
    }
}
void read(struct car *arr_car, int n)
{
    printf("enter car details:company name,model,year\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr_car[i].company);
        scanf("%s", arr_car[i].model);
        scanf("%d", &arr_car[i].year);
    }
}
void display(struct car *arr_car, int n)
{
    printf("car details:company name,model,year\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr_car[i].company);
        printf("%s\n", arr_car[i].model);
        printf("%d\n", arr_car[i].year);
        printf("\n");
    }
}