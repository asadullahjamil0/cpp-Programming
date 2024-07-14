#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 11; i++)
    {
        for (int c = 0; c < i; c++)
        {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;

    for (int r1 = 10; r1 > 0; r1--)
    {
        for (int c1 = 0; c1 < r1; c1++)
        {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}