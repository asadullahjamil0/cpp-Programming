#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;

class Bill
{
private:
    string Item;
    int Rate, Quantity;

public:
    Bill : Item(""), Rate(0), Quantity(0) {}
    void setItem(item)
    {
        Item = item;
    }
    void setRate(rate)
    {
        Rate = rate;
    }
    void setQuantity(quant)
    {
        Quantity = quant;
    }

    string getItem()
    {
        return Item;
    }
    int getRate()
    {
        return Rate;
    }

    int getQuant()
    {
        return Quantity;
    }
};

addItem(Bill b)
{
    bool close = false;
    while (!close)
    {
        int choice;
        cout << "\t1.Add." << endl;
        cout << "\t2.Close." << endl;
        cout << "\tEnter Choice: " << endl;
        cin >> choice;
        if (choice == 1)
        {
            string item;
            int rate, quant;

            cout << "\tEnter Item Name: ";
            cin >> item;
            b.setItem(item);

            cout << "\tEnter Rate of item: ";
            cin >> rate;
            b.setRate(rate);

            cout << "\tEnter Quantity of item: ";
            cin >> quant;
            b.setQuantity(quant);
        }
    }
}
int main()
{
    Bill b;
    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;
        cout << "\tWelcome to Super Market Bill System" << endl;
        cout << "\t\t1.Add Item." << endl;
        cout << "\t\t2.Print Bill." << endl;
        cout << "\t\t3.Exit." << endl;
        cout << "\t\tEnter Choice: " << endl;
        cin >> val;
        if (val == 1)
        {
        }
    }

    return 0;
}