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

    // new stuff
    int b = 123456;
    cout << "The value of b before stroll on the wild side " << b << endl;
    cout << "Scrolling outside of my array.";
    cout << myArray[200] << endl;
    myArray[200] = 654321;
    cout << "The value of b after stroll on the wild side " << b << endl;

    return 0;
}

