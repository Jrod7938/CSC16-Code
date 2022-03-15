#ifndef SCHOOL_H
#define SCHOOL_H

#include "Student.h"

// School Max Size
const int SMAXSIZE = 100;

class School{
    public:
        School() { popCount = 0; }
        void addStudent(const Student &s){
            sArray[popCount] = s;
            popCount++;
        } 
        float calcPopGPA();
    private:
        Student sArray[SMAXSIZE];
        int popCount;

};

#endif // SCHOOL_H