#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;

    if (marks > 33)
    {
        cout << "Pass"<<endl;
    }
    else
    {
        cout << "fail"<<endl;
    }
    marks > 33 ? cout << "Pass" : cout << "Fail";

    return 0;
}