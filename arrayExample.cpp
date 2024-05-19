#include <iostream>

using namespace std;

void getInput(double sal[][2], int numEps);

int main()
{
    const int arraySize = 100;
    double sal[arraySize][2];
    int lucky[arraySize] = {0};
    int numEmps;
    cout << "Enter the number of employees in the company: ";
    cin >> numEmps;
    cout << '/n';
    getInput(sal, numEmps);
}

void getInput(double sal[][2], int numEps)
{
    for (i = 0; i < numEps; i++)
    {
        cin >> sal[i][0];
    }
}