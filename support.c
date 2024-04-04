#include <stdio.h>
#include "storage.c"
int x = 10;
extern void display();
int main()
{
    display();
    return 0;
}