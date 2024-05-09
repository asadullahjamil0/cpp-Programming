#include <iostream>
#include <cmath>

using namespace std;

double inputTrue(double num2, char op)
// I used call by value function as it is easy for use for me
{
    if ((op == '/' || op == '%') && num2 == 0)
    {
        cout << "Error! Number can't be divided by zero ";
        return 0;
    }
}
int main()
{
    double num1, num2, result;
    char op;
    // Declared Variables to get input from user
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Operator (+, -, /, *): ";
    cin >> op;
    cout << "Enter Number 2: ";
    cin >> num2;

    // Now checking the function if input is valid or not
    if (!inputTrue(num2, op))
    {
        return 1;
    }

    // Now using switch statement to do different calculation operations
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;

    default:
        cout << "Invalid Operator!" << endl;
        return 1;
    }

    //Showing the final result on screen to user
    cout << "Your expected result is: " << result << endl;
}