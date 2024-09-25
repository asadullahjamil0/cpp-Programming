#include <iostream>
using namespace std;

int main()
{
    // Square pattern in the form of numbers,star and charcter to print
    int n;
    cout << "Enter number for print:";
    cin >> n;
    // in the form of number
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }

    // in the form of stars
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // In the form of character
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Another
    // Triangle Pattern
    // For stars
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for numbers
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // Another
    // for number
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }

    // reverse triangle pattern for number
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j >= 0; j--)
    //     {
    //         cout << j +1;
    //     }
    //     cout << endl;
    // }

    // Floyd's triangle pattern
    // For number
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // for character
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for reverse traingle
    // for number
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // for character of inverted triangle
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // pyramid pattern
    // for numbers
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }

    // Hollow diamond pattern
    // Top part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom part
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}