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
int main()
{

    return 0;
}