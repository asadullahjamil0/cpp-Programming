#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    Simple(int a, bool)
    {
        data1 = a;
        data2 = 0;
        data3 = 0;
    }
    void printData();
};
void Simple ::printData()
{
    cout << "The value of data1,data2 and data3 is " << data1 << "," << data2 << " and " << data3 << endl;
}
int main()
{
    Simple s1(2, true);
    s1.printData();

    Simple s2(1, 5, 7);
    s2.printData();

    Simple s3(3, 6);
    s3.printData();

    return 0;
}