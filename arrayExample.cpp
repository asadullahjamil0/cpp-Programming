#include <iostream>

using namespace std;

void getInput(double sal[][2], int numEps);
void calNetSal(double sal[][2], int numEps);
void findUnluckies(double sal[][2], int numEps, int lucky[]);

int main()
{
    const int arraySize = 100;
    double sal[arraySize][2];
    int lucky[arraySize] = {0};
    int numEmps;

    // Read the number of employees
    cout << "Enter the number of employees in the company: ";
    cin >> numEmps;
    cout << '/n';
    // Read the gross salaries of employees into the array 'sal'
    getInput(sal, numEmps);

    // Calculate the net salary of emoloyees and store them in the array
    cout << "\n\ncalculating the net salaries...";
    calNetSal(sal, numEmps);
}

void getInput(double sal[][2], int numEps)
{
    for (i = 0; i < numEps; i++)
    {
        cin >> sal[i][0];
    }
}

void calNetSal(double sal[][2], int numEps)
{
    for (int i = 0; i < numEps; i++) /*this numEps is local to this function*/
    {

        if (sal[i][0] >= 0 && sal[i][0] <= 5000)
        { /*There is no tax deduction*/

            sal[i][1] = sal[i][0];
        }
        else if (sal[i][0] >= 5001 && sal[i][0] <= 10000)
        { /*There will be 5 % tax deduction*/

            sal[i][1] = sal[i][0] - (0.05 * (sal[i][0]));
        }
        else if (sal[i][0] >= 10001 && sal[i][0] <= 20000)
        { /*There will be 10 % tax deduction*/

            sal[i][1] = sal[i][0] - (0.10 * (sal[i][0]));
        }
        else if (sal[i][0] >= 20001)
        { /*There will be 15 % tax deduction*/

            sal[i][1] = sal[i][0] - (0.15 * (sal[i][0]));
        }
        else
        {
            /*Nothing to do here*/
        }
    }
}

void findUnluckies(double sal[][2], int numEps, int luck[]);
{
    for (int i = 0; i < numEps; i++)
    {
        if (sal[i][0] >= 0 &&sal[i][0]<=5000)
        {/*No need to check unlucky employee here*/
            
        }
        

    }
    
}