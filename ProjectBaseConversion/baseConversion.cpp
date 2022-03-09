/* 
    Jancarlos Rodriguez
    20220301
    Class Assignment II - Base Conversion
    Implemented an algorithm that converts from base 1-9 to base 10
*/

#include <iostream>
#include <cmath>

using namespace std;

// Converts a number from base 1-9 to base 10
int baseConversion(int number, int base, int numDigits){
    int sum = 0; // Running Total

    // Create a multidimentional array
    int conversionArray[10][2] = {
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
    };

    string num = to_string(number);

/*
    For every digit in our number
        For every row in our conversionArray
            For every column in our conversion array
                check if the digit is in the conversion array column 1
                if it is
                    multiply its column 2 value by the base raised to the power of the digit place
                    add it to the sum
*/
    for (int i = 0; i < numDigits; i++){
        // cout << "First loop i: " << i << endl;
        for (int j = 0; j < 10; j++){
            // cout << "Second loop j: " << j << endl;
            for (int k = 0; k < 1; k++){
                // cout << "Third loop k: " << k << endl;
                // cout << "Num[i] = " << num[i] << " ConversionArray[j][0] = " << conversionArray[j][0] << endl;
                if (num[i] == conversionArray[j][0]){
                    // cout << conversionArray[j][1] << endl;
                    sum += conversionArray[j][1] * pow(base, numDigits - i - 1);
                    // cout << sum << endl;
                }
            }
        }
    }
    
    return sum;
}


// Function to count the number of digits in a number
int digitCounter(int number, int baseTen){
    int num = number;
    int digits = 0;
    
    while(num){
        ++digits;
        num /= baseTen;
    }

    return digits;
}

int main(){
    // Constant variables
    const int baseTen = 10;

    // Int variables
    int num,     // Number to be converted
        n = 0,   // Number of Digits in num
        b;       // Base of the number

    cout << "Input Number: ";
    cin >> num;

    cout << "Input Base: ";
    cin >> b;

    // Calculates the number of digits in the variable num
    n = digitCounter(num, baseTen);

    //cout << "num: " << num << endl;
    //cout << "digits: " << n << endl;
    //cout << "base: " << b << endl;

    cout << num << " to base 10 is: " << baseConversion(num, b, n);

    return 0;
}