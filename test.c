#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main()
{
    FILE *file = fopen("Flight_Booking.csv", "r");
    if (file == NULL)
    {
        printf("Could not open file Flight_Booking.csv\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    int count = 0;

    if (fgets(line, sizeof(line), file) != NULL)
    {

        while (fgets(line, sizeof(line), file))
        {
            char *token;
            int column = 0;
            int isOriginIndia = 0;

            token = strtok(line, ",");
            while (token != NULL)
            {

                if (column == 4)
                {
                    if (strcmp(token, "India") == 0)
                    {
                        isOriginIndia = 1;
                    }
                    break;
                }
                token = strtok(NULL, ",");
                column++;
            }

            if (isOriginIndia)
            {
                count++;
            }
        }
    }

    fclose(file);

    printf("Number of bookings with India as origin: %d\n", count);

    return 0;
}