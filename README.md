# MiniProject_ClockApp

Build | Code Quality | Unity | Git Inspector|
|---------|------------|-----------|----------------|
|[![C/C++ CI - Build Status](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/c-cpp.yml)         |[![Static Code- Cppcheck](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/cppcheck.yml)   [![Dynamic Code Analysis - Valgrind](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/valgrind.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/valgrind.yml) <br /> ![Code Quality Score](https://www.code-inspector.com/project/24710/score/svg)  [![Code Coverage](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/coverage.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/coverage.yml)   [![Codacy Badge](https://app.codacy.com/project/badge/Grade/03f90b4decf241dfa7fa763571153df1)](https://www.codacy.com/gh/thomasathul/STEPin_MiniProject/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=thomasathul/STEPin_MiniProject&amp;utm_campaign=Badge_Grade)    | [![Unit Testing](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/unity.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/unity.yml)          |[![Contribution Check - Git Inspector](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/thomasathul/STEPin_MiniProject/actions/workflows/gitinspector.yml)        |

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
| 303612 | Athul Thomas |F_01, F_02, F_03  |   |  | 8 | 8 |

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
| Stack smashing detected  | Assign value for structure variable in test function file  (bubble sort)                     |
| Aborted (core dumped) in workflow |  Changes to bubblesort function rectified (avoid going outside alloted stack)                                                  |
