/*
    Jancarlos Rodriguez
    20220301
    Argument Example
*/

#include <iostream>

using namespace std;

// Example of using arguments that receive their input from the terminal
int main(int argc, char *argv[]){
    for (int i=0; i<argc; i++){
        cout << "Argument number: " << i << " was " << argv[i] << endl;
    }

    return 123;
}