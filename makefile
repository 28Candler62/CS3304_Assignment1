# John Candler
# CS 3304 Assignment 1
#
# * https://github.com/28Candler62/CS3304_Assignment1
#
# Compiler command: NA
# ## makefile (WINDOWS 11) ##
# Based on: https://bytes.usc.edu/cs104/wiki/makefile


COMPILER=g++
OPTIONS=-g -pedantic -Wall -Wextra -Wshadow -Wconversion -Wunreachable-code
COMPILE=$(COMPILER) $(OPTIONS)
BUILD=build
FILENAME=LaptopDriver
DEPFILE=Laptop
# Compile main by default
all: $(FILENAME)

# $(BUILD)/*.o expands to all .o files in the $(BUILD) directory
# In this case, we'll get $(BUILD)/file1.o $(BUILD)/file2.o
$(FILENAME): $(FILENAME).cpp $(BUILD)/$(DEPFILE).o
	$(COMPILE) $< $(BUILD)/*.o -o $@ && $(FILENAME).exe

$(BUILD)/$(DEPFILE).o: $(DEPFILE).cpp $(DEPFILE).h build
	$(COMPILE) -c $< -o $@

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD)

# Delete the build directory and program
clean:
	rmdir /s /q $(BUILD) -p
	del $(FILENAME).exe
	
# These rules do not correspond to a specific file
.PHONY: build clean
