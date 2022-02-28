/*
    Jancarlos Rodriguez
    20220228
    Program was created to show the use of a dynamic array
*/
#include <iostream>

using namespace std;

int main(){
    int *arrayPtr;
    long size = 0;

    cout << "Please enter array size: ";
    cin >> size;

    arrayPtr = new int[size];

    for (int i = 0; i < size; i++){
        arrayPtr[i] = i;
    }

    for (int i = 0; i < size; i++){
        cout << arrayPtr[i] << endl;
    }

    return 0;
}