/**
 * @file bubblesort.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"
error_t bubblesort(event *e, int *numberoftasks)
{
    if (NULL == e || NULL == numberoftasks)
        return NULL_ERROR;
    int parser1, parser2;
    event temp;
    for (parser1 = 0; parser1 <= (*numberoftasks - 1); parser1++)
    {
        for (parser2 = 1; parser2 <= (*numberoftasks - 1 - parser1); parser2++)
        {
            if (e[parser2].dayleft < e[parser2 - 1].dayleft)
            {
                temp = e[parser2];
                e[parser2] = e[parser2 - 1];
                e[parser2 - 1] = temp;
            }
        }
    }
    return SUCCESS;
}