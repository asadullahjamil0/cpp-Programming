#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// this will not swap a and b
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference by using pointers
int swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// this will swap by using c++ reference variables
int & swapReferVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a ;
}

int main()
{
    int x = 4, y = 5;
    swapPointer(&x, &y);
    cout << "the value of a is " << x << " and the value of b is " << y << endl;

    swapReferVar(x, y) = 766;
    cout << "the value of a is " << x << " and the value of b is " << y << endl;

    return 0;
}