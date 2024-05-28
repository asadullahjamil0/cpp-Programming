#include <iostream>

using namespace std;
int main()
{
    int penny, nickel, dime, quarter;
    double total = 0;

    cout << "Please enter the pennies: ";
    cin >> penny;
    cout << "Please enter the nickel: ";
    cin >> nickel;
    cout << "Please enter the dime: ";
    cin >> dime;
    cout << "Please enter the quarter: ";
    cin >> quarter;

    total = (penny * 0.01) + (nickel * 0.05) + (dime * 0.1) + (quarter * 0.25);
    if (total == 1)
    {
        cout << "Congratulations! Your entered amount is exactly 1$";
    }
    else if (total > 1)
    {
        cout << "Your entered amount is more than 1$";
    }
    else
    {
        cout << "Your entered amount is less than 1$";
    }
}