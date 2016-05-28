# define the C compiler to use
CC = g++

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
DEBUG = -g
CFLAGS = -Wall $(DEBUG)

# build target executable
TARGET = DataTypes

# define the C++ source files
SRCS = $(TARGET).cpp

# define the C object files
#
# This uses Suffix Replacement within a macro:
# 	$(name:string1=string2)
#		For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .cpp of all words in the macro SRCS
# with the .o suffix
#
OBJS = $(SRCS.cpp=.o)

# define the number of test cases
CASES = 1

$(TARGET) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	$(RM) $(TARGET)

tar:
	tar cfv $(TARGET).tar $(SRCS) $(TARGET)

test:
	@number=1; while [[ $$number -le $(CASES) ]];	do \
		echo Test Case $$number; \
		./$(TARGET) < input$$number.txt > output$$number.txt; \
		diff expected_output$$number.txt output$$number.txt; \
		if [ $$? != 0 ]; \
		then \
			echo Failed; \
		else \
			echo Passed; \
		fi; \
		((number = number + 1)); \
	done

gitignore:
	@echo $(TARGET) >> .gitignore
