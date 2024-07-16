#include <iostream>
using namespace std;

int fab(int n)
{
    if (n < 2)
    {
        return 1;
    }
    
    return fab(n - 2) + fab(n - 1);
}
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
    cout << "The fabonacci sequence at position " << a << " is " << fab(a) << endl;

    return 0;
}