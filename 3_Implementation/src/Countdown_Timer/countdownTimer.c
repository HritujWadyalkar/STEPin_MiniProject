/**
 * @file countdownTimer.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
        printf("\r%02d : %02d ", t->minute, t->second);
        fflush(stdout);
        t->second = t->second - 1;
        if (t->second == -1)
        {
            t->minute = t->minute - 1;
            t->second = 60;
        }
        if (t->minute == -1)
        {

            printf("\n\n---------Time's up--------\n");
            break;
        }
        sleep(1);
    }
    return SUCCESS;
}