# Getting Started with Clock App

## Folder Structure

|Folder |  Description|
|-------|-------------|
| doc   | Contains the doxyfile for documentation|
| inc   | Contains all the header files|
| log   | Contains log text file for event scheduler|
| src   | Contains all the source files |
| test_src| Contains the test files|
| unity| Contains the unity framework for unit testing|

## Installing the dependencies

To run the program, you would require two additional dependecies

1.  GCC compiler

- For Windows users,
  Install [Mingw64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download) and add the path to your environment variable.
- For Linux users, Run the following command in your terminal.

```console
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get install build-essential
```

1.  Make

- For Windows users,
  Install make from [Make Installer](https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download?use_mirror=webwerks&download=)
- For Linux users, Run the following command in your terminal

```console
sudo apt-get install cmake
```

## Running the program

1. Once you have downloaded the dependencies required, clone this github repository.
2. Next, Open up the terminal console and run the `make` command in the terminal.

   The program is now compiled and ready to run! :tada:

3. You can run the program in two ways:-

   -  Run the `make run` command to access the program from the terminal.
   -  Another way is to go to the 3_Implementation folder in the cloned project directory and look for the clock.exe/clock.out file. Run the program directly from this file

4.  If you wish to remove all the compiled and build files, Use the `make clean` command

[Click here](https://github.com/thomasathul/STEPin_MiniProject/blob/main/6_ImagesandVideos/README.md) to watch the project demo video. 

## Feature Demo

After you have run the program, you will be asked to enter the choice in the menu screen.

1.  If you have selected option 1, the **Digital Clock** will be up and running with your local current time.

   ![Digital Clock](/6_ImagesandVideos/digitalclock.gif)

2.  If you have selected option 2, enter the time (in minutes and seconds) and the **Countdown Timer** starts.

   ![Countdown Timer](/6_ImagesandVideos/countdowntimer.gif)

3.  If you have selected option 3, enter the number of tasks and the events that you need to schedule. Check the **log.txt** in the
   project file to view the logged events.

   ⚠️**Warning**: Enter the date and month in (DD MM) format

   ![Event Scheduler](/6_ImagesandVideos/eventscheduler.gif)

## Advanced Guide

To verify and check more about the sources and testing, run the following commands:-

-   `make test` - To verify and test the program.
-   `make static` - To run a static code analysis.
-   `make memoryleak` - To run a dynamic code analysis.
-   `make coverage` - To check the test coverage.
-   `make doc`- To generate a documentation report.
