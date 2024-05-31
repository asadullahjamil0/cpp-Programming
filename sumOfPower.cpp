#include <iostream>

double raiseToPow(double x, int power);
using namespace std;
int main()
{
    double x;
    int i;
    cout << "Please enter the number: ";
    cin >> x;
    cout << "Please enter the power of integer that you want this number to raised to: ";
    cin >> i;
    cout << x << " raised to power " << i << " is " << raiseToPow(x, i);
}

double raiseToPow(double x, int power)
{
    double result = 1.0;
    for (int i = 1; i <= power; i++)
    {
        result *= x;
    }
    return (result);
}