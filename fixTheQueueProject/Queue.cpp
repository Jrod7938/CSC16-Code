/*-- Queue.cpp-----------------------------------------------------------
 
   This file implements Queue member functions.

-------------------------------------------------------------------------*/

#include <iostream>
#include <cstdlib>

#include "Queue.h"

using namespace std;

//--- Definition of Queue constructor
Queue::Queue(){
   myFront = myBack = -1;
}

//--- Definition of empty()
bool Queue::empty() const
{ 
   return (myFront == -1); 
}

//--- Definition of enqueue()
bool Queue::enqueue(const QueueElement & value)
{
   // If queue is full
   if(myBack == QUEUE_CAPACITY-1)
   {
      cerr << "*** Queue full -- can't add new value ***\n"
              "Must increase value of QUEUE_CAPACITY in Queue.h\n";
      return false;
   }else{
      // if empty
      if(empty()){
         myFront = 0;
         myBack++;
         myArray[myBack] = value;
      } else {
         int newBack = (myBack + 1) % QUEUE_CAPACITY;
         if (newBack != myFront){     // queue isn't full 
         myArray[newBack] = value;
         myBack = newBack;
         }
      }  
   }
   return true;
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   for (int i = myFront; i != myBack; i = (i + 1)%QUEUE_CAPACITY) 
      out << myArray[i] << "  ";
   cout << endl;
}

//--- Definition of front()
QueueElement Queue::front() const
{
   if ( !empty() ) 
      return (myArray[myFront]);
   else
   {
      cerr << "*** Queue is empty "
              " -- returning garbage value ***\n";
      return false; //myArray[QUEUE_CAPACITY-1]; // "Garbage" value
   }
}

//--- Definition of dequeue()
bool Queue::dequeue()
{
   QueueElement element;
   if (!empty()){
      element = myArray[myFront];//deleteing element from front
      if(myFront==myBack){//if front and back are the last element,initialize them to empty
         myFront = myBack = -1;
      }else{
         myFront++;
      }
      return true;
   } else {
      cerr << "*** Queue is empty -- "
              "can't remove a value ***\n";
      return false;     
   }
} 