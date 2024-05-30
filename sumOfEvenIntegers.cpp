#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    int number = 1;
    int upperLimit;
    cout << "Please enter the upper limit for which you want to add: ";
    cin >> upperLimit;
    // for (int i = 1; i <= upperLimit; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
    // }

    while (number <= upperLimit)
    {
        if ((number % 2) == 0)
        {
            sum += number;
        }
        number++;
    }
    cout << "The sum of even numbers of first " << upperLimit << " integers starts from 1 is: " << sum;
    return 0;
}