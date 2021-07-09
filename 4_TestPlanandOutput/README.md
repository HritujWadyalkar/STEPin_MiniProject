# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HR01     | To test the function which displays digital clock                   |time_t s, struct current_time, int cooldown | SUCCESS | SUCCESS | Technical |
|  HR02      |  To test the function which displays event reminder                      | event e,int numberoftasks | SUCCESS | SUCCESS|Technical |
|  HR03   | To test the function which displays countdown timer                   | timer * t  | SUCCESS | SUCCESS| Technical |



## Low level test plan

| **Test ID** |  **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------------|------------|-------------|----------------|------------------|
| LR01 | To test if the digital clock is displayed and shows the current time| time_t s, struct current_time, int cooldown| SUCCESS| SUCCESS |Technical|
| LR02  | To test if the current date is obtained from the function  |  | ||
|  LR03   | To test if the event is added into the program  | | | |
|   LR04  |To test  if it finds the number of days left| | | ||
|   LR05  |To test if the event pointer and numberoftasks pointer is NULL in finddaysleft function | | | ||
|   LR06  |To test the program finds sorted event using bubblesort| | | ||
|   LR07  |To test if the event pointer and numberoftasks is NULL in bubblesort function| | | ||
|   LR08  |To test the program if the event are printed on screen| | | ||
|   LR09  |To test the program if the event are logged into a text file| | | ||
|   LR10   |To test if setting the time in timer works| timer * t | SUCCESS | SUCCESS | Technical |
| LR11   | To test if the time goes out of bounds (negative and above 60) |           |         |          |
|LR12    | To test if the time pointer passed is NULL to set time function |       |       |        |

