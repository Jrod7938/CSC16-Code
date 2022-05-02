#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 1){ return 1; } // Base Case
    return n * factorial(n-1); // Recursive case
}

bool palindrome(string str, int bi, int ei){
    // Base Case
    if(ei<=bi){ return true; }
    else if(str[bi]==str[ei]){ return palindrome(str, bi+1, ei-1); }
    else { return false; }
}

int main(){
    string str = "racecar";

    cout << palindrome(str, 0, str.size()-1) << endl;
    return 0;
}