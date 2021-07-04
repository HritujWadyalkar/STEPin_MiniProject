/*Commenting and Documentation yet to be done*/

#include "prototypes.h"
#include <time.h>

error_t digitalClock()
{
    time_t seconds;
    struct tm *current_time;

    // time in seconds
    seconds = time(NULL);

    // to get current time
    current_time = localtime(&seconds);
    if (current_time == NULL || current_time != localtime(&seconds))
        return TIMEERROR;
    printf("\n");
    int cooldown = 10;
    while (cooldown--)
    {
        //increase second
        current_time->tm_sec++;
        //update hour, minute and second
        if (current_time->tm_sec == 60)
        {
            current_time->tm_min += 1;
            current_time->tm_sec = 0;
        }
        if (current_time->tm_min == 60)
        {
            current_time->tm_hour += 1;
            current_time->tm_min = 0;
        }
        if (current_time->tm_hour == 24)
        {
            current_time->tm_hour = 0;
            current_time->tm_min = 0;
            current_time->tm_sec = 0;
        }

        // print time in minutes,
        // hours and seconds

        // print time in minutes,

        printf("\r%02d:%02d:%02d",
               current_time->tm_hour,
               current_time->tm_min,
               current_time->tm_sec);
        fflush(stdout);

        sleep(1);
    }

    return SUCCESS;
}
