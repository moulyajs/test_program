#include <stdio.h>
struct info
{
    int id;
    char name[30];
    int age;
    int tax;
    int income;
};
void read(struct info *s, int n);
void calculate_tax(struct info *s, int n);
int main()
{
    int n;
    struct info s[100];
    printf("enter the number of entries\n");
    scanf("%d", &n);
    read(s, n);
    calculate_tax(s, n);
    return 0;
}
void read(struct info *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter id\n");
        scanf("%d", &s[i].id);
        printf("enter name\n");
        scanf("%s", s[i].name);
        printf("enter age\n");
        scanf("%d", &s[i].age);
        printf("enter tax\n");
        scanf("%d", &s[i].tax);
        printf("enter income\n");
        scanf("%d", &s[i].income);
    }
}
void calculate_tax(struct info *s, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (s[j].income < 500000)
        {
            s[j].tax = 0.8 * s[j].tax;
        }
        printf("%s should pay tax of %d\n", s[j].name, s[j].tax);
    }
}
