# MiniProject_ClockApp

## Introduction:-

  Reaching your office/school on time, Not being late for the movies, Waking up on time for the meetings and Setting up time for short walks, all these are something that you come across in your daily life. *Multifunctional clock* plays a huge role in achieving these tasks. Be it on your phone or a digital watch, multifunctional clocks are always an essential part in today's world.

## Folder Structure

Folder                      | Description
----------------------------| -----------------------------------------
1_Requirements              | Documents detailing requirements and research
2_Design                    | Documents specifying design details
3_Implementation            | Contains all codes and documentation
4_TestPlanandOutput         | Documents with test plans and procedures
5_Report                    | Document containing the report of the project
6_ImagesandVideos           | Document with images and videos regarding project

## Contributors List and Summary
| SF_ID | Name | Features |Issues Raised | Issues Solved | No. of Test Cases | No. of Test Cases Passing |
|-----|-----|----|------|-----|-----|-----|
| 303612 | Athul Thomas |  |  |  |  | 

|Features list|  Feature ID|
|-------------|----------|
|Digital Clock|  F_01|
|Event Scheduler| F_02|
|Countdown Timer| F_03|
## Challenges Faced 
| Challenge Faced | Solution |
|-----------------|--------------------|
| Overwriting printf on same line (digital clock and countdown timer) | Used \r (carriage return) instead of \n (new line) |
| Countdown timer structure errors | Declaraing typedef structure in custom header file |
| Structure pointer exit after one value is entered | Dynamic memory allocation (using malloc) |
| Stack smashing detected  | Empty value for structure variable in test function file  (bubble sort)                            |
