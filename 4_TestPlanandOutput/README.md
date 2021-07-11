# TEST PLAN:-

## High level test plan

| **Test ID** | **Description**                                     | **Exp I/P**                                 | **Exp O/P** | **Actual O/P** | **Type Of Test** |
| ----------- | --------------------------------------------------- | ------------------------------------------- | ----------- | -------------- | ---------------- |
| HR01        | To test the function which displays digital clock   | time_t s, struct current_time, int cooldown | SUCCESS     | SUCCESS        | Technical        |
| HR02        | To test the function which displays event reminder  | event e,int numberoftasks                   | SUCCESS     | SUCCESS        | Technical        |
| HR03        | To test the function which displays countdown timer | timer \* t                                  | SUCCESS     | SUCCESS        | Technical        |

## Low level test plan

| **Test ID** | **Description**                                                                         | **Exp I/P**                                                                  | **Exp O/P**      | **Actual O/P**   | **Type Of Test** |
| ----------- | --------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------- | ---------------- | ---------------- | ---------------- | --------- |
| LR01        | To test if the digital clock is displayed and shows the current time                    | time_t s, struct current_time, int cooldown                                  | SUCCESS          | SUCCESS          | Technical        |
| LR02        | To test if we can get the correct current dates                                         | int currentmonth, int currentDay,int currentyear                             | SUCCESS          | SUCCESS          | Technical        |
| LR03        | To test if it finds the number of days left                                             | event \*, int numberoftasks, int currentmonth,int currentDay,int currentyear | SUCCESS          | SUCCESS          | Technical        |
| LR04        | To test if the event pointer and numberoftasks pointer is NULL in finddaysleft function | event \*, int numberoftasks, int currentmonth,int currentDay,int currentyear | NULL_ERROR       | NULL_ERROR       | Technical        |
| LR05        | To test the program finds sorted event using bubblesort                                 | event \*, int numberoftasks                                                  | SUCCESS          |                  | SUCCESS          | Technical |
| LR06        | To test if the event pointer and numberoftasks is NULL in bubblesort function           | event \*, int numberoftasks                                                  | NULL_ERROR       |                  | NULL_ERROR       | Technical |
| LR07        | To test the program if the event are printed on screen                                  | event \*, int numberoftasks                                                  | SUCCESS          |                  | SUCCESS          | Technical |
| LR08        | To test if the pointers passed to printevent is NULL                                    | event \*, int numberoftasks                                                  | NULL_ERROR       | NULL_ERROR       | Technical        |
| LR09        | To test the program if the event are logged into a text file                            | event \*, int numberoftasks                                                  | SUCCESS          | SUCCESS          | Technical        |
| LR10        | To test if the pointers passed to logevent is NULL                                      | event \*, int numberoftasks                                                  | NULL_ERROR       | NULL_ERROR       | Technical        |
| LR09        | To test if setting the time in timer works                                              | timer \* t                                                                   | SUCCESS          | SUCCESS          | Technical        |
| LR10        | To test if the time goes out of bounds (negative and above 60)                          | timer \* t                                                                   | OUTOFBOUND_ERROR | OUTOFBOUND_ERROR | Technical        |
| LR11        | To test if the time pointer passed is NULL to set time function                         | timer \* t                                                                   | NULL_ERROR       | NULL_ERROR       | Technical        |
