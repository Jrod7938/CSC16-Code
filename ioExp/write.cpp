/*
    Jancarlos Rodriguez
    20220315
    Opening and Writing files in C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // File to open from user
    string fileName;
    cout << "Please enter a file name to read: ";
    cin >> fileName;
    
    // Opening File
    ofstream fstrm;

    // Have to convert the string to character because .open() takes a char as parameter
    fstrm.open(fileName.c_str());

    if(fstrm.fail()){
        cout << "Error while opening the file" << endl;
        return -1;
    }

    //const int LINE_LEN = 80;
    //char buffer[LINE_LEN];

    string buffer;

    do{
        getline(cin, buffer, '\n');
        //cin >> buffer;
        if(buffer != "Quit"){
            fstrm << buffer << endl;
        }
    } while(buffer != "Quit");

    // Close file
    fstrm.close();
    
    return 0;
}