#include <iostream>

using namespace std;

int main(){
    float number = 0.0;
    while(number<5.0){
        cout << number << endl;
        number += 0.1; // Same as number = number + 0.1
    }
}