#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
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
        printf("1.insertfront  2.display 3.deletefront\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter an integer ");
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
                printf("list is already empty\n");
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
        printf("empty list\n");
    }
    else
    {
        NODE *p = head;
        while (p != NULL)
        {
            printf("%d\n", p->info);
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
*/
/*
struct status
{
    unsigned int bin1 : 1;
    unsigned int bin2 : 1;
    unsigned int bin3 : 1;
};
int main()
{
    printf("size of struct is %lu\n", sizeof(struct status));
    return 0;
}
*/
/*
struct
{
    unsigned int age : 3;
} Age;
int main()
{

    Age.age = 4;
    printf("size of Age %d\n", sizeof(Age));
    printf("Age.age %d\n", Age.age);
    Age.age = 7;
    printf("Age.age %d\n", Age.age);
    Age.age = 8;
    printf("Age.age %d\n", Age.age);
    return 0;
}
*/
/*
struct status
{
    unsigned int bin1 : 4;
    unsigned int bin2 : 2;
};
int main()
{
    printf("size of structure %d\n", sizeof(struct status));
    struct status s1;
    s1.bin1 = -7;
    s1.bin2 = 2;
    printf("%d %d", s1.bin1, s1.bin2);
    return 0;
}
*/
/*
struct status
{
    int bin1 : 4;
    unsigned int bin2 : 2;
};
int main()
{
    printf("size of structure %d\n", sizeof(struct status));
    struct status s1;
    s1.bin1 = -7;
    s1.bin2 = 2;
    printf("%d %d", s1.bin1, s1.bin2);
    return 0;
}
*/
int main()
{
    FILE *fp;
    fp = fopen("File.txt", "r");
    printf("value of errno: %d %s\n", errno, strerror(errno));
    perror("Bad code");
    return 0;
}