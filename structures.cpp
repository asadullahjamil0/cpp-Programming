#include <iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
} emp;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << din << endl;

    // union money m1;
    // m1.rice = 23;
    // m1.car = 'c';
    // cout<<m1.rice<<endl;

    emp harry;
    harry.eid = 2;
    harry.favChar = 'c';
    harry.salary = 400000;
    // cout<<harry.eid<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    return 0;
}