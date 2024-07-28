#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    // Asking user for input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    
    // Checking for valid input
    if (number < 0) {
        std::cout << "Factorial of a negative number doesn't exist." << std::endl;
    } else {
        // Calculating factorial
        int result = factorial(number);
        std::cout << "Factorial of " << number << " = " << result << std::endl;
    }
    
    return 0;
}
