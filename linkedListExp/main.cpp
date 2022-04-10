/*
    Jancarlos Rodriguez
    Program demonstrates the use of linked lists in C++
    20220410
*/

#include <iostream>
#include "List.h"

using namespace std;

int main(){
    // Create a list
    List list1;
    
    const int N = 10;
    const int INSERTEDNUM = 18;
    const int DELETENUM = 6;

    // Insert elements to the list
    for(int i=0; i<N; i++){
        list1.insert(i);
    }

    // Display the list
    cout << "Test 1: Display list 1" << endl;
    list1.display(cout);
    cout << "-----------------" << endl;

    // Test 2: use insert by pos
    List list2;
    for(int i=0; i<N; i++){
        list2.insert(i, i);
    }

    // Display the list
    cout << "Test 2: Display list 2" << endl;
    list2.display(cout);
    cout << "-----------------" << endl;
    
    // Test 3: Insert at position 0
    cout << "Test 3: Inserting at position 1" << endl;
    
    list2.insert(10,0);
    list2.display(cout);

    // Test 4: delete by pos
    cout << "-----------------" << endl;
    for(int i=0;i<N/2;i++){
        cout << "Test 4: DeleteByPos: " << i << endl;
        list2.deleteByPos(i);
        list2.display(cout);
    }

    // Test 5: Insert at the end
    cout << "-----------------" << endl;
    cout << "Test 5: Insert " << INSERTEDNUM << " at the end" << endl;
    list2.insertAtEnd(INSERTEDNUM);
    
    list2.display(cout);

    // Test 6: Delete by value
    cout << "-----------------" << endl;
    cout << "Test 6: Delete " << DELETENUM << " from list 2" << endl;
    list2.deleteByValue(DELETENUM);
    list2.display(cout);

    return 0;
}