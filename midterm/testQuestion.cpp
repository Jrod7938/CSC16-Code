#include <iostream>

using namespace std;

int main(){
    int N;

    cout << "How many numbers to calculate?";
    cin >> N;
    
    int numArray[N];

    for(int i=0; i < N; i++){
        cout << "Input a number" << endl;
        cin >> numArray[i];
    }
    
    int biggestNum = numArray[0];
    int smallestNum = numArray[0];
    int sum = 0;

    for(int i=0; i<N; i++){
        if(numArray[i] > biggestNum){
            biggestNum = numArray[i];
        }
    } 

    for(int i=0; i<N; i++){
        if(numArray[i] < smallestNum){
            smallestNum = numArray[i];
        } 
    }
    
    for(int i=0; i<N; i++){
        sum += numArray[i];
    }

    float average = sum/N;
    
    cout << "The biggest number is: " << biggestNum << endl;
    cout << "The smallest number is: " << smallestNum << endl;
    cout << "The average is: " << average << endl;

    return 0;
}