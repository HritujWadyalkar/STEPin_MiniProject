# Requirements

## Introduction

Reaching your office/school on time, Not being late for the movies, Waking up on time for the meetings and Setting up time for short walks, all these are something that you come across in your daily life. _Multifunctional clock_ plays a huge role in achieving these tasks. Be it on your phone or a digital watch, multifunctional clocks are always an essential part in today's world.


## Research

### Cost and Features:-
 IBM Simon released in 1994 is considered to be the first smartphone to have multifunctional qualities like clock, calendar, email, notepad, address book etc. 
The multifunctional clock app in this project provides multiple features such as Live digital clock, Event Scheduler and a countdown timer. The user can choose any menu options and the feature will be displayed.
|Features | Properties |
|---------------- | -------------- |
|Live digital clock | It displays the current time of your region. |
|Event Scheduler | It allows you to set any event schedules. |
|Countdown timer | It allows your to set a countdown of specific time you need.|

## Defining our system

![Defining system](/1_Requirements/systemdesign.png)

## SWOT Analysis

![Swot Analysis](/1_Requirements/swotanalysis.png)

## 4W&#39;s and 1&#39;H

### Who:-

- Users of any age group can use this.

### What:-

- Some clocks only provide limited features like current time. This project deals with integrating a lot more features along with displaying the current time of the location.

### When:-

- People nowadays prefer multifeature apps rather than one app providing to a specific task. This project aims to tackle that issue

### Where:-

- This problem is faced all over the world.

### How:-

- Users can select their desired feature such as digital clock, scheduler or a timer. The desired feature will be displayed in the menu. Multiple features inside a single app helps people to easily access it rather than having multiple apps for different features.

## Detail requirements

### High Level Requirements:-

| ID   | Description                                                 | Category  | Status |
| ---- | ----------------------------------------------------------- | --------- | ------ |
| HR01 | User can view the startup menu screen                       | Technical | TBD    |
| HR02 | User can choose between three features from the menu screen | Technical | TBD    |
| HR03 | System displays the digital clock                           | Technical | TBD    |
| HR04 | System displays the event scheduler                         | Technical | TBD    |
| HR05 | System displays the countdown timer                         | Technical | TBD    |
| HR06 | User can add an event                                       | Technical | TBD    |
| HR07 | User can set the time for the timer                         | Technical | TBD    |
| HR08 | Data should be stored while closing system (Event Scheduler) | Scenario  | TBD    |

### Low level Requirements:-

| ID   | Description                                                                                                                                                                   | HLR ID     | Status (Implemented/Future) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | --------------------------- |
| LR01 | As the program is run on the command line, the title as well as the options for the different features will be displayed and option to choose a feature will also be provided | HR01, HR02 |              |              
| LR02 | If the user chooses digital clock, a live clock with current time is displayed on the screen | HR03       |                             |
| LR03 | If the user chooses event scheduler, a calendar is displayed along with option to add an event| HR04       |                             |
| LR04 | If the user chooses to enter an event, the user is asked to select a date and add the event along with the event title | HR06 |                             |
| LR04 | The sorted event list according to the time left is displayed| HR04 |                             |
| LR07 | If the user chooses timer, a timer will be displayed along with option to set time  | HR05       |                             |
| LR08 | If the user chooses to set the time, the user has to specify the desired time and the countdown starts | HR07      |                              |
| LR10 | The data from scheduler can be logged into a text file while closing the system  | HR08       |                             |
| LR11 | The user can exit from the menu screen using an option choice| HR02       |                             |
