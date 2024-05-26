#include <iostream>

using namespace std;
int main()
{
    int y[10];
    int *yptr;
    yptr = y;

    cout << "The memory address of YPTR is: " << yptr << endl;
    yptr++;
    cout << "The memory address of YPTR is: " << yptr << endl;

    // Assigning the address of elements

    cout << "Accessing the 6th element of array as y[5]= " << y[5] << endl;
    cout << "Accessing the 6th element of array as yptr[5]= " << yptr[4] << endl;
    cout << "Accessing the 6th element of array as *(yptr + 5)= " << *(yptr + 4) << endl;

    // Finding address by for loop
    for (int i = 0; i < 10; i++)
    {
        cout << "The address of element at position: " << i << " " << yptr << endl;
        yptr++;
    }
}