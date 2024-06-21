#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    string name;
    string dept;
    int age;

    void setDetail(int sal);
    void getDetail()
    {
        cout << "Name of company's employee is: " << name << endl;
        cout << "Age of employee is: " << age << endl;
        cout << "Department of employee is: " << dept << endl;
        cout << "Salary of employee is: " << salary << endl;
    }
};

void Employee ::setDetail(int sal)
{
    salary = sal;
}
int main()
{
    Employee AsadUllah;
    AsadUllah.name = "Asadullah Jamil";
    AsadUllah.age = 21;
    AsadUllah.dept = "Tech";
    AsadUllah.setDetail(90000);
    AsadUllah.getDetail();
    return 0;
}