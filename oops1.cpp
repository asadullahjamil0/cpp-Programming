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
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};
int main()
{
    Student s1("AsadUllah jamil", 3.6);
    Student s2(s1); /*Bilal Mujahid*/

    s1.getInfo();
    *(s2.cgpaptr) = 2.9;
    s1.getInfo();

    s2.name = "Bilal Mujahid";
    s2.getInfo();
    return 0;
}