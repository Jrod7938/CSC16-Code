#include <iostream>
#include "Student.h"

using namespace std;

void Student::setId(int id){
    if(id>700000000){
        this->id = id;
    } else {
        cout << "Wrong ID number" << endl;
    }
}

void Student::setFirstName(const char *firstName){
    for(int i = 0; i<MaxNameSize; i++){
        
        this->firstName[i] = firstName[i];

        // check if we reached the end of string
        if(firstName[i] == 0){ break; }  
    }
}

void Student::setLastName(const char *lastName){
    for(int i=0; i<MaxNameSize; i++){
        this->lastName[i] = lastName[i];

        if(firstName[i] == 0){ break; }
    }
}

void Student::setGPA(float gpa){
    if (gpa>=0.0 && gpa<=4.0){
        this->gpa = gpa;
    } else {
        cout << "Bad GPA number: " << gpa << endl;
    }
}