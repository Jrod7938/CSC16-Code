/*
    Write a C++ program that asks the user for input of N numbers reads the N numbers from the user and displays them in LIFO order (30 Points).
    You must use an stl data structure (such as a vector or better) to store and iterate on
    and display the numbers
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    cout << "Please Enter A List of Numbers, -1 to stop" << endl;
    int data = 0;

    while(data!=-1){
        cin >> data;
        if(data!=-1){
            s.push(data);
        }
    }
    
    cout << "The Reversed List of Numbers:" << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    } 

    return 0;
}