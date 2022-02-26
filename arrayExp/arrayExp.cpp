#include <iostream>

using namespace std;

int main(){
    
    // Constant value (Note to self: Not supposed to change)
    const int ArraySize = 200;
    
    // Declared array
    int myArray[ArraySize];

    // traverse array and store values
    for(int i=0;i<ArraySize;i++){
        myArray[i] = i;
    }

    //ArraySize = 123;

    // Traverse array and print values
    for(int i=0;i<ArraySize;i++){
        cout << myArray[i]<<endl;
    }

    return 0;
}

