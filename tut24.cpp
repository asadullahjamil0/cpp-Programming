#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    string name;
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id of this employee is: " << id << " and this is employee no: " << count << endl;
        cout << "Name of this employee is: " << name << endl;
    }
    static void getCount(void)
    {
        // cout << id; Through an error
        cout << "The value of count is: " << count << endl;
    }
};

int Employee ::count; /* Default value of static variable is 0*/
int main()
{
    Employee asad, noman, ijaz;
    // count is a Static data members
    // asad.id = 1;
    // asad.count = 1; cannot do this as id and count are privates

    asad.name = "AsadUllah";
    asad.setData();
    asad.getData();
    Employee ::getCount();

    noman.name = "Nouman";
    noman.setData();
    noman.getData();
    Employee ::getCount();

    ijaz.name = "Ijaz";
    ijaz.setData();
    ijaz.getData();
    Employee ::getCount();

    return 0;
}