const int MaxNameSize = 32;

class Student{
    public:
        // Class Functions
        void setId(int id);
        int getId(){ return id; }

    void setFirstName(const char *firstName);
    const char *getFirstName() { return firstName; };

    // Private Variables
    private:
        char firstName[MaxNameSize];
        char lastName[MaxNameSize];

        int id;

        short age;

        float gpa;
};