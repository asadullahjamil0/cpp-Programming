#include <iostream>
using namespace std;

class travel
{
    int feet;
    float inches;

public:
    travel()
    {
        feet = 0;
        inches = 0;
    }
    travel(int f, float i)
    {
        feet = f;
        inches = i;
    }
    travel operator+(travel d3)
    {
        travel runCode;
        runCode.feet = feet + d3.feet;
        runCode.inches = inches + d3.inches;
        return runCode;
    }
    void display()
    {
        cout << "Inches: " << inches << endl;
        cout << "feet: " << feet << endl;
    }
};
int main()
{

    travel d1;
    travel d2(5, 3.3);
    travel d3(1, 4.2);
    d1 = d2 + d3;
    d1.display();

    return 0;
}