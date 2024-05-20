#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("matches.csv", "r");
    char line[500];
    if (fp == NULL)
    {
        printf("error in opening the file");
    }
    else
    {
        int count = 0;
        while (fgets(line, 500, fp) != NULL)
        {
            char *val = strtok(line, ",");
            val = strtok(NULL, ",");
            if (strcmp(val, "2008") == 0)
            {
                count++;
            }
        }
        fclose(fp);
        printf("number of matches in 2008 is %d", count);
    }
    return 0;
}