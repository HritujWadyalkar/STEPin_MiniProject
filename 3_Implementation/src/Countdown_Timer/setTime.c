/**
 * @file setTime.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"

error_t setTime(timer *t)
{
    if (NULL == t)
    {
        return NULL_ERROR;
    }

    if ((t->second < 0 || t->second > 60) || (t->minute < 0 || t->minute > 60))
    {
        return OUTOFBOUND_ERROR;
    }

    return SUCCESS;
}