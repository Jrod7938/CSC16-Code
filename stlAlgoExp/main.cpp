#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
bool display(const vector<T> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    return true;
}

bool compareFunc(int a, int b){
    return a>b;
}

class MyClass{

    public:
        MyClass(float f_=0.0){
            f = f_;
        }

        float getF() const { return f; }
    private:
        // data
        float f;

};

bool operator<(const MyClass &lhs, const MyClass &rhs){
    return lhs.getF()<rhs.getF();
}

ostream &operator << (ostream &out, const MyClass &mc){
    cout << mc.getF(); // << endl;
    return out;
}

typedef vector<MyClass> MyVecType;

int main(){
    // create a vector with N elements
    MyVecType v(100);
    
    for(int i=0;i<v.size();i++){
        v[i] = i; //MyClass(i+0.1);
    }
    // display before
    cout << "---Before---" << endl;
    display(v);
    // sort vector
    sort(v.begin(), v.end());
    cout << "--After---" << endl;
    display(v);

    return 0;
}
