#include <iostream>

using namespace std;
int main()
{
    int row;
    int col;
    const int maxRows = 3;
    const int maxCols = 3;
    int a[maxRows][maxCols];
    for (row = 0; row < maxRows; row++)
    {
        for (col = 0; col < maxCols; col++)
        {
            cout << "Please enter the value of element number: " << row << ' ' << col;
            cin >> a[row][col];
        }
    }
    

    return 0;
}
