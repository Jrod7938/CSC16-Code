#include <iostream>

using namespace std;

int main(){
    const int AllocSize = 102400;
    const int Count = 20000000;
    long totalMemAlloc = 0;

    for (int i=0; i<Count; i++){
        char *bytePtr = new char[AllocSize];
        totalMemAlloc += AllocSize;

        cout << "Total memory allocated so far: " << totalMemAlloc << endl;
    }

    return 0;
}