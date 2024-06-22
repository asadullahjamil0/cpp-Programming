#include <iostream>
using namespace std;
int main()
{
    int number;
    int high;
    int small;
    int counter = 0;

    while (number != -99)
    {
        cout << "Please enter whole numbers. Enter -99 to quit entering: ";
        cin >> number;
        if (counter == 0)
        {
            high = number;
            small = number;
        }
        else
        {
            if (number > high && number != -99)
            {
                high = number;
            }
            else if (number < small && number != -99)
            {
                small = number;
            }
        }
        counter++;
    }
    cout << "The highest number yor entered is: " << high << endl;
    cout << "The smallest number yor entered is: " << small << endl;

    return 0;
}