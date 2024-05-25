#include <iostream>
using namespace std;

int main() {
    int number = 42; // Declare an integer variable
    int *pointer = &number; // Declare a pointer and assign it the address of 'number'

    // Output the value of the variable
    cout << "Value of number: " << number << endl;

    // Output the address of the variable
    cout << "Address of number: " << &number << endl;

    // Output the value stored at the pointer (dereference the pointer)
    cout << "Value at pointer: " << *pointer << endl;

    // Output the address stored in the pointer
    cout << "Address stored in pointer: " << pointer << endl;

    return 0;
}
