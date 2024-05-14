
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
