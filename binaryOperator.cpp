#include <iostream>
using namespace std;

class Test
{
    int num1;

public:
    Test(int n)
    {
        num1 = n;
    }
    Test operator+(Test t2)
    {
        Test t3(0);
        t3.num1 = num1 + t2.num1;
        return t3;
    }
    Test operator-(Test t2)
    {
        Test t3(0);
        t3.num1 = num1 - t2.num1;
        return t3;
    }
    void display()
    {
        cout << "Value: " << num1 << endl;
    }
};
int main()
{
    Test t1(5);
    Test t2(12);
    Test sum(0);
    sum = t1 - t2;
    sum.display();

    return 0;
}