#include <iostream>
using namespace std;

int main()
{
    // int marks[5] = {45, 99, 78, 89, 94};
    // marks[3] = 66;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // getting data from user about cities and print them out in a sequentially
    // int num;
    // cout << "How many names of the cities you want to write:";
    // cin >> num;
    // string cityName[num];

    // for (int i = 0; i < num; i++)
    // {
    //     string name;
    //     cout << "Enter city No:" << i + 1;
    //     cin >> name;
    //     cityName[i] = name;
    // }
    // cout << "Your printed names of the cities are" << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << cityName[i] << endl;
    // }

    // It is for finding smallest number in an array
    // int arr[5] = {12, 45, 32, 67, 87};
    // int smallest = 24523;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout << "Smallest number in an arrya is: " << smallest;

    // No we will find largest number
    // int arr[5] = {12, 45, 32, 67, 87};
    // int largest = INT_MIN;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout << "Larest number ns an arrya is: " << largest;

    // find both at the same time
    int arr[5] = {12, 45, 32, 67, 87};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Smallest number of an array is: " << smallest << endl;
    cout << "Largest number of an array is: " << largest << endl;
    return 0;
}