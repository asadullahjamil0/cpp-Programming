#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    int int1, int2;         // Declare integer variables
    double float1, float2;  // Declare floating-point variables

    // Prompt the user to enter two integers
    std::cout << "Enter the first integer: ";
    std::cin >> int1;
    std::cout << "Enter the second integer: ";
    std::cin >> int2;

    // Calculate the sum of the two integers using the add function
    int intSum = add(int1, int2);

    // Output the sum of the integers
    std::cout << "The sum of " << int1 << " and " << int2 << " is " << intSum << std::endl;

    // Prompt the user to enter two floating-point numbers
    std::cout << "Enter the first floating-point number: ";
    std::cin >> float1;
    std::cout << "Enter the second floating-point number: ";
    std::cin >> float2;

    // Calculate the sum of the two floating-point numbers using the add function
    double floatSum = add(float1, float2);

    // Output the sum of the floating-point numbers
    std::cout << "The sum of " << float1 << " and " << float2 << " is " << floatSum << std::endl;

    return 0; // Return 0 to indicate successful execution
}