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
    int parser;
    FILE *filepointer;
    filepointer = fopen("log.txt", "w");
    if (filepointer == NULL)
    {
        printf("Error! File not found");
        exit(1);
    }
    for (parser = 0; parser < *numberoftasks; parser++)
    {
        if (e[parser].dayleft > 0)
        {
            fprintf(filepointer, "%d/%d\t-   Event: %s  \t\t(Deadline= %d days)\n", e[parser].date, e[parser].month, e[parser].message, e[parser].dayleft);
        }
        else
        {
            fprintf(filepointer, "Event: %s \t\t(Event done)\n", e[parser].message);
        }
    }
    fclose(filepointer);
    return SUCCESS;
}