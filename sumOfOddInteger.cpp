#include <iostream>

using namespace std;
int main()
{
    int evenSum = 0;
    int oddSum = 0;
    int number = 1;
    int upperLimit;
    cout << "Please enter the upper limit for which you want to add: ";
    cin >> upperLimit;

    while (number <= upperLimit)
    {
        if ((number % 2) == 0)
        {
            evenSum += number;
        }
        else
        {
            oddSum += number;
        }
        number++;
    }
    cout << "The sum of even numbers of first " << upperLimit << " integers starts from 1 is: " << evenSum<<endl;
    cout << "The sum of odd numbers of first " << upperLimit << " integers starts from 1 is: " << oddSum;
    return 0;
}