#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    // factorial of number
    // 6! = 6*5*4*3*2*1 = 720

    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    return 0;
}