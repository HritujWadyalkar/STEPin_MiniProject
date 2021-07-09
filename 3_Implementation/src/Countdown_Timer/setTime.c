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