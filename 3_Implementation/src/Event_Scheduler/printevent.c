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
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    int parser;
    for (parser = 0; parser < *numberoftasks; parser++)
    {
        if (e[parser].dayleft > 0)
        {
            printf("\nEvent: %s \t(Deadline= %d days)\n", e[parser].message, e[parser].dayleft);
        }
        else
        {
            printf("\nEvent: %s \t(Event done)\n", e[parser].message);
        }
    }
    logevent(e, numberoftasks);
    return SUCCESS;
}