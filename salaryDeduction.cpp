#include <iostream>

using namespace std;
int main()
{
    int salary;
    float deduction, netPayable;

    cout << "Please enter your salary: ";
    cin >> salary;
    switch (salary / 10000)
    {
    case 0:
        deduction = 0;
        netPayable = salary;
        cout << "Your netPayable amount is: " << netPayable << " and your deducted salary is: " << deduction;
        break;

    case 1:
        deduction = 1000;
        netPayable = salary - deduction;
        cout << "Your netPayable amount is: " << netPayable << " and your deducted salary is: " << deduction;
        break;
    default:
        deduction = salary * (7 / 100);
        netPayable = salary - deduction;
        cout << "Your netPayable amount is: " << netPayable << " and your deducted salary is: " << deduction;
        return 0;
    }
}