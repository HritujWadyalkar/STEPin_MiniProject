# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HR01     | To test the function which displays digital clock                   |time_t s, struct current_time, int cooldown | SUCCESS | SUCCESS | Technical |
|  HR02      |  To test the function which displays event reminder                      | | || |
|  HR03   | To test the function which displays countdown timer| timer * t  | SUCCESS | SUCCESS| Technical |



## Low level test plan

| **Test ID** |  **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------------|------------|-------------|----------------|------------------|
|   LR01   |To test the choice provided in menu screen| | | ||
| LR02   | To test if the choice provided in the event reminder menu works  |  | |||
|  LR03    | To test if the event is added into the program  | | | ||
|   LR04   |To test the event information provided is valid| | | ||
|  LR05    | To test if the event is removed| | | ||
|   LR06   | To test if the eventId entered to remove is valid| | | ||
|   LR07   | To test if the event is updated| | | ||
|   LR08   |To test if the eventId entered to update is valid| | | ||
|   LR09   |To test if setting the time in timer works| timer * t | SUCCESS | SUCCESS | Technical |
|   LR10   |To test if resetting the timer works| | | ||

