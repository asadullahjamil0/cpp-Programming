#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a = 45;
    // cout<<"Value of a was: "<<a<<endl;
    // a = 567;
    // cout<<"Value of is: "<<a<<endl;

    // But we cannot change const variables
    // const int b = 32;
    // b = 33;

    // Manioulators

    // int a = 2, b = 78, c = 1256;

    // cout << "The value of a wihtout setw is: " << a << endl;
    // cout << "The value of b wihtout setw is: " << b << endl;
    // cout << "The value of c wihtout setw is: " << c << endl;

    // cout << "The value of a wihtout setw is: " << setw(4) << a << endl;
    // cout << "The value of b wihtout setw is: " << setw(4) << b << endl;
    // cout << "The value of c wihtout setw is: " << setw(4) << c << endl;

    // Operator precedence

    int a = 2, b = 78,c;

    c = ((((a * 5) + b) - 45) + 79);
    cout << c;

    return 0;
}