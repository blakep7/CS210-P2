#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "ListIterator.h"

/*  The PriorityQueue ADT may store objects in any order.  However,
    removal of objects from the PQ must follow specific criteria.
    The object of highest priority that has been in the PQ longest
    must be the object returned by the remove() method.  FIFO return
    order must be preserved for objects of identical priority.
   
    Ranking of objects by priority is determined by natural order.
    For this implementation, the lowest number has the highest priority.
    All objects inserted into the PQ must implement this interface.
*/   

template<class T>
class PriorityQueue
{
    protected:
         const int DEFAULT_MAX_CAPACITY = 1000;

    public:
    //  Inserts a new object into the priority queue.  Returns true if
    //  the insertion is successful.  If the PQ is full, the insertion
    //  is aborted, and the method returns false.
    virtual bool insert(T object) = 0;   
   
    //  Removes the object of highest priority that has been in the
    //  PQ the longest, and returns it.  
    //  Throws invalid_argument if the PQ is empty.
    //         exception error message: "Cannot remove from empty queue" 
    virtual T remove() = 0;
    
    //  Deletes all instances of the parameter obj from the PQ if found, and
    //  returns true.  Returns false if no match to the parameter obj is found.
    virtual bool deleteAll(T obj) = 0;
   
    //  Returns the object of highest priority that has been in the
    //  PQ the longest, but does NOT remove it. 
    //  Throws invalid_argument if the PQ is empty.
    //         exception error message: "Cannot peek from empty queue" 
    virtual T peek() = 0;   
    
    //  Returns true if the priority queue contains the specified element
    //  false otherwise.
    virtual bool contains(T obj) = 0; 
   
    //  Returns the number of objects currently in the PQ.
    virtual int size() = 0;
      
    //  Returns the PQ to an empty state.
    virtual void clear() = 0;
   
    //  Returns true if the PQ is empty, otherwise false
    virtual bool isEmpty() = 0;
   
    //  Returns true if the PQ is full, otherwise false.  List based
    //  implementations should always return false.
    virtual bool isFull() = 0;  
    
    //  Returns iterator to first element in PQ list, regardless of priority order
    virtual ListIterator<T> first() = 0;

    //  Returns iterator to the end of the PQ list, regardless of priority order
    virtual ListIterator<T> end() = 0;
};

#endif
