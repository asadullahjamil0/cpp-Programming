#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int intSum = add(5, 5);
    int doubleSum = add(5.5, 5.5);

    cout << "Int sum is: " << intSum<< endl;
    cout << "double sum is: " << doubleSum << endl;
}