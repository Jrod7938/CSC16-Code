#include <iostream>
#include <map>

using namespace std;

int baseConversion(int number, int base, int numDigits){
    int sum = 0; // Running Total


    string num = to_string(number);

    for (int i = 0; i < numDigits; i++){

    }

    
    
    return sum;
}

int main(){
    const int baseTen = 10;

    int num,     // Number to be converted
        n = 0,   // Number of Digits in num
        b;       // Base of the number

    // Create a multidimentional array just like a dictionary
    map<char, int> my_conversions = {
    { '0', 0 },
    { '1', 1 },
    { '2', 2 },
    { '3', 3 },
    { '4', 4 },
    { '5', 5 },
    { '6', 6 },
    { '7', 7 },
    { '8', 8 },
    { '9', 9 },
    { 'A', 10 },
    { 'B', 11 },
    { 'C', 12 },
    { 'D', 13 },
    { 'E', 14 },
    { 'F', 15 },
    { 'G', 16 },
    { 'H', 17 },
    { 'I', 18 },
    { 'J', 19 },
    { 'K', 20 },
    { 'L', 21 },
    { 'M', 22 },
    { 'N', 23 },
    { 'O', 24 },
    { 'P', 25 },
    { 'Q', 26 },
    { 'R', 27 },
    { 'S', 28 },
    { 'T', 29 },
    { 'U', 30 },
    { 'V', 31 },
    { 'W', 32 },
    { 'X', 33 },
    { 'Y', 34 },
    { 'Z', 35 },
    };

    cout << "Input Number: ";
    cin >> num;

    cout << "Input Base: ";
    cin >> b;

    // Calculates the number of digits in the variable num, and stores it in n
    while(num){
        ++n;
        num /= baseTen;
    }

    cout << n;

    baseConversion(num, b, n);


    return 0;
}