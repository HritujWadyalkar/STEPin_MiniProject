#include "prototypes.h"

error_t setTime(timer *t)
{
    if ((t->second < 0 || t->second > 60) || (t->minute < 0 || t->minute > 60))
    {
        return OUTOFBOUND_ERROR;
    }

    if (t == NULL)
    {
        return NULL_ERROR;
    }
    return SUCCESS;
}