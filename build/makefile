# makefile
INC = -I ../src/include

CC = g++
OPTFLAGS = -Wall -g -O3

VPATH = ../src/include : ../src
# vpath %.h src/include : src
# vpath %.cc src

all : test

test : main.o hello.o hello_world.o
	$(CC) $(OPTFLAGS) $^ -o $@

main.o : main.cc
	$(CC) $(OPTFLAGS) $(INC) $< -c

hello.o : hello.cc hello.h
	$(CC) $(OPTFLAGS) $(INC) $< -c

hello_world.o : hello_world.cc hello_world.h
	$(CC) $(OPTFLAGS) $(INC) $< -c


.PHONY : clean
clean :
	-rm *.o test
	
