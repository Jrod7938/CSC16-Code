#include <iostream>

using namespace std;

void swapByVal(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByPtr(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 1;
    int y =2;
    cout << "w,y val: " << x << "," << y << endl;
    //swapByVal(x,y);
    //swapByRef(x,y);
    //swapByPtr(x,y);
    cout << "w,y val: " << x << "," << y << endl;
}