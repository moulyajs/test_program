#include <stdio.h>
#include "book.h"
int main()
{
    book_t b[100];
    book_t b_year[100];
    book_t b_author[100];
    printf("how many books details u want to enter\n");
    int n;
    scanf("%d", &n);
    printf("enter details of %d books\n", n);
    read_details(b, n);
    int count;
    printf("enter year of publication to find list of books in that year\n");
    int year;
    scanf("%d", &year);
    count = fetch_books_year(b, n, year, b_year);
    if (count)
    {
        printf("list of books with %d year of publication\n", year);
        display_details(b_year, count);
    }
    else
    {
        printf("books published in %d is not available in dataset\n", year);
    }
    printf("\n");
    printf("enter author name to find list of books by that author\n");
    char author[100];
    scanf("%s", author);
    count = fetch_books_author(b, n, author, b_author);
    if (count)
    {
        printf("list of books by %s\n", author);
        display_details(b_author, count);
    }
    else
    {
        printf("books published in %s is not available in dataset\n", author);
    }

    return 0;
}