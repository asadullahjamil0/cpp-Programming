#include <iostream>
using namespace std;

int decToBin(int decimalNum)
{
    int ans = 0;
    int pow = 1;
    while (decimalNum > 0)
    {
        int rem;
        rem = decimalNum % 2;
        decimalNum = decimalNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    // int decimalNum;
    // cout << "Enter decimal number to add binary number";
    // cin >> decimalNum;
    // to print more than one binary number
    for (int i = 1; i <= 10; i++)
    {
        cout << "Binary form of number" << i << " is:" << decToBin(i) << endl;
    }

    return 0;
}