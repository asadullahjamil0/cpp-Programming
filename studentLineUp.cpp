#include <iostream>
#include <string>

using namespace std;
int main()
{
    int numOfStudents = 0;
    string nameOfStudent;
    string firstStudent;
    string lastStudent;

    while (numOfStudents < 1 || numOfStudents > 25)
    {
        cout << "Please Enter the number of students b/w 1 and 25: " << endl;
        cin >> numOfStudents;
    }
    for (int i = 1; i <= numOfStudents; i++)
    {
        cout << "Please enter name of student #" << i << endl;
        cin >> nameOfStudent;

        if (i == 1)
        {
            firstStudent = nameOfStudent;
            lastStudent = nameOfStudent;
        }
        else
        {
            if (nameOfStudent < firstStudent)
            {
                firstStudent = nameOfStudent;
            }
            else if (nameOfStudent > lastStudent)
            {
                lastStudent = nameOfStudent;
            }
        }
    }
    cout << "The student in the front line is: " << firstStudent << endl;
    cout << "The student in the last line is: " << lastStudent << endl;

    return 0;
}