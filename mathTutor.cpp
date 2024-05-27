#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int randNum1, randNum2;
    int userTotal, computerTotal;

    // get system time
    int seed = time(0);

    // seed into random number generator
    srand(seed);

    // generate two random numbers between 1 and 100
    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;

    // calculate the computer's total
    computerTotal = randNum1 + randNum2;

    // display the first random number
    cout << setw(5) << randNum1 << endl;

    // display the second random number
    cout << setw(3) << "+" << randNum2 << endl;

    // display the separator line
    cout << "---------------" << endl;

    // prompt the user to enter the total
    cout << "Please Enter your total: ";
    cin >> userTotal;

    // check if the user's total matches the computer's total
    if (userTotal == computerTotal)
    {
        cout << "Congratulations, you calculated the right answer" << endl;
    }
    else
    {
        cout << "Sorry! Wrong answer. Computer's total is: " << computerTotal << endl;
    }

    return 0;
}
