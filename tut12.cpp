#include <iostream>
using namespace std;
int main()
{
    // What is a pointer? >>>> Data type which holds the address of other data types
    int a = 3;
    int *b = &a;
    // &a -----> (Address of) Operator
    cout << "The address of the a is " << &a << endl;
    cout << "The address of the a is " << b << endl;

    // * ------> (Value at) Deferencing operator
    cout << "The value at address b is " << *b << endl;

    int **c = &b;
    cout << "The address of the b  is " << &b << endl;
    cout << "The address of the b  is " << c << endl;
    cout << "The value at adress value_at(value_at(c)) is " << **c << endl;

    return 0;
}