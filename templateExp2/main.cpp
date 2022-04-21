#include <iostream> 

#include "Queue.h"

using namespace std;

struct MyType{
    // construcor
    MyType(int data = 0){ x = data; }
    // data
    int x;
};

ostream &operator << (ostream &out, const MyType &mt){
    out << "MyType data is: " << mt.x << endl;
    return out;
}

int main(){
    Queue<int> q;
    q.enqueue(1);
    q.display(cout);
    Queue<float> q2;
    q2.enqueue(2.3);
    q2.display(cout);
    Queue<char> q3;
    q3.enqueue('A');
    q3.display(cout);

    Queue<MyType> qmt;
    MyType mt(3);
    qmt.enqueue(mt);
    qmt.display(cout);

    return 0;
}