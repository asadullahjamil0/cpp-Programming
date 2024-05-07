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
   
    
    return 0;
}