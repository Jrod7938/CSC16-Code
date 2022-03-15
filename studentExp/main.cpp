#include <iostream>
#include "Student.h"
#include "School.h"

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

    // Declare a school
    School hofstra;
    // Add students
    const int NumofStudents = 10;
    for(int i=0; i<NumofStudents; i++){
        Student sx;
        sx.setId(70300000 + i);
        sx.setGPA(i % 5);
        hofstra.addStudent(sx);
    }
    // Calc GPA and Display GPA
    cout << "Hofstra GPA is: " << hofstra.calcPopGPA() << endl;

    return 0;
}