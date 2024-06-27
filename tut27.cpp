#include <iostream>
using namespace std;
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumCompComplex(Complex, Complex);
    int sumRealComplex(Complex, Complex);
};
class Complex
{
private:
    int a, b;
    // Individually declaring functions as friends
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire calculator class as friend;
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(3, 5);
    o2.setNumber(4, 7);

    Calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is: " << res << endl;

    int res2 = cal.sumCompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is: " << res2 << "i" << endl;

    return 0;
}