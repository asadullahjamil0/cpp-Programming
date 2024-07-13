#include <iostream>
using namespace std;

// Function prototype
int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your first number: ";
    cin >> num2;
    cout << "Sum of your two numbers is: " << sum(num1, num2) << endl;

    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}