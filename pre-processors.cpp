#include <iostream>
using namespace std;
// Pre-processors and macros
// #define is pre-processor and PI is macro
#define PI (3.141569)
// we can do this also for string
#define yourName "AsadUllah jamil"

// we can also define functions
// but it is not recommended to use this as a function
#define square(r) (r * r)

// #define PI (3.141569)

int main()
{
    int r;
    cout << "Enter a radius: ";
    cin >> r;
    double Area = PI * square(r);
    cout << "Area is: " <<Area<< endl;

    // cout << "Square of your number is: " << square(a++) << endl;
    // cout << a << endl;

    // #ifdef PI
    //     cout << "value of pi is 3.141569" << endl;
    // #endif

    return 0;
}