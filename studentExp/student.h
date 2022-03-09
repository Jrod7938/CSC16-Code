const int MaxNameSize = 32;

class student{

    // Class Functions
    void setId(int id);
    int getId();

    // Private Variables
    private:
        char firstName[MaxNameSize];
        char lastName[MaxNameSize];

        int id;

        short age;

        float gpa;
};