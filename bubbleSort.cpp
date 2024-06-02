#include <iostream>
using namespace std;

const int arraySize = 5;

void readArray(int arr[]);
void displayArray(int arr[]);
void bubbleSort(int arr[]);

int main()
{
    int array[arraySize];

    // Read the array from the user
    cout << "Enter " << arraySize << " elements:\n";
    readArray(array);

    // Display the original array
    cout << "\nThe original array is:\n";
    displayArray(array);

    // Sort the array in ascending order using Bubble Sort
    bubbleSort(array);

    // Display the sorted array
    cout << "\nThe array after sorting is:\n";
    displayArray(array);

    return 0;
}

void readArray(int arr[])
{
    for (int i = 0; i < arraySize; ++i)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[])
{
    for (int i = 0; i < arraySize; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[])
{
    for (int i = 0; i < arraySize - 1; ++i)
    {
        for (int j = 0; j < arraySize - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
