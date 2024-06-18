#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher()
    {
        dept = "Computer Science\n";
    }
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

class account
{
private:
    string password;
    double salary;

public:
    string accountId;
    string username;
};

int main()
{
    Teacher t1;
    t1.name = "AsadUllah";
    t1.subject = "C++";
    t1.setSalary(75000);

    cout << t1.dept << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}
