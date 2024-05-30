#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        sum += i;
    }

    // while (number <= 1000)
    // {
    //     sum = sum + number;
    //     number++;
    // }
    cout << "Sum of first 1000 integers is: " << sum;
    return 0;
}