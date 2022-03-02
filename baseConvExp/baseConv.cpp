#include <iostream>

using namespace std;

int main(){
    // num char array to hold the digits
    const int MaxNumDigits = 10;

    char num[MaxNumDigits];
    int base;

    // input base from user
    cout << "Please enter base: ";
    cin >> base;

    // input the number into the num digit array
    cout << "Please enter number to convert: ";
    cin >> num;

    cout << "Your base is: " << base << "  Your number is: " << num << endl;

    // traverse num digit array
    for (int i=0; i<MaxNumDigits; i++){
        cout << "The char at pos " << i << " is " << num[i] << " the digit value is: " << num[i]-'0' << endl;
    }


    return 0;
}