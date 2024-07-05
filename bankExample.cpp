#include <iostream>
using namespace std;

class bankAccount
{
    string accountHolderName;
    int accountNumber;
    float accountBalance;

public:
    bankAccount(string name, int number, float balance)
    {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
    }
    // Method to deposit money in bank account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            accountBalance += amount;
            cout << "Deposited amount is: $" << amount << " New balance is: $" << accountBalance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }
    // Method to withdraw money from bank account
    void withdraw(double amount)
    {
        if (amount > 0 && amount < accountBalance)
        {
            accountBalance -= amount;
            cout << "Withdraw: $" << amount << " New Balance: $" << accountBalance << endl;
        }
        else
        {
            cout << "Invalid withdraw amount or indufficient funds." << endl;
        }
    }
    void display()
    {
        cout << "Account Holder name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }
};
int main()
{
    bankAccount account1("AsadUllah", 123456, 500.00);
    bankAccount account2("Unknown", 654321, 1000.00);

    account1.display();
    account2.display();
    cout << endl;

    account1.deposit(150.00);
    account2.deposit(200.00);
    cout << endl;

    account1.withdraw(100.00);
    account2.withdraw(500.00);
    cout << endl;

    cout << "Final accounts details are: " << endl;
    account1.display();
    account2.display();

    return 0;
}