#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "ListIterator.h"

/**
 * @brief Priority Queue Interface
 * 
 * The PriorityQueue ADT may store objects in any order.  However,
 * removal of objects from the PQ must follow specific criteria.
 * The object of highest priority that has been in the PQ longest
 * must be the object returned by the remove() method.  FIFO return
 * order must be preserved for objects of identical priority.
 * 
 * Ranking of objects by priority is determined by natural order.
 * For this implementation, the lowest number has the highest priority.
 * All objects inserted into the PQ must implement this interface.
 * 
 * @tparam T The type of elements stored in the priority queue.
 */
template<class T>
class PriorityQueue
{
    protected:
        const int DEFAULT_INITIAL_CAPACITY = 1000;

    public:
        /**
         * @brief Inserts a new object into the priority queue
         * 
         * @param object 
         * @return true If the insertion is successful
         * @return false If the insertion is not successful (PQ is full)
         * 
         * @note Our priority queue can never be full as we are using a list-based implementation, this method should never return false
         */
        virtual bool insert(T object) = 0;   

        /**
         * @brief Removes the highest priority object that has been in the PQ the longest
         * 
         * @return T The object that was removed.
         * 
         * @throws std::invalid_argument Message: "Cannot remove from empty queue"
         */
        virtual T remove() = 0;
        
        /**
         * @brief Deletes all instances of the parameter obj from the PQ if found
         * 
         * @param obj 
         * @return true If one or more instances of the parameter obj were found and deleted
         * @return false If no match to the parameter obj is found
         */
        virtual bool deleteAll(T obj) = 0;
    
        /**
         * @brief Returns the object of highest priority that has been in the PQ the longest, but does NOT remove it
         * 
         * @return T 
         * 
         * @throws std::invalid_argument Message: "Cannot peek from empty queue"
         */
        virtual T peek() = 0;   
        
        /**
         * @brief Checks if the priority queue contains the specified element
         * 
         * @param obj 
         * @return true If the priority queue contains the specified element
         * @return false If the priority queue does not contain the specified element
         */
        virtual bool contains(T obj) = 0; 
    
        /**
         * @brief Returns the number of objects currently in the PQ
         * 
         * @return int 
         */
        virtual int size() = 0;
        
        /**
         * @brief Returns the PQ to an empty state
         * 
         */
        virtual void clear() = 0;
    
        /**
         * @brief Checks if the priority queue is empty
         * 
         * @return true If the priority queue is empty
         * @return false If the priority queue is not empty
         */
        virtual bool isEmpty() = 0;

        /**
         * @brief Checks if the priority queue is full
         * 
         * @return true If the priority queue is full
         * @return false If the priority queue is not full
         * 
         * @note Our priority queue can never be full as we are using a list-based implementation, this method should always return false
         */
        virtual bool isFull() = 0;  
        
        /**
         * @brief Returns an iterator to the first element in the PQ list, regardless of priority order
         * 
         * @return ListIterator<T> 
         */
        virtual ListIterator<T> first() = 0;

        /**
         * @brief Returns an iterator to the end of the PQ list, regardless of priority order
         * 
         * @return ListIterator<T> 
         */
        virtual ListIterator<T> end() = 0;
};

#endif
