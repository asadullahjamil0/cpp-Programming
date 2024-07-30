#include <iostream>
using namespace std;

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of array elements
double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Declare the array
    int arr[size];

    // Input the elements of the array
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the elements
    int sum = calculateSum(arr, size);

    // Calculate the average of the elements
    double average = calculateAverage(sum, size);

    // Output the sum and average
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
