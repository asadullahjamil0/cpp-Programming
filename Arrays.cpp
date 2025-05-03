
#include <iostream>

using namespace std;
int main()
{
    // array example
    int marks[4] = {23, 45, 56, 89, 786};
    int mathMarks[4];
    mathMarks[0] = 234;
    mathMarks[1] = 24563;
    mathMarks[2] = 2523;
    mathMarks[3] = 454;
    cout << "these are math marks";
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << mathMarks[4] << endl;

    cout << "these are marks" << endl;

    // You can change the value of
    marks[0] = 276;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    cout << "This is from for loop" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks " << i << " is " << marks[i] << endl;
    }

    // cout << "This is from While loop" << endl;
    // // int i = 0;
    // while (i < 4)
    // {

    //     cout << "the value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }
    cout << "This is from Do-While loop" << endl;

    int i = 0;
    do
    {
        cout << "the value of marks " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 4);

    // Pointers and Arrays

    int *p = marks;
    cout << "the value of marks[0] is " << *(p++) << endl;
    cout << "the value of marks[1] is " << *(p++) << endl;
    cout << "the value of marks[2] is " << *(p++) << endl;
    cout << "the value of marks[3] is " << *(p++) << endl;
    // cout << "the value of *P is " << *p << endl;
    // cout << "the value of *(p+1) is " << *(p+1) << endl;
    // cout << "the value of *(p+2) is " << *(p+2) << endl;
    // cout << "the value of *(p+3) is " << *(p+3) << endl;
    return 0;
}
