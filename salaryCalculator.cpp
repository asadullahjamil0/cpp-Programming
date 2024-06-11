#include <iostream>

using namespace std;
int main()
{

    float amountInDollar;
    int numberOfDays;

    cout << "Please Enter the days you want to count: ";
    cin >> numberOfDays;
    for (int i = 0; i <= numberOfDays; i++)
    {
        amountInDollar = 0.01 * i;
    }
    cout << "Salary of your " << numberOfDays << " days is " << amountInDollar<<" Dollar.";
    return 0;
}