#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize a new account
    BankAccount(string name, int number, double initialBalance)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << ". New Balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ". New Balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Method to check the balance
    void checkBalance()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
{
    // Creating a new bank account
    BankAccount account1("John Doe", 123456, 1000.0);

    // Checking the initial balance
    account1.checkBalance();

    // Depositing money
    account1.deposit(500.0);

    // Withdrawing money
    account1.withdraw(200.0);

    // Trying to withdraw more money than available
    account1.withdraw(1500.0);

    // Checking the final balance
    account1.checkBalance();

    return 0;
}