#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 1){ return 1; } // Base Case
    return n * factorial(n-1); // Recursive case
}

bool palindrome(string str){

}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << ": " << factorial(n) <<  endl;

    return 0;
}