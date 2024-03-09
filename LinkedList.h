/**
 * @file LinkedList.h
 * @author your name (you@sdsu.edu) (RedID)
 * @brief This file contains the declaration and definitions of the LinkedList class, which represents a linked list data structure.
 * @date Date Last Modified Here
 */
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"
#include "ListIterator.h"
#include <stdexcept>

/**
 * @class LinkedList
 * 
 * @brief A linked list implementation.
 * 
 * This class represents a linked list data structure.
 * It allows for efficient insertion and removal of elements at both the beginning and end of the list.
 * It also provides methods for accessing and manipulating the elements in the list.
 * 
 * @tparam T The type of elements stored in the list.
 */
template<class T>
class LinkedList {
    private: 
        Node<T> *head;
        Node<T> *tail;
        int currentSize;

    public: 

       /**
        * @brief Construct a new Linked List object
        * 
        * @note Initializes the head and tail to nullptr and currentSize to 0
       */
        LinkedList() : head(nullptr), tail(head), currentSize(0) { }

        /**
         * @brief Returns the number of items in the list
         * 
         * @return int 
         */
        int size() {
            return currentSize;
        }
                
        /**
         * @brief Checks if the list is empty
         * 
         * @return true if the list is empty
         * @return false if the list is not empty
         */
        bool isEmpty() {
            return head == nullptr;
        }
                
        /**
         * @brief Insert item at an index
         * 
         * @param index 
         * @param obj item to insert
         * 
         * @throws std::runtime_error "Error: addAt bad index" if the index is out of bounds
         * 
         * @todo Implement this method. Conditions to handle: bad index, empty list, one item, insert at beginning, in the middle, at the end
         */
        void addAt(int index, T obj) {

        }

        /**
         * @brief Insert item at the head
         * 
         * @param obj 
         */
        void addFirst(T obj) {
            Node<T> *newNode = new Node<T>(obj);
            if(isEmpty())
                head = tail = newNode;
            else {
                newNode->next = head;            
                head = newNode;
            }
            currentSize++;
        }
            
        /**
         * @brief Insert item at the tail
         * 
         * @param obj 
         */
        void addLast(T obj) {
            Node<T> *newNode = new Node<T>(obj);
            if(isEmpty())
                head = tail = newNode;
            else {
                tail->next = newNode;
                tail = newNode;
                }
            currentSize++;
        }
                
        /**
         * @brief Gets the first item in the list
         * 
         * @return T
         * 
         * @throws std::runtime_error "Error: peekFirst empty list" if the list is empty
         */
        T peekFirst() {
            if(head == nullptr)
                throw std::runtime_error("Error: peekFirst empty list");
            return head->data;
        }
                
        // peekLast: return item at tail if it exists, else 
        // if list is empty: throws runtime_error "Error: peekLast empty list" 
        /**
         * @brief Gets the last item in the list
         * 
         * @return T 
         * 
         * @throws std::runtime_error "Error: peekLast empty list" if the list is empty
         * 
         * @todo Implement this method. Note that right now it's just returning a bogus value to avoid a compiler error.
         */
        T peekLast() {
            T tmp;
            return tmp;
        }

        /**
         * @brief Deletes the item at the specified index
         * 
         * @param index 
         * 
         * @throws std::runtime_error "Error: removeAt empty list" if the list is empty
         * @throws std::runtime_error "Error: removeAt bad index" if the index is out of bounds (less than 0 or greater than or equal to currentSize)
         * 
         * @todo Implement this method. Conditions to handle: bad index, empty list, one item, remove at beginning, in the middle, at the end
         */
        void removeAt(int index) {
  
        }
                
        /**
         * @brief Deletes the first item in the list and returns it
         * 
         * @return T item that was removed
         * 
         * @throws std::runtime_error "Error: removeFirst empty list" if the list is empty
         */
        T removeFirst() {
        if(isEmpty())
            throw std::runtime_error("Error: removeFirst empty list");
            Node<T> *nodeToDelete = head;
            T dataToReturn = head->data;
            head = head->next;
            if(head == nullptr)
                head = tail = nullptr;
            currentSize--;
            delete nodeToDelete;
            return dataToReturn;
        }
                
        /**
         * @brief Deletes the last item in the list and returns it
         * 
         * @return T item that was removed
         * 
         * @throws std::runtime_error "Error: removeLast empty list" if the list is empty
         */
        T removeLast() {
            if(isEmpty())
                throw std::runtime_error("Error: removeLast empty list");
            Node<T> *nodeToDelete = tail;
            T tmp = tail->data;
            if(head == tail) // only one element in the list
                head = tail = nullptr;
            else {    
                Node<T> *previous = nullptr, *current = head;
                while(current != tail) {
                    previous = current;
                    current = current->next;
                    }
                previous->next = nullptr;
                tail = previous;
                }
            currentSize--;
            delete nodeToDelete;
            return tmp;
        }

        /**
         * @brief Gets the index of the item in the list
         * 
         * @param obj item to find
         * @return int index of the item in the list or -1 if the item is not found
         * 
         * @todo Implement this method. Note that right now it's just returning a bogus value to avoid a compiler error.
         */
        int find(T obj) {
            return -1;
        }        

        /**
         * @brief Checks if the list is full (list is never full)
         * 
         * @return true 
         * @return false 
         */
        bool isFull() {
            return false;
        }
                
        // makeEmpty: loop through list to delete nodes then
        // reset head/tail to nullptr and currentSize to 0.
        // Note: to free memory, must call for each node:
        //       delete theNodeToDelete;
        /**
         * @brief Clears the list
         * 
         * @todo Implement this method. Loop through list to delete nodes then reset head/tail to nullptr and currentSize to 0.
         * 
         * @note To free memory, must call for each node: `delete theNodeToDelete;`
         */
        void makeEmpty() {

        }

        /**
         * @brief Checks if the list contains the item
         * 
         * @param obj 
         * @return true if the item is in the list
         * @return false if the item is not in the list
         */
        bool contains(T obj) {
            return find(obj) == -1 ? false : true;
        }        
                    
        
        /**
         * @brief Removes the first occurence of the item in the list
         * 
         * @param obj 
         * @return true if the first occurence of the item was removed from the list
         * @return false
         * 
         * @note Conditions handeled: empty list, one item, remove at beginning, in the middle, at the end
         */
        bool remove(T obj) {
            if(isEmpty())  // empty list
                return false;
            Node<T> *previous = nullptr, *current = head;
            while(current != nullptr) {
                if( (current->data) == obj) {                
                    if(current == head)  // first element
                        removeFirst();
                    else if(current == tail) // last element
                        removeLast();
                    else {  // in the middle
                        previous->next = current->next;
                        currentSize--;
                        }
                    return true;
                    }
                previous = current;
                current = current->next;
                }
            return false;
        }

        /**
         * @brief Deletes all occurences of the item in the list
         * 
         * @param obj 
         * 
         * @todo Implement this method.
         */
        void removeAll(T obj) {

        }
        
        /**
         * @brief Creates a ListIterator at the head of the list
         * 
         * @return ListIterator<T> 
         */
        ListIterator<T> first() {
            return ListIterator<T>(head);
        }

        /**
         * @brief Creates a ListIterator at one past the tail of the list
         * 
         * @return ListIterator<T> 
         */
        ListIterator<T> end() {
            return ListIterator<T>(nullptr);
        }
};
#endif
