# Name of the project
PROJECT_NAME=clock

TEST_NAME= test_$(PROJECT_NAME)

#Environment variable
CC= gcc

CFLAGS= -o

# Output directory
BUILD= build


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

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      CPPCHECK=cppcheck --enable=all $(SRC)	$(MAIN)
	  VALGRIND=valgrind ./$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))
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
all: $(BUILD)
	$(CPPCHECK)
	$(CC) $(MAIN) $(SRC) $(INC) $(CFLAGS) $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC)) -fno-stack-protector
	
#Run the target to find the memory leak in the program	
memoryleak:
	$(VALGRIND)


# Call `make run` to run the application
run:
	./$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

# Build and run the unit tests
test:$(SRC) $(TEST)
	gcc $^ $(INC) $(CFLAGS) $(call FixPath,$(BUILD)/$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(BUILD)/$(TEST_NAME).$(EXEC))	

#To test the coverage of the whole program
coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(TEST) $(INC) $(CFLAGS) $(call FixPath,$(BUILD)/$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(BUILD)/$(TEST_NAME).$(EXEC))

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	$(RM) *.gcda *.gcno
	rmdir $(BUILD)

# Create new build folder if not present
$(BUILD):
	mkdir $(BUILD)	