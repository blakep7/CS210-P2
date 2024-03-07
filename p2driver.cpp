#include "LinkedList.h"
#include <stdio.h>
#include <iostream>
#include <stdexcept>

// Use iterator to view contents of linked list
template<typename T>
void print(LinkedList<T> list) {
   std::cout << "List-> ";
   ListIterator<T> p;
   for (p = list.first(); p != list.end(); p++) {
      std::cout << *p << ' '; 
   }
   std::cout << std::endl;
}
    
// Test LinkedList implementation
int main() {
   LinkedList<int> list;
   int first, last, middle;

   try {
      first = list.peekFirst();
   } catch(const std::runtime_error ex) {
      std::cout << ex.what() << std::endl;
   }

   printf("\tfirst: %d\n", first);
   printf("\tsize: %d\n", list.size());
   try {
      printf("peekLast\n");
      last = list.peekLast();
   } catch(const std::runtime_error ex) {
      std::cout << ex.what() << std::endl;
   }

   print(list);
   printf("Before addFirst\n");
   list.addFirst(20);
   printf("After addFirst\n");
   print(list);
   printf("Before addFirst\n");
   list.addFirst(10);
   printf("After addFirst\n");
   print(list);
   printf("Before addLast\n");
   list.addLast(30);
   printf("After addLast\n");
   print(list);
   printf("\tsize: %d\n", list.size());
   printf("removeFirst\n");
   first = list.removeFirst();
   printf("\tfirst: %d\n", first);
   print(list);
   printf("peekFirst\n");
   first = list.peekFirst();
   printf("\tfirst: %d\n", first);
   printf("peekLast\n");
   last = list.peekLast();
   printf("\tlast: %d\n", last);
   list.addLast(40);
   print(list);
   printf("removeLast\n");
   last = list.removeLast();
   printf("last: %d\n", last);
   print(list);
   printf("Should print 20 30\n");
   print(list);
   list.addFirst(10);
   list.addLast(40);
   printf("Should print 10 20 30 40\n");
   print(list);
   printf("\tsize: %d\n", list.size());
   printf("\tcontains 20 %d\n", list.contains(20));
   int index = list.find(20);
   printf("\tfind 20: %d\n", index);
   bool hasIt = list.contains(50);
   printf("\tcontains 50: %s\n", hasIt ? "true" : "false");
   middle = list.find(50);
   printf("\tfind 50: %d\n", middle);
   print(list);
   printf("makeEmpty\n");
   list.makeEmpty();
   print(list);

   for (int i = 99; i >= 11; i-=10) {
      list.addFirst(i);
   }
   print(list);

   for (int i = 99; i >= 11; i-=10) {
      list.remove(i);
      print(list);
   }
   print(list);
 
   for (int i = 9; i >= 1; i-=1) {
      list.addFirst(i);
      list.addLast(i);
   }
   print(list);

   list.removeAll(6);
   print(list);
   for (int i = 9; i >= 1; i-=1) {
      list.removeAll(i);
      print(list);
   }

   // addAt
   list.addAt(0,30);
   print(list);
   list.addAt(1,20); //works
   print(list);
   list.addAt(0,5); // works
   print(list);
   list.addAt(1,10);
   print(list);
   list.addAt(2,15);
   print(list);

   // removeAt
   // list-> 5 10 15 30 20
   list.removeAt(0); // 10 15 30 20
   print(list);
   list.removeAt(1); // 10 30 20
   print(list);
   list.removeAt(2); // 10 30 
   print(list);
   try {
      list.removeAt(2); // 10 30 
   } catch(const std::runtime_error ex) {
      std::cout << ex.what() << std::endl;
   }
   list.removeAt(1); // 10
   print(list);
   list.removeAt(0); //
   print(list);
   try {
      list.removeAt(0); // empty
   } catch(const std::runtime_error ex) {
      std::cout << ex.what() << std::endl;
   }
   print(list);

      
   return 0;
}

