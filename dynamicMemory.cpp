#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;

    cout << "Please enter number of values you want to store(size of array): " << endl;
    cin >> size;

    ptr = new int[size];

    cout << "Please the values you want to store: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    cout << "Values you stored are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }

    delete[] ptr;

    return 0;
}