# Functions-in-c-
In this file we discussed functions including Call by value functions,Call by Reference and recursive functions
#include <iostream>

// Functions call by value not variables
// using namespace std;
// int f(int i)
// {
//     cout<<"In function f, i = "<<i<<'\n';
//     i *= 2;
//     cout << "In funcion f, i is now = " << i<<'\n';
// };

// using namespace std;
// main()
// {
//     int i = 10;
//     cout << "In main i = " << i<<'\n';
//     f(i);
//     cout << "Back In main, i = " << i<<'\n';
// }


// Another example Functions call by value

// using namespace std;
// double square(double x)
// {
//     return x * x;
// }
// using namespace std;
// main ()
// {
//     double number;
//     cout<<"Please enter the number you want to get square: ";
//     cin>>number;
//     cout<<"The square of "<<number<<" is "<<square(number)<<'\n';
//     cout<<"The current value of number is "<<number;
// }

// Now we will see functions call by reference

using namespace std;
double square(double *x)
{
     *x = *x * *x;
}
main()
{
    double x = 123.456;
    square(&x);
    cout<<"The value of x is now "<<x;
}
