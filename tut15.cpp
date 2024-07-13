#include <iostream>
using namespace std;

// Function prototype
// Type function-name(Arguements);
int sum(int a, int b);

// Empty/Void function
void g(void);
int main()
{
    int num1, num2;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your first number: ";
    cin >> num2;

    // num1 and num2 are actual parameters
    cout << "Sum of your two numbers is: " << sum(num1, num2) << endl;
    g();

    return 0;
}

int sum(int a, int b)
{
    // Formal paramters a and b takes value from actual paramteres
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello this is empty function";
}