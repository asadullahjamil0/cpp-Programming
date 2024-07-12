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
    reserve()
    {
        ifstream in("D:/New folder (2)/address.txt");
        ofstream out("D:/New folder (2)/address Temp.txt");

        string line;
        while (getline(in, line))
        {
            int pos = line.find("3star");
            if (pos != string::npos)
            {
                int bed = Bed - 1;
                Bed = bed;

                stringstream ss;
                ss << bed;
                string strBed = ss.str();

                int bedPos = line.find_last_not_of(':');
                line.replace(bedPos + 1, string::npos, strBed);
            }
            out << line << endl;
        }
        out.close();
        in.close();
        remove("D:/New folder (2)/address.txt");
        rename("D:/New folder (2)/address Temp.txt", "D:/New folder (2)/address.txt");

        cout << "\tBed reserved successfully!" << endl;
    }
};

class Student
{
private:
    string Name, RollNo, Address;

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
    ofstream out("D:/New folder (2)/address.txt");
    out << "\t" << h.getName() << " : " << h.getRent() << " : " << h.getBed() << endl
        << endl;
    cout << "Hostel Data Saved" << endl;
    out.close();

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

            if (h.getBed() > 0)
            {
                h.reserve();
            }
            else if (h.getBed() == 0)
            {
                cout << "\tSorry, Bed is not available" << endl;
            }

            ofstream outFile("D:/New folder (2)/student.txt", ios::app);
            outFile << "\t" << s.getName() << " : " << s.getRollNo() << " : " << s.getAddress() << endl
                    << endl;
            Sleep(5000);
        }

        else if (val == 2)
        {
            system("cls");
            exit = true;
            cout << "Good Luck!" << endl;
            Sleep(3000);
        }
    }

    return 0;
}