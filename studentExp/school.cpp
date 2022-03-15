#include "School.h"

float School::calcPopGPA(){
    //  Traverse array and calculate their GPA
    float sum = 0;

    // Add all the students GPA
    for (int i=0; i < popCount; i++){
        sum += sArray[i].getGPA();
    }
    // Calc Average GPA
    float avg = sum / popCount;

    return avg;
}