/**
 * @file LinkedListPQ.h
 * @author your name (you@sdsu.edu) (RedID)
 * @brief This file contains the declaration and definitions of the LinkedListPQ class, which is a priority queue implementation using a linked list.
 * @date Date Last Modified Here
 */
#ifndef LINKED_LIST_PQ_H
#define LINKED_LIST_PQ_H

#include "PriorityQueue.h"
#include "LinkedList.h"

/**
 * @class LinkedListPQ
 * 
 * @brief A priority queue implementation using a linked list.
 * 
 * @details The LinkedListPQ class inherits from the PriorityQueue class and provides methods to create and manipulate a priority queue using a linked list.
 * 
 * @tparam T The type of elements stored in the priority queue.
 * 
 * @todo Create a priority queue using a linked list. Refer to PriorityQueue.h for details on methods
 */
template<class T>
class LinkedListPQ : public PriorityQueue<T> {

private:
    LinkedList<T> *pq;

public:
    
};
#endif
