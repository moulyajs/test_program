#include <stdio.h>
#include "book.h"
#include "string.h"
void read_details(book_t *b, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter id,title,author,price and year of publication for book %d\n", i + 1);
        scanf("%d %s %s %d %d", &b[i].id, b[i].title, b[i].author, &b[i].price, &b[i].year);
    }
}
void display_details(book_t *b, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        printf("%d %s %s %d %d\n", b[i].id, b[i].title, b[i].author, b[i].price, b[i].year);
    }
}
int fetch_books_year(book_t *b, int n, int year, book_t *b_year)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (b[i].year == year)
        {
            count++;
            b_year[count - 1] = b[i];
        }
    }
    return count;
}
int fetch_books_author(book_t *b, int n, char *author, book_t *b_author)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (!(strcmp(b[i].author, author)))
        {
            count++;
            b_author[count - 1] = b[i];
        }
    }
    return count;
}