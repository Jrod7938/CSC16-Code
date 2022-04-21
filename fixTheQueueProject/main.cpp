/* 
    Jancarlos Rodriguez
    20220420
    Class Assignment - Fix the Queue Project
    Code below demonstrates the use of Queues in C++
    Problem: Fix all functions
    Correction: Corrected all funtions to accurately complete their purpose
*/


#include <iostream>
#include "Queue.h"

using namespace std;

int main(){
    // Constant int to be enqueued
    const int ENQUEUEDNUM = 1;

    // Creating a Queue
    Queue q;

    // Test #1
    cout << "Test 1 Enqueue: " << ENQUEUEDNUM << endl;
    cout << "Before Enqueue: " << endl;
    q.display(cout);
    
    cout << "After Enqueue: " << endl;
    q.enqueue(ENQUEUEDNUM);
    q.display(cout);

    cout << "Front of Enqueue:" << endl;
    int frontofQueue = q.front();
    cout << frontofQueue << endl;
    q.dequeue();

    // Test 2
    cout << "Test 2" << endl;
    Queue q2;
    const int N = 10;
    for(int i=0; i<N; i++){
        q2.enqueue(i);
    }
    q2.display(cout);

    // Test 3
    cout << "Test 3: Dequeue" << endl;
    cout << "Before Dequeue: " << endl;
    q2.display(cout);
    cout << "After Dequeue: " << endl;
    while(!q2.empty()){
        q2.dequeue();
        q2.display(cout);
    }

    return 0;
}