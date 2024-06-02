#include <iostream>
using namespace std;

const int arraySize = 5;

void readArray(int arr[]);
void displayArray(int arr[]);
int sumOfElements(int arr[]);
int findMaximum(int arr[]);
void reverseArray(int arr[]);

int main()
{
    int array[arraySize];

    // Read the array from the user
    cout << "Enter " << arraySize << " elements:\n";
    readArray(array);

    // Display the array
    cout << "\nThe array is:\n";
    displayArray(array);

    // Calculate and display the sum of elements
    cout << "\nThe sum of elements is: " << sumOfElements(array) << endl;

    // Find and display the maximum element
    cout << "The maximum element is: " << findMaximum(array) << endl;

    // Reverse the array and display it
    reverseArray(array);
    cout << "\nThe reversed array is:\n";
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

int sumOfElements(int arr[])
{
    int sum = 0;
    for (int i = 0; i < arraySize; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int findMaximum(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < arraySize; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void reverseArray(int arr[])
{
    for (int i = 0; i < arraySize / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[arraySize - i - 1];
        arr[arraySize - i - 1] = temp;
    }
}