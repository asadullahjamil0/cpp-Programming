#include <iostream>

using namespace std;
int main()
{
    int num;
    int maxCounter;
    cout << "Enter the number of you want a table: ";
    cin >> num;
    cout << "Enter a max counter up to which you want to count: ";
    cin >> maxCounter;
    for (int i = 1; i <= maxCounter; i++)
    {
        cout << num << "x" << i << " = " << num * i << endl;
    }
    return 0;
}