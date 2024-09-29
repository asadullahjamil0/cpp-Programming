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

int binToDec(int binNum)
{
    int rem;
    int pow = 1;
    int ans = 0;
    while (binNum > 0)
    {
        rem = binNum % 10;
        binNum = binNum / 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main()
{
    // int decimalNum;
    // cout << "Enter decimal number to add binary number";
    // cin >> decimalNum;
    // to print more than one binary number
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << "Binary form of number" << i << " is:" << decToBin(i) << endl;
    // }

    int binNum;
    cout << "Enter binary number to convert into decimal number:";
    cin >> binNum;
    cout << "Decimal number of your provided binary number is:" << binToDec(binNum) << endl;

    return 0;
}