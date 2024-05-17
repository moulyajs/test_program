typedef struct employee
{
    char name[20];
    int id;
    int basic_salary;
    int tot_salary;
} employee_t;

void scan_details(employee_t *, int);
void display_details(const employee_t *, int);
int calculate_total_salary(employee_t *, int, int);
employee_t max(employee_t *, int);
