# Requirements

## Introduction

Reaching your office/school on time, Not being late for the movies, Waking up on time for the meetings and Setting up time for short walks, all these are something that you come across in your daily life. _Multifunctional clock_ plays a huge role in achieving these tasks. Be it on your phone or a digital watch, multifunctional clocks are always an essential part in today's world.

## Objectives of the project

- To define the requirements, design and testplan of the project.
- To work on implementing and building a multifunctional clock app.
- To follow clean code practices and code quality.
- To make use of different tools for testing and documentation.

## Research

### Cost and Features:-

The clock app provides multiple features such as Live digital clock, Event reminder and a countdown timer. The user can choose any menu options and the feature will be displayed.
|Features | Properties |
|---------------- | -------------- |
|Live digital clock | It displays the current time of your region. |
|Event reminder | It allows you to set any event reminders. |
|Countdown timer | It allows your to set a countdown of specific time you need.|

## Defining our system

![Defining our system](/1_Requirements/systemdesign.png)

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

- Users can select their desired feature such as digital clock, reminder or a timer. The desired feature will be displayed in the menu. Multiple features inside a single app helps people to easily access it rather than having multiple apps for different features.

## Detail requirements

### High Level Requirements:-

| ID   | Description                                                 | Category  | Status |
| ---- | ----------------------------------------------------------- | --------- | ------ |
| HR01 | User can view the startup menu screen                       | Technical | TBD    |
| HR02 | User can choose between three features from the menu screen | Technical | TBD    |
| HR03 | System displays the digital clock                           | Technical | TBD    |
| HR04 | System displays the event reminder                          | Technical | TBD    |
| HR05 | System displays the countdown timer                         | Technical | TBD    |
| HR06 | User can exit the current feature and menu screen           | Technical | TBD    |
| HR07 | User can select a date from calendar                        | Technical | TBD    |
| HR08 | User can enter the event on a date                          | Technical | TBD    |
| HR09 | User can remove the event from a date                       | Technical | TBD    |
| HR10 | User can update the event on a date                         | Technical | TBD    |
| HR11 | User can set the time for the timer                         | Technical | TBD    |
| HR12 | User can reset the time for the timer                       | Technical | TBD    |
| HR13 | Data should be stored while closing system                  | Scenario  | TBD    |

### Low level Requirements:-

| ID   | Description                                                                                                                                                                   | HLR ID     | Status (Implemented/Future) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- | --------------------------- |
| LR01 | As the program is run on the command line, the title as well as the options for the different features will be displayed and option to choose a feature will also be provided | HR01, HR02 |                             |
| LR02 | If the user chooses digital clock, a live clock with current time is displayed on the screen                                                                                  | HR03       |                             |
| LR03 | If the user chooses event reminder, a calendar is displayed along with option to enter an event, remove an event or update an event                                           | HR04       |                             |
| LR04 | If the user chooses to enter an event, the user is asked to select a date and add the event                                                                                   | HR07, HR08 |                             |
| LR05 | If the user chooses to remove an event, the user is asked the event to be removed and the event is removed                                                                    | HR09       |                             |
| LR06 | If the user chooses to update an event, the user is asked the event to be updated and the event is updated                                                                    | HR10       |                             |
| LR07 | If the user chooses timer, a timer will be displayed along with option to set and reset time                                                                                  | HR05       |                             |
| LR08 | If the user chooses to set the time, the user has to specify the desired time and the countdown starts                                                                        | HR11       |                             |
| LR09 | The user can reset the time by clicking a key on the keyboard                                                                                                                 | HR12       |                             |
| LR10 | The data from reminder can be stored into a file while closing the system                                                                                                     | HR13       |                             |
| LR11 | The user can exit the current feature and go back to the menu screen or exit the menu screen                                                                                  | HR06       |                             |
