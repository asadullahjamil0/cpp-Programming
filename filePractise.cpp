#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data;
    ifstream read;
    read.open("D:/New folder (2)/practise.txt", ios::in);

    if (!read.is_open())
    {
        cout << "Error file opening";
        return 1;
    }
    else
    {
        read.seekg(5, ios::beg);
        while (!read.eof())
        {
            data = read.get();
            // getline(read,data);
                cout << data;
        }
    }

    return 0;
}