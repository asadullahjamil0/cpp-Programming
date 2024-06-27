#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    int x, y;

public:
    friend void sumPoint(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
void sumPoint(Point o1, Point o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    sumPoint(p, q);

    return 0;
}