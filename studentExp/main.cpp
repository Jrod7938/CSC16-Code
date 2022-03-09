#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Student s;

    // Testing with an invalid id
    s.setId(10000000);

    // Testing with a valid id
    s.setId(70300000);

    // Test set id
    s.setFirstName("Edith");

    // test get first name
    cout << s.getFirstName() << endl;

    return 0;
}