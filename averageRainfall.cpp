#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int numYears = 0;
    const int MONTH = 12;
    int totalRainfall = 0.0;
    float rainfall = 0.0;
    float angRainfall = 0.0;

    cout << "Please enter number of years: ";
    cin >> numYears;

    while (numYears < 1)
    {
        cout << "Number of years must be atleast 1. Please re-enter: ";
        cin >> numYears;
    }

    for (int i = 1; i <= numYears; i++)
    {
        for (int months = 1; months <= MONTH; months++)
        {
            cout << "Please enter the rainfall for " << months << " month: ";
            cin >> rainfall;

            while (rainfall < 1)
            {
                cout << "Rainfall must be atleast 1. Please re-enter: ";
                cin >> rainfall;
            }

            totalRainfall += rainfall;
        }
    }

    cout << "\nNumber of months: " << numYears * MONTH << endl;
    cout << "\nTotal rainfall: " << setprecision(2) << fixed<< totalRainfall << " inches." << endl;
    cout << "Average rainfall: " << setprecision(2) << fixed << totalRainfall / (numYears * MONTH) << " inches." << endl;
    return 0;
}