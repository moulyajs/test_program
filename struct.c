
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct student
{
    int roll_no;
    char name[20];
    int marks;
};

int main()
{

    struct student s1;
    printf("the roll_no %d\n", s1.roll_no);     // uninitialized variables
    printf("the name %d\n", s1.name);
    printf("the marks %d\n", s1.marks);


     struct student s2 = {12, "ram", 40};       // initialization
     printf("the roll_no %d\n", s2.roll_no);
     printf("the name %s\n", s2.name);
     printf("the marks %d\n", s2.marks);


    struct student s3 = {88, "sitha"};          //partial initialization
    printf("the roll_no %d\n", s3.roll_no);
    printf("the name %s\n", s3.name);
    printf("the marks %d\n", s3.marks);


     struct student s4 = {.name = "abc", .roll_no = 30};     //designated initializers
     struct student s5 = {name : "abc", roll_no : 30};
     printf("%s %d %d\n", s4.name, s4.roll_no, s4.marks);
     printf("%s %d %d\n", s5.name, s5.roll_no, s5.marks);

}
*/
/*
struct test
{
    int i;
    char j;
};
struct test1
{

    char j;
    int i;
};
struct test2
{
    char k;
    char j;
    int i;
};
struct test3
{

    int i;
    char k;
    int j;
};
int main()
{
    printf("size of struct test %lu\n", sizeof(struct test));
    struct test t;
    printf("size of struct test %lu\n", sizeof(t));
    printf("size of struct test1 %lu\n", sizeof(struct test));
    printf("size of struct test2 %lu\n", sizeof(struct test2));
    printf("size of struct test3 %lu\n", sizeof(struct test3));
    return 0;
}
*/
/*
struct testing
{
    int a;
    float b;
    char c;
};

int equals(struct testing s1, struct testing s2);
int main()
{
    struct testing s1 = {44, 4.4, 'A'};
    struct testing s2 = {44, 4.4, 'A'};
    printf("%d\n", equals(s1, s2));
    struct testing s3 = {33, 3.3, 'A'};
    printf("%d\n", equals(s1, s3));
}
int equals(struct testing s1, struct testing s2)
{
    return (s1.a == s2.a && s1.b == s2.b && s1.c == s2.c);
}
*/
/*
struct testing
{
    int a;
    float b;
    char c;
};
int main()
{
    struct testing s1 = {44, 4.4, 'A'};
    struct testing s2 = s1;
    s1.a = 55;
    printf("%d\n", s1.a);
    printf("%d", s2.a);
    return 0;
}
*/
/*
struct player
{
    int id;
    char name[20];
};
void read(struct player p1);
void display(struct player p1);
int main()
{
    struct player p;
    printf("enter id and name\n");
    read(p);
    display(p);
    return 0;
}                               // when you pass a struct to a function, it is passed by value
void read(struct player p1)    // function gets a copy of the struct, not the original.
{              //any changes made to the struct inside the read function will not affect the original struct
    scanf("%d", &p1.id);
    scanf(" %[^\n]s", p1.name);
}
void display(struct player p1)
{
    printf("%d\n", p1.id);
    printf("%s\n", p1.name);
}
*/
/*
struct player
{
    int id;
    char name[20];
};
void read(struct player *p1);
void display(struct player p1);
int main()
{
    struct player p;
    printf("enter id and name\n");
    read(&p);
    display(p);
    return 0;
}
void read(struct player *p1)
{
    scanf("%d", &p1->id);
    scanf(" %[^\n]s", p1->name);
}
void display(struct player p1)
{
    printf("%d\n", p1.id);
    printf("%s\n", p1.name);
}
*/
/*
struct player
{
    int id;
    char name[20];
};
void read(struct player *p1);
void display(const struct player *p1);
int main()
{
    struct player p;
    printf("enter id and name\n");
    read(&p);
    display(&p);
    return 0;
}
void read(struct player *p1)
{
    scanf("%d", &p1->id);
    scanf(" %[^\n]s", p1->name);
}
void display(const struct player *p1)
{
    printf("%d\n", p1->id);
    printf("%s\n", p1->name);
}
*/
/*
struct player
{
    int id;
    char name[20];
};
struct player modify(struct player);
int main()
{
    struct player p1 = {20, "sachin"};
    printf("before changes %s\n", p1.name);
    p1 = modify(p1);
    printf("after changes %s\n", p1.name);
    return 0;
}
struct player modify(struct player p)
{
    strcpy(p.name, "gourav");
    return p;
}
*/
/*
typedef struct player
{
    int id;
    char name[20];
} pl;
int main()
{
    pl p = {7, "john"};
    printf("%s", p.name);
    return 0;
}
*/
/*
struct dob
{
    int date;
    int month;
    int year;
};
struct student
{
    int id;
    char name[20];
    int marks;
    struct dob d1;
};
int main()
{
    struct student s1 = {1, "john", 40, {12, 06, 2005}};
    printf("id= %d,name = %s,marks = %d,dob= %d/%d/%d", s1.id, s1.name, s1.marks, s1.d1.date, s1.d1.month, s1.d1.year);
    return 0;
}
*/
/*
struct Hotel
{
    char name[10];
    int days;
    struct phone
    {
        int mob;
        int alt_num;
    } p;
};
struct Hotel read_details(struct Hotel h1);
void calculate_bill(struct Hotel *h1);
int main()
{
    struct Hotel h, h1;
    h1 = read_details(h);
    calculate_bill(&h1);
    return 0;
}
struct Hotel read_details(struct Hotel h1)
{
    printf("enter name\n");
    scanf(" %[^\n]s", h1.name);
    printf("enter no of days\n");
    scanf("%d", &h1.days);
    printf("enter mob number\n");
    scanf("%d", &h1.p.mob);
    printf("enter alternate number\n");
    scanf("%d", &h1.p.alt_num);
    return h1;
}
void calculate_bill(struct Hotel *h1)
{
    int room_charges = 2000;
    int tax = 8.5;
    printf("no of days %d\n", h1->days);
    float amount = h1->days * room_charges;
    float total = amount + (amount * (8.5 / 100));
    printf("amount is %f\n", total);
    printf("visit again.thank you");
}
*/
/*
struct book
{
    int number;
};
int main()
{
    int n, i;
    struct book r[10];
    printf("how many books u want to store\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)             //without initialization
    {
        printf("the book number is\n", r[i].number);
        }
    return 0;
}
*/
/*
struct book
{
    int number;
};
int main()
{
    int n, i;
    struct book r[10];
    printf("how many books u want to store\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) // after initialization
    {
        fflush(stdin);
        scanf("%d", &r[i].number);
    }
    for (i = 0; i < n; i++)
    {
        printf("the book number is %d\n", r[i].number);
    }
    return 0;
}
*/
/*
struct student
{
    int roll_no;
    char name[20];
    int marks;
};
int main()
{
    struct student s[100];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d %s %d", &s[i].roll_no, s[i].name, &s[i].marks);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %d\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    return 0;
}
*/
/*
struct student
{
    int id;
    char name[20];
    int marks;
} S[3];
int main()
{
    struct student ST[] = {{1, "john", 45}, {2, "gill", 78}, {3, "hi", 34}};
    struct student *ptr = ST;
    printf("\n%d\n", ptr->id);
    printf("%d\t%s\t%d\n", ptr->id, (ptr + 1)->name, (ptr + 2)->marks);
    ptr++;
    printf("\n%d\n", ptr->id);

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", (ptr + i)->id);
        printf("%s\t", (ptr + i)->name);
        printf("%d\n", (ptr + i)->marks);
    }

    return 0;
}
*/