/*
    Jancarlos Rodriguez
    Program demonstrates the use of linked lists in C++
    20220330
*/

#include <iostream>
#include "List.h"

using namespace std;

int main(){
    // Create a list
    List list1;
    
    const int N = 10;
    const int INSERTEDNUM = 18;

    // Insert elements to the list
    for(int i=0; i<N; i++){
        list1.insert(i);
    }

    // Display the list
    list1.display(cout);
    // End of first test
    cout << "-----------------" << endl;

    // Test 2: use insert by pos
    List list2;
    for(int i=0; i<N; i++){
        list2.insert(i, i);
    }

    // Display the list
    list2.display(cout);
    cout << "-----------------" << endl;
    cout << "Inserting at position 1" << endl;
    // Test 3: Insert at position 0
    list2.insert(10,0);
    list2.display(cout);
    cout << "-----------------" << endl;

    // Test 4: delete by pos
    cout << "-----------------" << endl;
    for(int i=0;i<N/2;i++){
        cout << "DeleteByPos: " << i << endl;
        list2.deleteByPos(i);
        list2.display(cout);
    }

    // Test 4: Insert at the end
    cout << "-----------------" << endl;
    list2.insertAtEnd(INSERTEDNUM);
    cout << "Insert " << INSERTEDNUM << " at the end" << endl;
    list2.display(cout);
    

    return 0;
}