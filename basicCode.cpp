#include <iostream> // Include the iostream library for input and output

int main() {
    int a, b; // Declare two integer variables
    int sum;  // Declare an integer variable to store the sum

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> a; // Read the first number and store it in variable 'a'

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> b; // Read the second number and store it in variable 'b'

    // Calculate the sum of 'a' and 'b'
    sum = a + b;

    // Output the sum
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;

    return 0; // Return 0 to indicate successful execution
}
