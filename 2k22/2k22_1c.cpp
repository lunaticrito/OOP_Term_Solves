#include <bits/stdc++.h>
using namespace std;

class Rectangle;
class Polar
{
    float r, theta;

public:
    Polar(float r, float theta) : r(r), theta(theta) {}
    Polar(Rectangle &rect);

    void toRect(float &x, float &y)
    {
        x = r * cos(theta);
        y = r * sin(theta);
    }
    void display()
    {
        cout << "Polar: (r=" << r << ", theta=" << theta << " rad)" << endl;
    }
};
class Rectangle
{
    float x, y;

public:
    Rectangle(float x, float y) : x(x), y(y) {}
    Rectangle(Polar &p) { p.toRect(x, y); }
    void toPolar(float &r, float &theta)
    {
        r = sqrt(x * x + y * y);
        theta = atan2(y, x);
    }
    void display()
    {
        cout << "Rectangle: (x=" << x << ", y=" << y << ")" << endl;
    }
};
Polar::Polar(Rectangle &rect)
{
    rect.toPolar(r, theta);
}

int main()
{
    Rectangle r(1, 1);
    Polar p1 = r; // Rectangle → Polar
    p1.display();

    Polar p(1.41, 3.14 / 4); // angle in rad
    Rectangle r1 = p;        // Polar → Rectangle
    r1.display();

    return 0;
}