// Program that shows the effect of overflow
#include <iostream>

using namespace std;

int main(){
  cout << "Size of int is:" << sizeof(int) << endl;
  cout << "Size of long is:" << sizeof(long) << endl;

  // Change the variable to int, long, or short
  long number = 1;
  for(int i=0; i<=65; i++){
    cout << number << endl;
    number = number * 2;
  }
}