/*
    Jancarlos Rodriguez
    20220308
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
        inline int myFastFunc(){
            return 1+1;
        };
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

ostream &operator << (ostream &out, MyClass &mc){
    out << mc.getData() << endl;
    return out;
}

istream &operator >> (istream &in, MyClass &mc){
    int data;
    in >> data;
    mc.setData(data);
    return in;
}

bool operator<(MyClass &mc1, MyClass &mc2){
    return mc1.getData() < mc2.getData();
}

int main(){
    MyClass mc;

    // Out of range example
    mc.setData(100);

    // In range example
    mc.setData(50);

    cout << mc.getData() << endl;

    cout << mc << endl;

    cout << "Please enter data" << endl;
    cin >> mc;
    cout << mc;
    MyClass mc2;

    // mc2 value set to 27
    mc2.setData(27);

    /*  If mc is smaller than mc2
            print mc is smaller than mc2
        else
            print mc is bigger than mc2
    */        
    if(mc<mc2){
        cout << "mc is smaller than mc2" << endl;
    } else {
        cout << "mc is bigger than or equal to mc2" << endl;
    }

    return 0;
}