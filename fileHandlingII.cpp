#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream is for write a file 
    ofstream write;
    write.open("D:/New folder (2)/practise.txt");
    write<<"i love me";


    write.seekp(7,ios::beg);
    write<<"asadullah";
    write.close();

    // ifstream is for read file which is already created
    string st;
    ifstream read;
    read.open("D:/New folder (2)/practise.txt");
    getline(read,st);
    read>>st;
    cout<<st;
    read.close();

    return 0;
}