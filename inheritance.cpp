#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // Person()
    // {
    //     cout << "Parent Constructor..."<<endl;
    // }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    Student s1("AsadUllah", 21, 9320);

    s1.getInfo();

    return 0;
}