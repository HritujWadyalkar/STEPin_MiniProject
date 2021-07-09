#include "prototypes.h"
error_t bubblesort(event *e, int *numberoftasks)
{
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    temp t;
    for (int i = 0; i < *numberoftasks - 1; i++)
        for (int j = 0; j < *numberoftasks - i - 1; j++)
        {
            if (e[j].dayleft > e[j + 1].dayleft)
            {
                t = e[j];
                e[j] = e[j + 1];
                e[j + 1] = t;
            }
        }
    return SUCCESS;
}