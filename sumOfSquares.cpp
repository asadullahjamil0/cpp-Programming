#include <iostream>

using namespace std;
int main()
{
    int sumOfSquares = 0;
    int n;
    cout<<"Please enter a positive integer number: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sumOfSquares += i * i;
    }
    cout << "The sum of squares of integers is: " << sumOfSquares;
    return 0;
}