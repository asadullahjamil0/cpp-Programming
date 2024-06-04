#include <iostream>

// Function to calculate Fibonacci numbers recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to generate Fibonacci series using the recursive Fibonacci function
void generateFibonacci(int n) {
    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    
    generateFibonacci(n);
    
    return 0;
}
