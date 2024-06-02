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