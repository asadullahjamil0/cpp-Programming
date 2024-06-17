#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) 
        : accountHolder(holder), balance(initialBalance) {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Function to display account details
    void display() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a bank account object
    BankAccount account("John Doe", 1000.0);

    // Display initial account details
    account.display();

    // Perform some operations
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0);

    // Display account details again
    account.display();

    return 0;
}
