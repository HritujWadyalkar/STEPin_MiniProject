/**
 * @file prototypes.h
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PROTOTYPES_H__
#define __PROTOTYPES_H__

#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * @brief Error values for unit testing
 * 
 */
typedef enum error_t
{
    SUCCESS,
    TIME_ERROR,
    NULL_ERROR,
    NUMBER_FORMAT_ERROR,
    OUTOFBOUND_ERROR,
    FATAL_ERROR,
    FILE_NOT_FOUND
} error_t;

/**
 * @brief Structure containing the time for countdown
 * 
 */
typedef struct timer
{
    unsigned int minute;
    unsigned int second;
} timer;

/**
 * @brief Structure containing the event information
 * 
 */
typedef struct event
{
    char message[101];
    int date;
    int month;
    int year;
    int dayleft;
} event;

/**
 * @brief Displays a live clock with current time
 * 
 * @return error_t 
 */
error_t digitalClock();

/**
 * @brief Displays the countdown timer from the specified time
 * @param[in] timer* Pointer to the timer structure
 * @return error_t 
 */
error_t countdownTimer(timer *);

/**
 * @brief Set the Time object
 * @param[in] timer* Pointer to the timer structure
 * @return error_t 
 */
error_t setTime(timer *);

/**
 * @brief Gets the current date 
 * @param[out] int* Pointer to the current date value
 * @param[out] int* Pointer to the current month value
 * @param[out] int* Pointer to the current year value
 * @return error_t 
 */
error_t getcurrentdate(int *, int *, int *);

/**
 * @brief Sorting the structure according to days left
 * @param[in] event* Pointer to the event structure
 * @param[in] int* Pointer to the number of tasks defined by user
 * @return error_t 
 */
error_t bubblesort(event *, int *);

/**
 * @brief Finding the number of days left from the current date
 * @param[in] event* Pointer to the event structure
 * @param[in] int* Pointer to the number of tasks defined by user
 * @param[in] int* Pointer to the current month value
 * @param[in] int* Pointer to the current day value
 * @param[in] int* Pointer to the current year value
 * @return error_t 
 */
error_t finddaysleft(event *, int *, int *, int *, int *);

/**
 * @brief Printing the list of events
 * @param[in] event* Pointer to the event structure
 * @param[in] int* Pointer to the number of tasks defined by user
 * @return error_t 
 */
error_t printevent(event *, int *);

/**
 * @brief Logging the event data in a text file (log.txt)
 * @param[in] event* Pointer to the event structure
 * @param[in] int* Pointer to the number of tasks defined by user
 * @return error_t 
 */
error_t logevent(event *, int *);

#endif