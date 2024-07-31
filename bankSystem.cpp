#include <iostream>
#include <string>
#include <vector>

class BankAccount
{
private:
    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string owner, double balance = 0.0) : owner(owner), balance(balance) {}

    // Function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Function to display account information
    void displayAccountInfo() const
    {
        std::cout << "Owner: " << owner << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

void displayMenu()
{
    std::cout << "Menu:\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Display Account Info\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main()
{
    std::vector<BankAccount> accounts;
    int choice;

    while (true)
    {
        displayMenu();
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string name;
            double initialDeposit;
            std::cout << "Enter account owner's name: ";
            std::cin >> name;
            std::cout << "Enter initial deposit: ";
            std::cin >> initialDeposit;
            accounts.emplace_back(name, initialDeposit);
            std::cout << "Account created successfully.\n";
            break;
        }
        case 2:
        {
            int accountIndex;
            double amount;
            std::cout << "Enter account index: ";
            std::cin >> accountIndex;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            if (accountIndex >= 0 && accountIndex < accounts.size())
            {
                accounts[accountIndex].deposit(amount);
            }
            else
            {
                std::cout << "Invalid account index.\n";
            }
            break;
        }
        case 3:
        {
            int accountIndex;
            double amount;
            std::cout << "Enter account index: ";
            std::cin >> accountIndex;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            if (accountIndex >= 0 && accountIndex < accounts.size())
            {
                accounts[accountIndex].withdraw(amount);
            }
            else
            {
                std::cout << "Invalid account index.\n";
            }
            break;
        }
        case 4:
        {
            int accountIndex;
            std::cout << "Enter account index: ";
            std::cin >> accountIndex;
            if (accountIndex >= 0 && accountIndex < accounts.size())
            {
                accounts[accountIndex].displayAccountInfo();
            }
            else
            {
                std::cout << "Invalid account index.\n";
            }
            break;
        }
        case 5:
            std::cout << "Exiting program.\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
