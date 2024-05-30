/* This program calculates the discount amount for a customer. As different discount
percentage applies on different amount so program is using if statement for deciding
which discount is applicable and display the result. */

#include <iostream>

using namespace std;
int main()
{
    double discount = 0;
    double billAmount = 0;
    double netPayable = 0;

    cout << "Please Enter your bill's amount: ";
    cin >> billAmount;
    // If-statement for above 5000 users
    if (billAmount > 5000)
    {
        discount = billAmount * (15.0 / 100);
        netPayable = billAmount - discount;
        cout << "Discount of 15 percent on your bill is: " << discount << endl;
        cout << "Your discounted bill is: " << netPayable << endl;
    }
    // If-statement for below 5000 users
    else
    {
        discount = billAmount * (10.0 / 100);
        netPayable = billAmount - discount;
        cout << "Discount of 10 percent on your bill is: " << discount << endl;
        cout << "Your discounted bill is: " << netPayable << endl;
    }
    return 0;
}