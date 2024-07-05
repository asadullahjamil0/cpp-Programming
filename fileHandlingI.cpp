#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // ofstream write("D:/New folder (2)/text.txt");
    // write << "I am studying file handling......." << endl;
    // write << "Hello my name is Asadullah jamil";

    string st;
    ifstream read("text.txt");
    getline(read, st);
    read >> st;
    cout << st;

    return 0;
}