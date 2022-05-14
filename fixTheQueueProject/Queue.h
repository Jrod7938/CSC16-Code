#include <iostream>

#ifndef QUEUE
#define QUEUE

const int QUEUE_CAPACITY = 128;
typedef AdditionProblem QueueElement;

class Queue
{
 public:
  /***** Function Members *****/
  /***** Constructor *****/
  Queue();
  /*----------------------------------------------------------
    Construct a Queue object.

    Precondition:  None.
    Postcondition: An empty Queue object has been constructed;
        myFront and myBack are initialized to -1 and myArray 
        is an array with QUEUE_CAPACITY elements of type 
        QueueElement.
   -----------------------------------------------------------*/

  bool empty() const;
  /*-----------------------------------------------------------
    Check if queue is empty
    Precondition: None.
    Postcondition: True is returned if the queue is empty and 
        false is returned otherwise.
   -----------------------------------------------------------*/

  void enqueue(const QueueElement & value);
  /*-----------------------------------------------------------
    Add a value to a queue 

    Precondition:  value is to be added to this queue.
    Postcondition: value is added at back of queue provided 
        there is space; otherwise, a queue-full message is 
        displayed and execution is terminated.
   -----------------------------------------------------------*/

  void display(ostream & out) const;
  /*-----------------------------------------------------------
    Output the values stored in the queue 

    Precondition:  out is ostream to use for output
    Postcondition: Queue's contents, from top down, have
        been output to out.
   -----------------------------------------------------------*/

  QueueElement front() const;
  /*-----------------------------------------------------------
    Retrieve value at front of queue (if any)

    Precondition:  Queue is nonempty
    Postcondition: Value at front of queue is returned, unless
        queue is empty; in that case, an error message is
        displayed and a "garbage value" is returned.
   ----------------------------------------------------------*/

  void dequeue();
  /*-----------------------------------------------------------
    Remove value at front of queue (if any)

    Precondition:  Queue is nonempty
    Postcondition: Value at front of queue has been removed, 
        unless queue is empty; in that case, an error 
        message is displayed and execution is terminated.
   ----------------------------------------------------------*/ 

 private:
  /***** Data Members *****/
  QueueElement myArray[QUEUE_CAPACITY];
  int myFront,
      myBack;
}; // end of class declaration

#endif 