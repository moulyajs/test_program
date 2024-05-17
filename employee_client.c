#include <stdio.h>
#include "employee.h"
int main()
{
    employee_t e[100];
    printf("enter the number of employees for which the details has to be entered\n");
    int n, id;
    scanf("%d", &n);
    printf("enter name,id and basic salary of %d employees\n", n);
    scan_details(e, n);
    printf("enter the id of employee whose total salary u want to know\n");
    scanf("%d", &id);
    int tot_salary = calculate_total_salary(e, n, id);
    if (!tot_salary)
    {
        printf("employee doesnot exist\n");
    }
    else
    {
        printf("total salary is %d", tot_salary);
    }

    printf("the employee details entered is as below\n");
    display_details(e, n);
    employee_t e_max = max(e, n);
    printf("employee with maximum salary is %s", e_max.name);
    return 0;
}