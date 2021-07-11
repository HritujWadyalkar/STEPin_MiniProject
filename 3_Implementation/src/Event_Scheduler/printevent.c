/**
 * @file printevent.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"
error_t printevent(event *e, int *numberoftasks)
{
    error_t (*subfunptr1)(event *, int *) = logevent;
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    int parser;
    printf("**************************************\n");
    for (parser = 0; parser < *numberoftasks; parser++)
    {
        if (e[parser].dayleft > 0)
        {
            printf("Event: %s \t(Deadline= %d days)\n", e[parser].message, e[parser].dayleft);
        }
        else
        {
            printf("Event: %s \t(Event done)\n", e[parser].message);
        }
    }
    (*subfunptr1)(e, numberoftasks);
    return SUCCESS;
}