#include <iostream>

using namespace std;
int main()
{
    int numYears = 0;
    const int MONTH = 12;
    float rainfall = 0.0;
    float angRainfall = 0.0;

    cout << "Please enter number of years: ";
    cin >> numYears;

    while (numYears < 1)
    {
        cout << "Number of years must be atleast 1. Please re-enter: ";
        cin >> numYears;
    }
}