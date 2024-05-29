#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;
int main()
{
    char c;
    int i = 0, lc = 0, uc = 0, dig = 0, wc = 0, pun = 0, oth = 0;
    cout << "Please enter a character string and then press ENTER: ";
    // Analyse text as it is input

    while ((c = getchar()) != '\n')
    {
        if (isdigit(c))
        {
            dig++;
        }
        else if (islower(c))
        {
            lc++;
        }
        else if (isupper(c))
        {
            uc++;
        }
        else if (isspace(c))
        {
            wc++;
        }
        else if (ispunct(c))
        {
            pun++;
        }
        else
        {
            oth++;
        }
    }

    // Disaplayed the counts of different types of characters
    cout << "You typed: " << endl;
    cout << "Lower case letters = " << lc << endl;
    cout << "Upper case letters = " << uc << endl;
    cout << "Digits = " << dig << endl;
    cout << "White space = " << wc << endl;
    cout << "Punctuations = " << pun << endl;
    cout << "Others = " << oth << endl;

    return 0;
}
