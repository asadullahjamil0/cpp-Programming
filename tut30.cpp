#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); /*---->this is a parameterized constructor as it accepts 2 paramters*/
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex c(4, 6); /*Emplicit Call*/
    c.printNumber();

    Complex d = Complex(3, 9); /*Emplicit Call*/
    d.printNumber();

    return 0;
}