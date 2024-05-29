#include <iostream>

using namespace std;
int main()
{
    // Declaring variables
    float oceanLevelRising;
    float risePerYear = 1.5;
    int years = 25;

    for (int i = 1; i <= years; i++)
    {
        oceanLevelRising = i * risePerYear;
        cout << "Ocean rised " << oceanLevelRising << "mm " << " at year " << i << endl;
    }
}