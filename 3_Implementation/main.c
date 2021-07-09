/**
 * @file main.c
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "prototypes.h"
#include "stdio.h"

int main()
{
    int choice;

revisit:
    printf("\n******************************\n");
    printf("1.Digital Clock\n");
    printf("2.Countdown Timer\n");
    printf("3.Event Scheduler\n");
    printf("4.Exit\n");
    printf("Which option do you want to choose (1/2/3/4) : ");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
    {
        printf("\n-Digital Clock-");
        digitalClock();
        goto revisit;
    }
    case 2:
    {
        printf("\n-Countdown Timer-");
        timer *t = NULL;
        t = (timer *)malloc(sizeof(timer));
        printf("\nEnter the minutes (maximum: 60 min) = ");
        scanf("%d", &t->minute);
        printf("Enter the seconds (maximum: 60 sec) = ");
        scanf("%d", &t->second);
        countdownTimer(t);
        free(t);
        goto revisit;
    }
    case 3:
    {
        printf("\n-Event Scheduler-");
        event *e;
        int currentDay, currentmonth, currentyear;
        getcurrentdate(&currentDay, &currentmonth, &currentyear);
        int i, numberoftasks;
        printf("\nEnter number of tasks: ");
        scanf("%d", &numberoftasks);
        e = (event *)malloc(numberoftasks * sizeof(event));
        char buffer;
        for (i = 0; i < numberoftasks; i++)
        {
            printf("\nEnter the date & month (DD-MM)(%d):\n", currentyear);
            scanf("%2d %2d", &e[i].date, &e[i].month);
            scanf("%c", &buffer);
            printf("Enter event message:\n");
            scanf("%100[^\n]", e[i].message);
        }
        finddaysleft(e, &numberoftasks, &currentmonth, &currentDay, &currentyear);
        bubblesort(e, &numberoftasks);
        printevent(e, &numberoftasks);
        free(e);
        goto revisit;
    }
    case 4:
    {
        break;
    }
    default:
    {
        printf("Invalid option, Please re-enter the correct option");
        goto revisit;
    }
    }
    return 0;
}