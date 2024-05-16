#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main()
{
    FILE *inputFile = fopen("Flight_Booking.csv", "r");
    FILE *outputFile = fopen("Flight_Details_Sunday.csv", "w");

    if (inputFile == NULL)
    {
        printf("Could not open file Flight_Booking.csv\n");
        return 1;
    }

    if (outputFile == NULL)
    {
        printf("Could not open file Flight_Details_Sunday.csv\n");
        fclose(inputFile);
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    fprintf(outputFile, "num_passengers,trip_type,flight_hour,booking_origin\n");

    if (fgets(line, sizeof(line), inputFile) != NULL)
    {

        while (fgets(line, sizeof(line), inputFile))
        {
            char *token;
            int column = 0;
            int isSunday = 0;
            char num_passengers[MAX_LINE_LENGTH];
            char trip_type[MAX_LINE_LENGTH];
            char flight_hour[MAX_LINE_LENGTH];
            char booking_origin[MAX_LINE_LENGTH];

            token = strtok(line, ",");
            while (token != NULL)
            {

                switch (column)
                {
                case 0:
                    strcpy(num_passengers, token);
                    break;
                case 1:
                    strcpy(trip_type, token);
                    break;
                case 2:
                    strcpy(flight_hour, token);
                    break;
                case 3:
                    if (strcmp(token, "Sun") == 0)
                    {
                        isSunday = 1;
                    }
                    break;
                case 4:
                    strcpy(booking_origin, token);
                    break;
                }
                token = strtok(NULL, ",");
                column++;
            }

            if (isSunday)
            {
                fprintf(outputFile, "%s,%s,%s,%s\n", num_passengers, trip_type, flight_hour, booking_origin);
            }
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Details of bookings with flight_day as 'Sun' have been stored in Flight_Details_Sunday.csv\n");

    return 0;
}
