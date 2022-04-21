/*
    Jancarlos Rodriguez
    20220420
    Queue Simulation
    Code below demonstrates the use of Queues in a simulated environment
*/

#include <iostream>
#include <cstdlib>

#include "Queue.h"

using namespace std;

int main(){
    // init random seed
    srand(time(NULL));

    // create a queue
    Queue q;
    const int SimTime = 100;

    int timeStep = 0;

    // Simulation time loop
    while(timeStep < SimTime){
        int randNum = rand() % 10;
        
        // if smaller than number
        if (randNum < 7){
            q.enqueue(timeStep);
        } else {
            q.dequeue();
        }
        timeStep++;

        // After SimTime is over check how many things in the queue
        q.display(cout);
        // print size of queue
        cout << "Queue size is: " << q.getSize() << endl;
    }



/*
    // initialize random seed 
    srand(102); // time(NULL));

    // generate random number
    const int N = 10;
    for(int i=0; i<N; i++){
        int rndNum = rand() % 10;
        cout << rndNum << " ";
    }
    cout << endl; 
*/

}
