# CS 210 Spring 2023
# p2 configuration
# Usage:  
#   make p2
#   make pq2

CC=g++
CFLAGS=-g -std=c++11
#CFLAGS=-g -Wall -std=c++11

p2: p2driver.cpp LinkedList.h ListIterator.h Node.h
	$(CC) $(CFLAGS) -o p2 p2driver.cpp 

pq2: p2pqdriver.cpp LinkedListPQ.h PriorityQueue.h
	$(CC) $(CFLAGS) -o pq2 p2pqdriver.cpp 

clean:
	rm p2 pq2

