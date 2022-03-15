/*
    Jancarlos Rodriguez
    20220315
    Testing the use of io to check if an input is valid
*/

#include <iostream>

using namespace std;

int main(){
    int var = -1;

    do{
        cout << "Please enter an int: ";
        cin >> var;
        if(cin.fail()){
            cout << "Please try again." << endl;
            cin.clear();

            // 80 because thats the amount of characters per line, /n is to let the .ignore()
            // to know when to stop ignoring
            cin.ignore(80, '\n');
        } else { break; }
    } while (true);

    cout << "You entered: " << var <<  endl;

    return 0;
}