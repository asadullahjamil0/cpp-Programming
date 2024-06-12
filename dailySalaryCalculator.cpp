// This is simple daily double salary calculator

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numberOfDays;
    double dailySalary = 0.01;
    double totalSalary = 0.0;

    cout << "Please enter the number of days you worked: ";
    cin >> numberOfDays;

    for (int i = 1; i < numberOfDays; i++) {
        totalSalary += dailySalary;
        cout << "Day " << i << ": $" << fixed << setprecision(2) << dailySalary << endl;
        dailySalary *= 2;
    }

    cout << "Total salary for " << numberOfDays << " days is $" << fixed << setprecision(2) << totalSalary << "." << endl;

    return 0;
}
