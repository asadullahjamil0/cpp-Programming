#include <iostream>

using namespace std;
int main()
{
    char c;
    int tryNum = 0;

    do
    {
        cout << "Please enter character from a-z to guess character: ";
        cin >> c;
        if (c == 'z')
        {
            cout << "Congratulations! you guessed the correct answer.";
        }
        else
        {
            tryNum += 1;
        }

    } while (tryNum <= 5 &&c !='z');

    return 0;
}