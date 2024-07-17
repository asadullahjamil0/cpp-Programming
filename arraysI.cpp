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

    cout << "The original matrix is: " << endl;
    for (row = 0; row < maxRows; row++)
    {
        for (col = 0; col < maxCols; col++)
        {
            cout << a[row][col] << '\t';
        }
        cout << endl;
    }
    cout << "The reeverse row matrix is: " << endl;
    for (row = maxRows - 1; row >= 0; row--)
    {
        for (col = 0; col < maxCols; col++)
        {
            cout << a[row][col] << '\t';
        }
        cout << endl;
    }
    cout << "The reverse column matrix is: " << endl;
    for (row = 0; row < maxRows; row++)
    {
        for (col = maxCols - 1; col >= 0; col--)
        {
            cout << a[row][col] << '\t';
        }
        cout << endl;
    }

    int transposed[maxCols][maxRows];
    for (row = 0; row < maxRows; row++)
    {
        for (col = 0; col < maxCols; col++)
        {
            transposed[col][row] = a[row][col];
        }
    }

    // Printing the transposed matrix
    cout << "The transposed matrix is: " << endl;
    for (row = 0; row < maxCols; row++)
    {
        for (col = 0; col < maxRows; col++)
        {
            cout << transposed[row][col] << '\t';
        }
        cout << endl;
    }

    return 0;
}
