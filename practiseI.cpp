// #include <iostream>
// using namespace std;

// class Salary
// {
//     int salary;

// public:
//     void set()
//     {
//         system("cls");
//         cout << "Salary Loading...." << endl;
//         salary = 50000;
//     }
//     void disalySal()
//     {
//         cout << "Your current salary is: " << salary << endl;
//     }
// };

// int main()
// {
//     Salary s1;
//     s1.set();
//     s1.disalySal();

//     return 0;
// }

#include <iostream>
using namespace std;

class Calculator
{
    float number1;
    float number2;

public:
    Calculator(float num1, float num2)
    {
        number1 = num1;
        number2 = num2;
    }
    void display()
    {
        cout << "Product of your numbers is: " << number1 * number2 << endl;
    }
};

int main()
{
    Calculator c1(100, 50);
    c1.display();

    return 0;
}