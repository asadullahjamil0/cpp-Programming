// This is the first real world problem in my c++ programming course

#include <iostream>

using namespace std;

void getInput(double sal[][2], int numEmps);
void calNetSal(double sal[][2], int numEmps);
void findUnluckies(double sal[][2], int numEmps, int lucky[]);
void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr);
void printUnluckies(int lucky[], int numEmps);

int main(void)
{
    const int arraySize = 100;
    double sal[arraySize][2];
    int lucky[arraySize] = {0};
    int numEmps;

    // Read the number of employees
    cout << "Enter the number of employees in the company: ";
    cin >> numEmps;
    cout << '\n';
    // Read the gross salaries of employees into the array 'sal'
    getInput(sal, numEmps);

    // Calculate the net salary of emoloyees and store them in the array
    cout << "\n\ncalculating the net salaries...";
    calNetSal(sal, numEmps);

    // Find the unlucky employees
    cout << "\n\n Loading the unlucky employee...";
    findUnluckies(sal, numEmps, lucky);
    // Print the unlucky employee numbers
    cout << "\n\n Printing the unlucky employees...";
    printUnluckies(lucky, numEmps);
}

void getInput(double sal[][2], int numEmps)
{
    for (int i = 0; i < numEmps; i++)/*numEmps local for this function*/
    {
        cout<<"\n Please enter the gross salary for employee no."<<i<<": ";
        cin >> sal[i][0];
    }
}

void calNetSal(double sal[][2], int numEmps)
{
    for (int i = 0; i < numEmps; i++) /*this numEmps is local to this function*/
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

void findUnluckies(double sal[][2], int numEmps, int lucky[])
{
    for (int i = 0; i < numEmps; i++)
    {
        if (sal[i][0] >= 0 && sal[i][0] <= 5000)
        { /*No need to check unlucky employee here*/
            ;
        }
        else if (sal[i][0] >= 5001 && sal[i][0] <= 10000)
        {
            markIfUnlucky(sal, numEmps, lucky, 5001, i);
        }
        else if (sal[i][0] >= 10001 && sal[i][0] <= 20000)
        {
            markIfUnlucky(sal, numEmps, lucky, 10001, i);
        }
        else if (sal[i][0] >= 20001)
        {
            markIfUnlucky(sal, numEmps, lucky, 20001, i);
        }
    }
}

void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr)
{
    for (int i = 0; i < numEmps; i++)
    {
        /* See if the condition below, it will mark the employee unlucky even if an employee in the getting the same amount of net salary as that of a person in the lower tax bracke */
        if (sal[i][0] < upperBound && sal[i][1] >= sal[empNbr][1])
        {
            lucky[empNbr] = 1; /*Employee marked as lucky break*/
        }
    }
}

void printUnluckies(int lucky[], int numEmps)
{
    for (int i = 0; i < numEmps; i++)
    {
        if (lucky[i] == 1)
        {
            cout << "\n Employee No.: " << i;
        }
    }
}