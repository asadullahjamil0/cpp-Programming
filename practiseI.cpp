#include <iostream>
using namespace std;

class Salary
{
    int salary;

public:
    void set()
    {
        system("cls");
        cout << "Salary Loading...." << endl;
        salary = 50000;
    }
    void disalySal()
    {
        cout << "Your current salary is: " << salary << endl;
    }
};

int main()
{
    Salary s1;
    s1.set();
    s1.disalySal();

    return 0;
}