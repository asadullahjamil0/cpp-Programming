#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "Before = " << vec.size() << endl;
    vec.push_back(1);
    cout << "After push_back = " << vec.size() << endl;

    vector<char> wor = {'a', 'b', 't', 'g', 'u'};

    wor.pop_back(); // removes last element

    cout << "First element (front): " << wor.front() << endl;
    cout << "Last element (back): " << wor.back() << endl;
    cout << "Element at index 2: " << wor.at(2) << endl;

    cout << "All elements in wor:" << endl;
    for (char val : wor)
    {
        cout << val << " ";
    }
    cout << endl;

    // NEW CODE: Input vector from user
    vector<int> numbers;
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    cout << "You entered: ";
    for (int val : numbers)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clear the numbers vector
    numbers.clear();
    cout << "After clearing, numbers.size() = " << numbers.size() << endl;

    return 0;
}
