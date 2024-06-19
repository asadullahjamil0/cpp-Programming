#include <iostream>
#include <fstream>

/*
the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream
3. ofstream
*/

// to working with files in c++.Primarly , there are two ways to open it
// 1. Using constructor
// 2. Using open() member function

using namespace std;
int main()
{
    // this is the operation to writing in it
    // string st = "Asadullah";
    // ofstream out("sample.txt");
    // out <<st;
    string st2;

    ifstream in("sample2.txt");
    getline(in, st2);
    cout << st2;
    return 0;
}