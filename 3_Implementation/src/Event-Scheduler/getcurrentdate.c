#include "prototypes.h"

error_t getcurrentdate(int *currentDay, int *currentmonth, int *currentyear)
{
    time_t seconds = time(NULL);
    struct tm *now = localtime(&seconds);
    *currentDay = now->tm_mday;
    *currentmonth = now->tm_mon + 1;
    *currentyear = now->tm_year + 1900;
    return SUCCESS;
}