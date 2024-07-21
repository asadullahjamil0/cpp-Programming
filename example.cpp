#include <iostream>
using namespace std;

class CAR
{
    string colour;
    int year;

public:
    void in()
    {
        system("cls");
        cout << "Enter details: " << endl;
        cout << "Enter colour of your car ";
        getline(cin, colour);

        cout << "Enter year's model of your car: ";
        cin >> year;
        cin.ignore();
    }
    int getYear()
    {
        return year;
    }

    void out()
    {
        cout << "Your car's details are:" << endl;
        cout << "Your car's colour is:" << colour << endl;
        cout << "Your car's year is:" << year << endl;
    }
};

int main()
{
    CAR c1, c2;
    int y1, y2;
    c1.in();
    c2.in();
    y1 = c1.getYear();
    y2 = c2.getYear();

    if (y1 > y2)
    {
        c1.out();
    }
    else
    {
        c2.out();
    }

    return 0;
}