/**
 * @file logevent.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"
error_t logevent(event *e, int *numberoftasks)
{
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    int parser;
    FILE *filepointer;
    filepointer = fopen("../3_Implementation/log/log.txt", "w");
    if (filepointer == NULL)
    {
        return FILE_NOT_FOUND;
    }
    for (parser = 0; parser < *numberoftasks; parser++)
    {
        if (e[parser].dayleft > 0)
        {
            fprintf(filepointer, "%d/%d\t-   Event: %s  \t\t(Deadline= %d days)\n", e[parser].date, e[parser].month, e[parser].message, e[parser].dayleft);
        }
        else
        {
            fprintf(filepointer, "%d/%d\t-   Event: %s \t\t(Event done)\n", e[parser].date, e[parser].month, e[parser].message);
        }
    }
    fclose(filepointer);
    return SUCCESS;
}