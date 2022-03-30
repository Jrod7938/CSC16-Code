/*
    Jancarlos Rodriguez
    Program demonstrates the use of linked lists in C++
    20220330
*/

#include <iostream>
#include "List.h"

using namespace std;

int main(){
    // Create a list
    List list1;

    // Insert elements to the list
    const int N = 10;
    for(int i=0; i<N; i++){
        list1.insert(i);
    }

    // Display the list
    list1.display(cout);
    return 0;
}