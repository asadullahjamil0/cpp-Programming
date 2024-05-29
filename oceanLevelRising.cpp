#include <iostream>

using namespace std;
int main()
{
    float oceanLevelRising;
    float risePerYear = 1.5;

    for (int i = 1; i <= 25; i++)
    {
        oceanLevelRising = i * risePerYear;
        cout << "Ocean rised " << oceanLevelRising << "mm " << " at year " << i << endl;
    }
}