
#include <iostream>

using namespace std;
int main()
{
    // array example
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 234;
    mathMarks[1] = 234;
    mathMarks[2] = 234;
    mathMarks[3] = 234;
    cout << "these are math marks";
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // You can change the value of
    cout << "these are marks" << endl;

    marks[0] = 234;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    return 0;
}