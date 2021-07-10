/**
 * @file getcurrentdate.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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