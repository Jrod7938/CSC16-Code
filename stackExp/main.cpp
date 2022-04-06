#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    const int N = 10;

    Stack s;

    for(int i=0; i<N; i++){
        s.push(i);
    } 
    // Print the reversed list
    s.display(cout);

    return 0;
}