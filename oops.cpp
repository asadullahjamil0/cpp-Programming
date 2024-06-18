#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Non-parameterized
    Teacher()
    {
        dept = "Computer Science\n";
    }
    // Parameterized
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
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
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
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
    Teacher t1("AsadUllah", "Computer Science", "C++", 75000);

    t1.getInfo();
    return 0;
}
