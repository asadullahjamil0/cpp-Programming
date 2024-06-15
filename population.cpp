#include <iostream>

using namespace std;
int main()
{
    float startPopulation = 0.0;
    int numDays = 0;
    float avgIncrease = 0.0;
    float dailyPopulation = 0.0;

    cout << "Please enter starting number of organisms: ";
    cin >> startPopulation;

    while (startPopulation < 2)
    {
        cout << "The starting population cannot be less than 2. Please re-enter: ";
        cin >> startPopulation;
    }

    cout << "Please enter the number of days the population multiplies: ";
    cin >> numDays;

    while (numDays < 1)
    {
        cout << "The number of days cannot be less than 1. Please re-enter: ";
        cin >> numDays;
    }

    cout << "Please enter average daily increase in population in percentage: ";
    cin >> avgIncrease;

    while (avgIncrease < 0)
    {
        cout << "The average increase in population cannot be negative. Please re-enter: ";
        cin >> avgIncrease;
    }

    for (int i = 1; i <= numDays; i++)
    {
        // Calculate population

        dailyPopulation = ((avgIncrease / 100) * startPopulation) + startPopulation;
        // Display Calculation

        cout << "Population for day " << i << " is " << dailyPopulation << endl;
        startPopulation = dailyPopulation;
    }

    return 0;
}