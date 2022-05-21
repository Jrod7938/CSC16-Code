/*
    Write a C++ program that asks the user for input of N numbers reads the N numbers from the user and displays them in LIFO order (30 Points).
    You must use an stl data structure (such as a vector or better) to store and iterate on
    and display the numbers
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> numbers;

    int num = 0;

    cout << "Enter a list of numbers: -1 to stop" << endl;
    while(num!=-1){
        cin >> num;

        if(num!=-1){
            numbers.push(num);
        }
    }
    while(!numbers.empty()){
        cout << numbers.top() << endl;
        numbers.pop();
    }
    

    return 0;
}