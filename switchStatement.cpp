#include <iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Please write the character to check if whether it vowel or consonent:"<<endl;
    cin >> character;

    switch (character)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;

    default:
        cout << "Consonent" << endl;
        break;
    }

    return 0;
}