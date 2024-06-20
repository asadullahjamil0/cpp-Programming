#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }

    // destructor
    ~Student()
    {
        cout << "Hi, i delete everything" << endl;
        delete cgpaptr;
    }

    void
    getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};
int main()
{
    Student s1("AsadUllah jamil", 3.6);
    s1.getInfo();
    return 0;
}