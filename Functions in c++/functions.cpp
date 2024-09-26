#include <iostream>
using namespace std;

// for addition
// int nSum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

int mMutli(int m)
{
    int multi = 1;
    for (int i = 1; i <= m; i++)
    {
        multi *= i;
    }
    return multi;
}

// void sumNum(int x)
// {
//     x = 2 * x;
//     cout << "X = " << x << endl;
// }

// for sum of digits
// int digitSum(int n)
// {
//     int num = 0;
//     while (n > 0)
//     {
//         num += n % 10;
//         n = n / 10;
//     }
//     return num;
// }

int nCr(int n, int r)
{
    int fact_n = mMutli(n);
    int fact_r = mMutli(r);
    int fact_nmr = mMutli(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    // cout << "Sum of n Numbers: " << nSum(5) << endl;
    // cout << "factorial of n Number: " << mMutli(10) << endl;
    // int x = 5;
    // sumNum(5);
    // cout << "X = " << x << endl;

    // for calculation of sum of digits of a number
    // int n;
    // cout << "Enter number to get a Sum of a digit: ";
    // cin >> n;
    // cout << "Your digit's sum is: " << digitSum(n) << endl;

    // For binomial cofficient nCr
    cout << "Binomial cofficient for your numbers is: " << nCr(6, 3);

    return 0;
}