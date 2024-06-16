#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties / attribbutes
    string name;
    string dept;
    string subject;

    // method / member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "AsadUllah";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary (75000);

    cout <<"Name: "<< t1.name << endl;
    cout <<"Salary: "<< t1.getSalary() << endl;
    return 0;
}
