#include <iostream>

using namespace std;
int main()
{
    float caloriesBurned;

    for (int i = 10; i < 30; i += 5)

    {
        caloriesBurned = i * 3.9;
        cout << "Calories burned at " << i << " minutes is: " << caloriesBurned << endl;
    }
}