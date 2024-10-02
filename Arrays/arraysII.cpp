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

int linearSearch(int arr_1[], int sz)
{
    for (int i = 0; i < sz; i++)
    {

        if (arr_1[i] == 5)
        {
            return i;
        }
    }
    return -1;
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
    cout << linearSearch(arr_1, 6) << endl;

    return 0;
}