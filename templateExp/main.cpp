#include <iostream>

using namespace std;

template<typename GType, typename HType, typename RType>

RType add(GType a, HType b){
    RType res = a + b;
    return res;
}

struct MyType{
    // construcor
    MyType(int data){ x = data; }
    // data
    int x;
};

const MyType operator+(const MyType &a, const MyType &b){
    MyType temp(0);
    temp.x = a.x + b.x;
    return temp;
}

ostream &operator << (ostream &out, const MyType &mt){
    out << "MyType data is: " << mt.x << endl;
    return out;
}

int main(){
    int a = 1,
        b = 2;
    cout <<add<int,int,int>(a,b) << endl;

    float f1 = 1.2,
          f2 = 2.3;
    cout <<add<float,float,float>(f1, f2) << endl;

    MyType mt1(4),
           mt2(5);
    cout <<add<MyType,MyType,MyType>(mt1, mt2) << endl;

    double d1 = 2.3;
    int    i2 = 3;
    cout <<add<double,int,double>(d1,i2) << endl;
    cout <<add<int,double, int>(d1,i2) << endl;

    return 0;
}