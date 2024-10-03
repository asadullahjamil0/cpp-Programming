#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "Before = " << vec.size() << endl;
    vec.push_back(1);
    cout << "After push_back = " << vec.size() << endl;
    // vector<int> hel = {1, 2, 3};
    // cout << hel[0] << endl;
    // vector<int> wor(4, 3);
    vector<char> wor = {'a', 'b', 't', 'g', 'u'};
    // These are some functions we can perform to vecotr
    wor.pop_back();
    cout << "This is for front() " << wor.front() << endl;
    cout << "This is for back() " << wor.back() << endl;
    cout << "This is for at() " << wor.at(2) << endl;
    for (char val : wor)
    {
        cout << val << endl;
    }

    return 0;
}