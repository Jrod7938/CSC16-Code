
/*
    Jancarlos Rodriguez
    20220307
    Class Assignment II - Base Conversion
    Implemented an algorithm that converts from base 1-36 to base 10
*/

#include <iostream>
#include <cmath>

using namespace std;

// Function that counts the number of digits in an array
int numDigits(char num[], int MaxNumDigits){

    /*
    for every digit in our num array
        if: the digit is a int between 1 & 9, increment i (i is our digit counter)
        else if: the digit is a letter A-Z then increment i
    */
    for (int i=0; i<MaxNumDigits; i++){
        if ((num[i] >= '0' && num[i] <= '9') || (num[i] >= 'A' && num[i] <= 'Z')){
            // cout << "The char at pos " << i << " is " << num[i] << " the digit value is: " << num[i]-'0' << endl;
        } else if (num[i] >= 'A' && num[i] <= 'Z'){
            // cout << "The char at pos " << i << " is " << num[i] << " the digit value is: " << num[i]-'A' + 10 << endl;
        } else {
            return i;
        }      
    }
    return 0;
}

// Funtion that converts the users number to base 10
int baseConversion(char num[], int n, int base){
    int sum = 0; // Running total

    /*
    for every digit in our num array
        if: the digit is a int between 1 & 9, add (num * base^(digit position)) to sum
        else if: the digit is a letter A-Z then convert it to a digit and add (num * base^(digit position)) to sum
    */
    for (int i=0; i < n; i++){
        if (num[i] >= '0' && num[i] <= '9'){
            sum += (num[i]-'0') * pow(base, n-i-1);
        } else if (num[i] >= 'A' && num[i] <= 'Z'){
            sum += (num[i]-'A' + 10) * pow(base, n-i-1);
        }      
    }
    return sum; // Return converted number
}

int main(){
    const int MaxNumDigits = 15; // num char array to hold the digits

    int sum = 0;            // running total
    int n;                  // number of digits in the users input

    char num[MaxNumDigits]; // char array to store the users number
    int base;               // users base

    cout << "Please enter base: ";
    cin >> base;

    cout << "Please enter number to convert: ";
    cin >> num;

    cout << "Your base is: " << base << "  Your number is: " << num << endl;

    n = numDigits(num, MaxNumDigits);
    cout << "Number of Digits: " << n << endl;

    sum = baseConversion(num, n, base);
    cout << "Number: " << num << " Base: " << base << " converted to base 10 is: " << sum << endl;


    return 0;
}