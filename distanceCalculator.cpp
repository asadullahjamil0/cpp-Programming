#include <iostream>

using namespace std;
int main()
{
    float distance = 0;
    float speed = 0;
    int time = 0;

    cout << "Please Enter a speed of vehicle: ";
    cin >> speed;
    while (speed <= 0)
    {
        cout << "Speed must be greater than zero.Please Enter speed again: ";
        cin >> speed;
    }

    cout << "Please Enter a vehicle's travel time in hours: ";
    cin >> time;
    while (time < 1)
    {
        cout << "time must be greater than zero.Please Enter time again: ";
        cin >> time;
    }
    cout << "\nHours/\tDistance Traveled\n";
    cout << "---------------------\n";
    for (int i = 1; i <= time; i++)
    {
        distance = speed * i;
        cout << i << "\t\t" << distance<<endl;
    }

    return 0;
}