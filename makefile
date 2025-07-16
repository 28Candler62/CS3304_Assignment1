# John Candler
# CS 3304 Assignment 1
#
# Based on: https://bytes.usc.edu/cs104/wiki/makefile
#
# Make file


COMPILER=g++
OPTIONS=-g -pendantic -Wall -Wextra -Wshadow -Wconversion -Wunreachable-code
COMPILE=$(COMPILER) $(OPTIONS)
BUILD=build
FILENAME=LaptopDriver
DEPFILE=Laptop
# Compile main by default
all: program

# $(BUILD)/*.o expands to all .o files in the $(BUILD) directory
# In this case, we'll get $(BUILD)/file1.o $(BUILD)/file2.o
program: $(FILENAME).cpp $(BUILD)/$(DEPFILE).o
	$(COMPILE) $< $(BUILD)/*.o -o $@

$(BUILD)/$(DEPFILE).o: $(DEPFILE).cpp $(DEPFILE).h build
	$(COMPILE) -c $< -o $@

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD)

# Delete the build directory and program
clean:
	rm -rf $(BUILD) program

# These rules do not correspond to a specific file
.PHONY: build clean
