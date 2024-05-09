#include <iostream>
#include <cmath>

using namespace std;

double inputTrue(double num2, char op)
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
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Operator (+, -, /, *): ";
    cin >> op;
    cout << "Enter Number 2: ";
    cin >> num2;

    if (!inputTrue(num2, op))
    {
        return 1;
    }

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

    cout << "Your expected result is: " << result << endl;
}