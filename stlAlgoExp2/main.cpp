#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool display(const vector<int> &myVector_){
    for(int i=0; i<myVector_.size(); i++){
        cout << myVector_[i] << " ";
    }
    cout << endl;

    return true;
}

int main(){
    int CONSTNUM = 10;
    vector<int> myVector;

    for(int i=0; i<CONSTNUM; i++){
        int num;
        cin >> num;
        myVector.push_back(num);
    }

    // Printing my vector
    cout << "My Vector: ";
    display(myVector);

    // sorting the values of a vector
    sort(myVector.begin(), myVector.end());
    cout << "My Vector Sorted: ";
    display(myVector);

    // Reversing the values of a vector
    reverse(myVector.begin(), myVector.end());
    cout << "My Vector Sorted and Reversed: ";
    display(myVector);
    cout << endl;
    
    return 0;
}