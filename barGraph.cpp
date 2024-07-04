#include <iostream>
using namespace std;
int main()
{
    int stores = 5;
    int sales[5];
    float sale = 0;

    for (int i = 0; i < stores; i++)
    {
        cout << "Please Enter the sale of store # " << i + 1;
        cin >> sale;
        sales[i] = sale / 100;
    }
    for (int c = 0; c < stores; c++)
    {
        cout << "Store #" << c + 1;
        for (int f = 0; f < sales[c]; f++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}