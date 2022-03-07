/*
    Jancarlos Rodriguez
    20220307
    Object Oriented Programming Example
    Simple program that shows the use of OOP
*/

#include <iostream>

using namespace std;

class MyClass{
    public:
        // Accessor
        int getData();
        // Mutator
        void setData(int data);
    private:
        int data;

}; // <-- Requires ";" at the end

// Class Funtion Definition
int MyClass::getData(){
    return data;
}

void MyClass::setData(int data){
    if (data >= 10 && data <= 50){
        this->data = data;
    } else {
        cout << "Data " << data << " out of range " << endl;
    }
}

int main(){
    MyClass mc;

    // Out of range example
    mc.setData(100);

    // In range example
    mc.setData(50);

    cout << mc.getData() << endl;

    return 0;
}