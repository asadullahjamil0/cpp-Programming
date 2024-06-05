#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double initial_balance) : balance(initial_balance) {}

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << std::endl;
        } else {
            std::cout << "Invalid deposit amount" << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: " << amount << std::endl;
        } else {
            std::cout << "Invalid withdraw amount or insufficient funds" << std::endl;
        }
    }

    // Method to display balance
    void display_balance() const {
        std::cout << "Current balance is: " << balance << std::endl;
    }
};

int main() {
    BankAccount account(1000.0);  // Initial balance

    account.display_balance();

    account.deposit(200.0);
    account.display_balance();

    account.withdraw(150.0);
    account.display_balance();

    account.withdraw(1200.0);  // Attempt to withdraw more than the balance
    account.display_balance();

    return 0;
}
