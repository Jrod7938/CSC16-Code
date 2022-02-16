/* 
    Jancarlos Rodriguez
    20220215
    Class Experiment 2 - Pointers
    Program shows the use of pointers in C++
*/

#include <iostream>

using namespace std;

int main(){

    // Printing the size of Integer & Long for machine
    cout << "The size of an int is: " << sizeof(int) << endl;
    cout << "The size of a long is: " << sizeof(long) << endl;

    // Variables
    int    i = 101;
    long   l = 400;
    double d = 1.1;
    int    j = 200;
    int    k = 300;

    cout << "Value of i = " << i << endl;

    // Pointer & printing its address
    int *iPtr = &i;
    
    cout << "The address of i = " << iPtr << endl;
    cout << "The address of l = " << &l << endl;
    cout << "The address of d = " << &d << endl;
    cout << "The address of j = " << &j << endl;
    cout << "The address of k = " << &k << endl;
    cout << "The address of iPtr is: " << &iPtr << endl;

    // Printing address and value of pointer
    cout << "Value at address " << iPtr << " is: " << *iPtr << endl;

    // Incrementing iPtr by + 1 & printing the address & values
    *iPtr += 1;
    cout << "Value at address " << iPtr << " is: " << *iPtr << endl;
    cout << "Value of i = " << i << endl;

    return 0;
}