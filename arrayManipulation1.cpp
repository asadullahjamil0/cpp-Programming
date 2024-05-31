#include <iostream>

const int arraySize = 3;

void readMatrix(int arr[][arraySize]);
void displayMatrix(int a[][arraySize]);
void transposedMatrix(int a[][arraySize]);

using namespace std;

int main()
{
    int a[arraySize][arraySize];

    readMatrix(a);

    // Display the matrix
    cout << "\n\nThe original matrix is:\n";
    displayMatrix(a);

    // Transpose the matrix
    transposedMatrix(a);

    // Display the transposed matrix
    cout << "\n\nThe transposed matrix is:\n";
    displayMatrix(a);

    return 0;
}

void readMatrix(int arr[][arraySize])
{
    int row, col;
    for (row = 0; row < arraySize; row++)
    {
        for (col = 0; col < arraySize; col++)
        {
            cout << "Enter element at [" << row << "][" << col << "]: ";
            cin >> arr[row][col];
        }
    }
}

void displayMatrix(int a[][arraySize])
{
    int row, col;
    for (row = 0; row < arraySize; row++)
    {
        for (col = 0; col < arraySize; col++)
        {
            cout << a[row][col] << '\t';
        }
        cout << '\n';
    }
}

void transposedMatrix(int a[][arraySize])
{
    int row, col;
    int temp;
    for (row = 0; row < arraySize; row++)
    {
        for (col = row + 1; col < arraySize; col++)
        {
            temp = a[row][col];
            a[row][col] = a[col][row];
            a[col][row] = temp;
        }
    }
}
