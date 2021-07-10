/**
 * @file finddaysleft.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"
error_t finddaysleft(event *e, int *numberoftasks, int *currentmonth, int *currentDay, int *currentyear)
{
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    int parser;
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Leap year
    if ((*currentyear % 4 == 0 && *currentyear % 100 != 0) || (*currentyear % 400 == 0))
    {
        *(monthDays + 1) = *(monthDays + 1) + 1;
    }

    for (parser = 1; parser < 12; parser++)
    {
        *(monthDays + parser) += *(monthDays + (parser - 1));
    }

    for (parser = 0; parser < *numberoftasks; parser++)
    {

        e[parser].dayleft = (*(monthDays + (e[parser].month - 1)) - *(monthDays + (*currentmonth - 1))) + (e[parser].date - 1) - (*currentDay - 1);
    }
    return SUCCESS;
}