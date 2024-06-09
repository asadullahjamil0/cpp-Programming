#include <iostream>

using namespace std;
int main()
{
    int num;
    int totalNum = 0;

    cout << "Please Enter the positive number: ";
    cin >> num;
    while (num < 0)
    {
        cout << "Please Enter only positive number: " << endl;
        cin >> num;
    }

    for (int i = 0; i <= num; i++)
    {
        totalNum += i;
    }
    cout << "Total sum of your number: " << totalNum;

    return 0;
}