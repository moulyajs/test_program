#include <stdio.h>
/*
int main()
{
    FILE *fp;
    fp = fopen("sample.txt", "w");
    fprintf(fp, "%s", "hello everyone");
    fclose(fp);
    return 0;
}
*/
/*
int main()
{
    char ch;
    FILE *fp;
    if (fp = fopen("test.c", "r"))
    {
        ch = getc(fp);
        while (ch != EOF)
        {
            putc(ch, stdout);
            ch = getc(fp);
        }
        fclose(fp);
    }
    return 0;
}
*/
/*
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("codes.txt", "w");
    if (fp == NULL)
    {
        printf("cant open the file\n");
    }
    else
    {
        while ((ch = getchar()) != EOF)
        {
            fputc(ch, fp);
        }
        printf("data written successfully\n");
    }
    fclose(fp);
}
*/
/*
int main()
{
    FILE *fp;
    fp = fopen("codes.txt", "w+");
    fputs("this is c programming\n", fp);
    fputs("this is a system programming language.", fp);
    fclose(fp);
    return 0;
}
*/
/*
int main()
{
    char buf[15];
    fgets(buf, 15, stdin);
    printf("string is %s", buf);
    return 0;
}
*/
/*
int main()
{
    FILE *fp = fopen("codes.txt", "r");
    printf("%ld", ftell(fp));
    char string[20];
    fscanf(fp, "%s", string);
    printf("%ld", ftell(fp));
    return 0;
}
*/
/*
int main()
{
    char str[] = "Hello all";
    FILE *fp;
    char ch;
    fp = fopen("hi.txt", "w");
    fputs(str, fp);
    fclose(fp);
    fp = fopen("hi.txt", "r");
    printf("%d", ftell(fp));
    ch = fgetc(fp);
    printf("%c", ch);
    rewind(fp);
    printf("%d", ftell(fp));
    fclose(fp);
    return 0;
}
*/
void read(int *a, int n, FILE *fp);
int find_sum(int *a, int n);
int main()
{
    FILE *fp1 = fopen("formatted_data.txt", "w");
    FILE *fp2 = fopen("formatted_out.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
        printf("issue in opening file\n");
    else
    {
        int a[500];
        int n = 5;
        read(a, n, fp1);
        int sum = find_sum(a, n);
        fprintf(fp2, "sum is %d", sum);
    }
    return 0;
}
void read(int *a, int n, FILE *fp)
{
    int i;
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", a + i);
    }
}
int find_sum(int *a, int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }
    return sum;
}