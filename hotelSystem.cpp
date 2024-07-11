#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
#include <string>
using namespace std;


class Hostel
{
private:
    string Name;
    int Rent, Bed;

public:
    Hostel(string name, int rent, int bed)
    {
        Name = name;
        Rent = rent;
        Bed = bed;
    }

    string getName()
    {
        return Name;
    }
    int getRent()
    {
        return Rent;
    }
    int getBed()
    {
        return Bed;
    }
};

class Student
{
private:
    string Name,RollNo, Address;

public:
    Student() : Name(""), RollNo(""), Address("") {};
    setName(string name)
    {
        Name = name;
    }
    setRollNo(string rollNo)
    {
        RollNo = rollNo;
    }
    setAddress(string address)
    {
        Address = address;
    }

    string getName()
    {
        return Name;
    }
    string getRollNo()
    {
        return RollNo;
    }
    string getAddress()
    {
        return Address;
    }
};

int main()
{
    Hostel h("3star", 5000, 2);
    Student s;
    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;
        cout << "Welcome to Hostel Accommodation System" << endl;
        cout << "**************************************" << endl;
        cout << "\t1.Reserve a bed" << endl;
        cout << "\t2.Exit" << endl;
        cout << "\tEnter Choice: ";
        cin >> val;
        if (val == 1)
        {
            system("cls");
            string name, rollNo, address;

            cout << "\tEnter Name of Student: ";
            cin >> name;
            s.setName(name);

            cout << "\tEnter RollNo of Student: ";
            cin >> rollNo;
            s.setRollNo(rollNo);

            cout << "\tEnter Address of Student: ";
            cin >> address;
            s.setAddress(address);
        }
    }

    return 0;
}