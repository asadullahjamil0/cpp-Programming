#include <iostream>
#include <cstring>
//  Today we wiil discuss about 1.Strings(character arrays)

using namespace std;
int main()
{
    char name[100];
    cout << "Please Enter your name: ";
    cin >> name;

    cout << "printing character by character: ";
    for (int i = 0; name[i] != '\0'; i++)
    {
        cout << name[i];
    }
    cout << endl;

    int length = strlen(name);

    cout << "The length of the name is: " << length << endl;
    for (int i = 0; i < length / 2; i++)
    {
        char temp = name[i];
        name[i] = name[length - 1 - i];
        name[length - 1 - i] = temp;
    }

    cout << "Your reversed name is: " << name << endl;

    return 0;
}