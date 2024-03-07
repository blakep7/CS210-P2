#include "LinkedListPQ.h"
#include <iostream>
#include <stdexcept>

// Use iterator to view contents of linked list
template<typename T>
void print(LinkedListPQ<T> pq) {
   std::cout << "List-> ";
   ListIterator<T> p;
   for (p = pq.first(); p != pq.end(); p++) {
      std::cout << *p << ' '; 
   }
   std::cout << std::endl;
}
    
int main() {
    LinkedListPQ<int> intpq;

    intpq.size(); 
    intpq.isEmpty();
    intpq.isFull();
    intpq.clear();
    intpq.insert(10);
    print(intpq);
    intpq.peek();
    if ( intpq.size() != 1) std::cout << "ERROR: size should be 1\n"; 
    if ( intpq.size() == 1) std::cout << "PASS: size should be 1\n"; 
    if ( intpq.remove() == 10) std::cout << "PASS: removed 10\n";
    else std::cout << "ERROR: should have removed 10\n";
    intpq.insert(20);
    intpq.contains(20);
    intpq.insert(30);
    intpq.deleteAll(10);
    if ( intpq.remove() == 20) std::cout << "PASS: removed 20\n";
    else std::cout << "ERROR: should have removed 20\n";

    // Insert more tests here
    return 0;
}
