#include "prototypes.h"

error_t countdownTimer(timer *t)
{
    if (setTime(t) != SUCCESS)
    {
        return FATAL_ERROR;
    }
    printf("\n");
    while (1)
    {
        //print time in HH : MM : SS format
        printf("\r%02d : %02d ", t->minute, t->second);
        //clear output buffer in gcc
        fflush(stdout);
        //increase second
        t->second = t->second - 1;

        //update hour, minute and second
        if (t->second == -1)
        {
            t->minute = t->minute - 1;
            t->second = 60;
        }
        if (t->minute == -1)
        {

            printf("\n\nTime's up\n");
            break;
        }

        sleep(1);
    }
    return SUCCESS;
}