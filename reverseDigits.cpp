#include <iostream>

using namespace std;
int main()
{
    int number, digit;
    // Get 4-digit numbet from user
    cout << "Please enter 4-digit number: ";
    cin >> number;

    // Get the first number for reverse
    digit = number % 10;
    cout << "The digits are " << digit;

    number = number / 10;

    // Get the second number for reverse
    digit = number % 10;
    cout << digit ;

    number = number / 10;
    // Get the remaining two number for reverse
    digit = number % 10;
    cout << digit ;


    number = number / 10;
    digit = number % 10;
    cout <<  digit;
}