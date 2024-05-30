#include <iostream>

using namespace std;
int main()
{
    int factorial, number;
    factorial = 1;
    number = 1;

    cout << "Please enter the number for factorial: ";
    cin >> number;
    while (number > 1)
    {
        factorial = factorial * number;
        number -= 1;
    }
    cout << "The factorial is: " << factorial;

    return 0;
}