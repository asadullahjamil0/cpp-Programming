#include <iostream>
using namespace std;

// for addition
int nSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int mMutli(int m)
{
    int multi = 1;
    for (int i = 1; i <= m; i++)
    {
        multi *= i;
    }
    return multi;
}

void sumNum(int x)
{
    x = 2 * x;
    cout << "X = " << x << endl;
}

int main()
{
    cout << "Sum of n Numbers: " << nSum(5) << endl;
    cout << "factorial of n Number: " << mMutli(10) << endl;
    int x = 5;
    sumNum(5);
    cout << "X = " << x << endl;

    return 0;
}