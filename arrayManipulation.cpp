#include <iostream>

using namespace std;
int main()
{
    int multi[5][10];
    int *ptr;     /*Normal int pointer*/
    ptr = *multi; /*Ptr is assigned the starting address of the first row*/

    // Initializing the array elements
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multi[i][j] = i * j;
        }
    }

    // Array manipulation using indexing

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << multi[i][j] << '\t';
        }
        cout << endl;
    }

    // Array manipulation using pointer
    cout << "\n Array manipulation using pointer is: \n";
    for (int k = 0; k < 50; k++, ptr++)
    {
        cout << *ptr << '\t';
    }

    return 0;
}