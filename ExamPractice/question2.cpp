/*
    Use the most appropriate data structure 
    and available operations to read a list 
    of numbers and display the median
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vec;
    cout << "Enter list of numbers, -1 to stop" << endl;

    int data = 0;
    while(data!=-1){
        cin >> data;
        if(data!=-1){
            vec.push_back(data);
        }
    }

    sort(vec.begin(),vec.end());

    // calculate median
    float midVal = vec[vec.size()/2];

    // if even
    if(vec.size()%2!=0){
        midVal = vec[vec.size()/2];
    }else{ // if odd
        int midIndex = vec.size()/2;
        midVal = float((vec[midIndex-1] + vec[midIndex])/2);
    }

    cout << "Median is: " << midVal << endl; 

    return 0;
}