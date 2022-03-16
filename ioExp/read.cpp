/*
    Jancarlos Rodriguez
    20220315
    Opening and Reading files in C++
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
    ifstream fstrm;

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
        // fstrm >> buffer;
        getline(fstrm, buffer, '\n');
        if(fstrm.eof()){ break; }
        cout << buffer;
    } while(true);

    // Close file
    fstrm.close();
    
    return 0;
}