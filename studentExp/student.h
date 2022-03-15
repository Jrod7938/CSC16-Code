#ifndef STUDENT_H
#define STUDENT_H

const int MaxNameSize = 32;

class Student{
    public:
        // Class Functions
        void setId(int id);
        int getId(){ return id; }

    void setFirstName(const char *firstName);
    const char *getFirstName(){ return firstName; };

    void setGPA(float gpa);
    float getGPA(){ return gpa; }

    // Private Variables
    private:
        char firstName[MaxNameSize];
        char lastName[MaxNameSize];

        int id;

        short age;

        float gpa;
};
# endif // STUDENT_H