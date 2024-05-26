#include <iostream>

using namespace std;
int main ()
{
    int y [10];
    int *yptr;
    yptr = y;
    
   
    cout<<"The memory address of YPTR is: "<<yptr<<endl;
    yptr ++;
    cout<<"The memory address of YPTR is: "<<yptr<<endl;

}