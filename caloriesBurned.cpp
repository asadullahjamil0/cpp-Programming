#include <iostream>

using namespace std;
int main()
{
    // Declared data type
    float caloriesBurned;
    float caloriesPerMinute = 3.9;
    // Added for loop
    for (int i = 10; i < 30; i += 5)

    {
        caloriesBurned = i * caloriesPerMinute;
        cout << "Calories burned at " << i << " minutes is: " << caloriesBurned << endl;
    }
}