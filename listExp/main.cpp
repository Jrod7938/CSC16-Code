/*
    Jancarlos Rodriguez
    Program: Using Constructors in C++
    20220329
*/

#include <iostream>
#include <cassert>

using namespace std;

class MyClass{
    public:
        MyClass() { cout << "Hello default constructor" << endl; }
        MyClass(const MyClass &mc) { cout << "Hello from copy constructor" << endl; }
        const MyClass &operator = (const MyClass &mc){ 
            cout << "Hello from assignment operator" << endl; 
            return *this;
        }
        ~MyClass() { cout << "Hello from destructor" << endl; }
};

int main(){
    //int a = 10;

    //assert(a>10);
    MyClass mc1;        // Default Constructor
    MyClass mc2(mc1);   // Copy Constructor
    MyClass mc3;        // Default Constructor
    mc2 = mc3 = mc1;    // Assignment Operator

    // MyClass mc4 = mc3;  // Assignment Operator 
    return 0;
}       