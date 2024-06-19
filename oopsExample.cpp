#include <iostream>
using namespace std;

class student
{
public:
    int rollNo, weight, classNo;
    string name;

    void detailOperation()
    {
        cout << "Student's name is: " << name << endl;
        cout << "Student's Roll No is: " << rollNo << endl;
        cout << "Student's Class No is: " << classNo << endl;
        cout << "Student's weight is: " << weight << endl;
    }
};

int main()
{
    student s1;

    s1.name = "AsadUllah Jamil";
    s1.rollNo = 4646;
    s1.classNo = 8;
    s1.weight = 63;

    s1.detailOperation();
    return 0;
}