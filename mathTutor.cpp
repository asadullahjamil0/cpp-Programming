#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;
int main ()
{
    int randNum1, randNum2;
    int userTotal, computerTotal;

    // get system time
    int seed = time(0);

    // seed into random number generator
    srand(seed);

    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;

    computerTotal = randNum1 + randNum2;
}