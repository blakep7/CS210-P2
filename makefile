# CS 210 Spring 2023
# p2 configuration
# Usage:  
#   make p2        - Compiles and builds the p2 executable
#   make pq2       - Compiles and builds the pq2 executable
#   make clean     - Removes the p2 and pq2 executables

# Compiler command
CC=g++

# Compiler flags
CFLAGS=-g -std=c++11
#CFLAGS=-g -Wall -std=c++11

# Target: p2
# Description: Compiles and builds the p2 executable
# Dependencies: p2driver.cpp, LinkedList.h, ListIterator.h, Node.h
p2: p2driver.cpp LinkedList.h ListIterator.h Node.h
	$(CC) $(CFLAGS) -o p2 p2driver.cpp 

# Target: pq2
# Description: Compiles and builds the pq2 executable
# Dependencies: p2pqdriver.cpp, LinkedListPQ.h, PriorityQueue.h
pq2: p2pqdriver.cpp LinkedListPQ.h PriorityQueue.h
	$(CC) $(CFLAGS) -o pq2 p2pqdriver.cpp 

# Target: clean
# Description: Removes the p2 and pq2 executables
clean:
	rm p2 pq2
