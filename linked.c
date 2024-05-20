#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A a1;
    struct A a2;
    a1.a = 100;
    int c = 200;
    a1.b = &c;
    printf("a1 values : %d and %d\n", a1.a, *(a1.b));
    a2 = a1;
    printf("a2 values : %d and %d\n", a2.a, *(a2.b));
    a1.a = 300;
    *(a1.b) = 400;
    printf("a2 values : %d and %d\n", a2.a, *(a2.b));
    printf("a1 values : %d and %d\n", a1.a, *(a1.b));
    struct A *p = &a1;
    printf("a1 values : %d and %d\n", p->a, *(p->b));
    return 0;
}
*/
/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A s;
    s.a = 10;
    s.b = &(s.a);
    printf("%d and %d\n", s.a, *(s.b));
    struct A s1;
    s1.a = 100;
    s1.b = &(s1.a);
    printf("%d and %d\n", s1.a, *(s1.b));
    struct A s2 = s1;
    printf("%p and %p\n", s1.b, s2.b);

    printf("%d and %d\n", s2.a, *(s2.b));
    s2.a = 200;
    printf("%p and %p\n", s1.b, s2.b);
    printf("%d and %d\n", s1.a, *(s1.b));
    printf("%d and %d\n", s2.a, *(s2.b));
    s2.b = &(s2.a);
    *(s2.b) = 400;
    printf("%p and %p\n", s1.b, s2.b);
    printf("%d and %d\n", s1.a, *(s1.b));
    printf("%d and %d\n", s2.a, *(s2.b));
    return 0;
}
*/
/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A a1;
    struct A a2;
    a1.a = 100;
    a1.b = (int *)malloc(sizeof(int));
    *(a1.b) = 200;
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    a2 = a1;
    printf("a2 values %d and %d\n", a2.a, *(a2.b));
    free(a2.b);
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    return 0;
}
*/
/*
struct A
{
    int a;
    int *b;
};
int main()
{
    struct A a1;
    struct A a2;
    a1.a = 100;
    a1.b = (int *)malloc(sizeof(int));
    *(a1.b) = 200;
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    a2 = a1;
    a2.b = (int *)malloc(sizeof(int));
    printf("a1 values %d and %d\n", a1.a, *(a1.b));
    printf("a2 values %d and %d\n", a2.a, *(a2.b));
    free(a1.b);
    free(a2.b);
}
*/
/*
struct A
{
    int a;
};
struct B
{
    int a;
    struct A a1;
};
int main()
{
    printf("size of A is %d\n", sizeof(struct A));
    printf("size of B is %d\n", sizeof(struct B));
    return 0;
}
*/
/*
struct sample
{
    int a;
    struct sample *p;
};
int main()
{
    printf("size of sample %d\n", sizeof(struct sample));
    struct sample s;
    s.a = 4;
    s.p = &s;
    printf("%d %d %d\n", s.a, s.p->a, s.p->p->a);
}
*/

typedef struct node
{
    int info;
    struct node *next;
} NODE;
NODE *insertfront(NODE *head, int ele);
void display(NODE *head);
NODE *deletefront(NODE *head, int *pele);
NODE *freelist(NODE *head);
int main()
{
    NODE *head = NULL;
    int choice;
    int ele;
    do
    {
        printf("1.insert front 2.display 3.deletefront\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter an integer\n");
            scanf("%d", &ele);
            head = insertfront(head, ele);
            break;
        case 2:
            display(head);
            break;
        case 3:
            if (head != NULL)
            {
                head = deletefront(head, &ele);
                printf("deleted element is %d\n", ele);
            }
            else
            {
                printf("list is already empty\n");
            }
            break;
        }

    } while (choice < 4);
    head = freelist(head);
}
NODE *createnode(int ele)
{
    NODE *newnode = malloc(sizeof(struct node));
    newnode->info = ele;
    newnode->next = NULL;
    return newnode;
}

NODE *insertfront(NODE *head, int ele)
{
    NODE *newnode = createnode(ele);
    newnode->next = head;
    head = newnode;
    return head;
}
void display(NODE *head)
{
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        NODE *p = head;
        while (p != NULL)
        {
            printf("%d", p->info);
            p = p->next;
        }
    }
}
NODE *deletefront(NODE *head, int *pele)
{
    NODE *p = head;
    *pele = head->info;
    head = head->next;
    free(p);
    return head;
}
NODE *freelist(NODE *head)
{
    NODE *p = head;
    while (head != NULL)
    {
        head = head->next;
        printf("freeing %d\n", p->info);
        free(p);
        p = head;
    }
    return head;
}