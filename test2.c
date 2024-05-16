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

    if (fgets(line, sizeof(line), file) != NULL)
    {

        printf("num_passengers,flight_hours,flight_day\n");

        while (fgets(line, sizeof(line), file))
        {
            char *token;
            int column = 0;
            int isOneWay = 0;
            char num_passengers[MAX_LINE_LENGTH];
            char flight_hours[MAX_LINE_LENGTH];
            char flight_day[MAX_LINE_LENGTH];

            token = strtok(line, ",");
            while (token != NULL)
            {

                switch (column)
                {
                case 0:
                    strcpy(num_passengers, token);
                    break;
                case 1:
                    if (strcmp(token, "OneWay") == 0)
                    {
                        isOneWay = 1;
                    }
                    break;
                case 2:
                    strcpy(flight_hours, token);
                    break;
                case 3:
                    strcpy(flight_day, token);
                    break;
                }
                token = strtok(NULL, ",");
                column++;
            }

            if (isOneWay)
            {
                printf("%s,%s,%s\n", num_passengers, flight_hours, flight_day);
            }
        }
    }

    fclose(file);

    return 0;
}
