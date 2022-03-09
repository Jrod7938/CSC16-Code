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
        if(firstName[i]==0)
            break;  
        
    }
}