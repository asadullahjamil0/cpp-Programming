#include <iostream>

using namespace std;
int main()
{
    float radius, diameter, cirumference, area;
    float pie = 3.14;

    // Prompt to get radius from user
    cout << "Please enter the radius of a circle: ";
    cin >> radius;
    diameter = radius * 2;
    cirumference = 2 * pie * radius;
    area = (pie) * (radius * radius);

    // Now display on screeen
    cout << "Diameter of circle is " << diameter << endl;
    cout << "Circumference of circle is " << cirumference << endl;
    cout << "Area of circle is " << area << endl;
    return 0;
}