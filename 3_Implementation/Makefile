# Name of the project
PROJECT_NAME=clock

TEST_NAME= test_$(PROJECT_NAME)

#Environment variable
CC= gcc

CFLAGS= -o

MAIN=main.c

# All source code files
SRC=src/Digital_Clock/digitalClock.c\
src/Countdown_Timer/countdownTimer.c\
src/Countdown_Timer/setTime.c\
src/Event_Scheduler/getcurrentdate.c\
src/Event_Scheduler/finddaysleft.c\
src/Event_Scheduler/bubblesort.c\
src/Event_Scheduler/printevent.c\
src/Event_Scheduler/logevent.c


# All test source files
TEST=test_src/test_file.c\
unity/unity.c

# All include folders with header files
INC=-I inc\
-I unity

#SOurce file for coverage test
COV_SRC=test_src/test_file.c

#Multiplatform features
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


# Default target built
$(PROJECT_NAME):all


# Run the target even if the matching name exists
.PHONY: run clean test doc all

#Run make call to invoke cppcheck and compliation
all: 
	$(CC) $(MAIN) $(SRC) $(INC) $(CFLAGS) $(call FixPath,$(PROJECT_NAME).$(EXEC)) 

# Call `make run` to run the application
run:
	./$(call FixPath,$(PROJECT_NAME).$(EXEC))

	
#Run the target to find the memory leak in the program	
memoryleak:$(test)
	valgrind ./$(call FixPath,$(TEST_NAME).$(EXEC))

#Run the target to find static code analysis in the program
static:
	cppcheck --enable=all $(SRC)	$(MAIN)

# Build and run the unit tests
test:
	gcc $(INC) $(SRC) $(TEST) $(CFLAGS) $(call FixPath,$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(TEST_NAME).$(EXEC))	

#To test the coverage of the whole program
coverage:
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(TEST) $(INC) $(CFLAGS) $(call FixPath,$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(TEST_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC) *.gcda *.gcno *.c.gcov

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,*.$(EXEC))
	$(RM) *.gcda *.gcno
	
