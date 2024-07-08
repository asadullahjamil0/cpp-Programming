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
    Bill() : Item(""), Rate(0), Quantity(0) {}
    void setItem(string item)
    {
        Item = item;
    }
    void setRate(int rate)
    {
        Rate = rate;
    }
    void setQuantity(int quant)
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
            system("cls");
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

            ofstream out("D:/New folder (2)/Bill.txt", ios::app);
            if (!out)
            {
                cout << "\tError: File can't open!" << endl;
            }
            else
            {
                out << "\t" << b.getItem() << " : " << b.getRate() << " : " << b.getQuant() << endl
                    << endl;
            }
            out.close();
            cout << "Item added successfuly" << endl;
            Sleep(3000);
        }
        else if (choice == 2)
        {
            system("cls");
            close = true;
            cout << "\tBack to Main Menu" << endl;
            Sleep(3000);
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
        cout << "\t***********************************" << endl;
        cout << "\t\t1.Add Item." << endl;
        cout << "\t\t2.Print Bill." << endl;
        cout << "\t\t3.Exit." << endl;
        cout << "\t\tEnter Choice: " << endl;
        cin >> val;
        if (val == 1)
        {
            system("cls");
            addItem(b);
            Sleep(3000);
        }

        else if (val == 3)
        {
            exit = true;
            cout << "Exiting..." << endl;
            Sleep(2000);
        }
    }

    return 0;
}