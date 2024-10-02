#include <iostream>
using namespace std;

void checkArr(int arr[], int size)
{
    cout << "In function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr_1[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {

        if (arr_1[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Reverse array function
void reverseArray(int arr_2[], int start, int end)
{
    while (start <= end)
    {
        swap(arr_2[start], arr_2[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {2, 3, 4};
    checkArr(arr, 3);

    cout << "In main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Linear search in array
    int arr_1[] = {2, 3, 4, 5, 7, 8};
    int target = 7;
    cout << linearSearch(arr_1, 6, target) << endl;

    // Reversed array
    int arr_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 8;

    reverseArray(arr_2, start, end);
    cout << "Your reversed array is:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr_2[i] << " ";
    }

    return 0;
}