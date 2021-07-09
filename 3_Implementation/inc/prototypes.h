
#ifndef __PROTOTYPES_H__
#define __PROTOTYPES_H__

#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

typedef enum error_t
{
    SUCCESS,
    TIME_ERROR,
    NULL_ERROR,
    NUMBER_FORMAT_ERROR,
    OUTOFBOUND_ERROR,
    FATAL_ERROR
} error_t;

typedef struct timer
{
    unsigned int minute;
    unsigned int second;
} timer;

typedef struct event
{
    char message[101];
    int date;
    int month;
    int year;
    int dayleft;
} event, temp2;

error_t digitalClock();
error_t countdownTimer(timer *);
error_t setTime(timer *);
error_t getcurrentdate(int *, int *, int *);
error_t bubblesort(event *, int *);
error_t finddaysleft(event *, int *, int *, int *, int *);
error_t printevent(event *, int *);
error_t logevent(event *, int *);

#endif