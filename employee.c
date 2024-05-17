#include "employee.h"
#include <stdio.h>
void scan_details(employee_t *e, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", (e + i)->name, &(e + i)->id, &(e + i)->basic_salary);
    }
}
void display_details(const employee_t *e, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s %d %d", (e + i)->name, (e + i)->id, (e + i)->basic_salary);
    }
}
int calculate_total_salary(employee_t *e, int n, int id)
{
    int da, i, hra;
    int t_salary = 0;
    for (i = 0; i < n; i++)
    {
        if ((e + i)->id == id)
        {
            da = 0.8 * (e + i)->basic_salary;
            hra = 0.2 * (e + i)->basic_salary;
            (e + i)->tot_salary = da + hra + (e + i)->basic_salary;
            t_salary = (e + i)->tot_salary;
        }
    }
    return t_salary;
}
employee_t max(employee_t *e, int n)
{
    int i;
    int max = 0;
    employee_t e_max;
    for (i = 0; i < n; i++)
    {
        if ((e + i)->basic_salary > max)
        {
            max = (e + i)->basic_salary;
            e_max = *(e + i);
        }
    }
    return e_max;
}