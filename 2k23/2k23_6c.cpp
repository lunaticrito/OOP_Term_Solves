#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
    virtual bool isRect() = 0;
};
class Rectangle : public Shape
{
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area()
    {
        return length * width;
    }
    bool isRect()
    {
        return true;
    }
    void RectDraw()
    {
        cout << "Drawing rectangle" << endl;
    }
};
class Triangle : public Shape
{
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}
    float area()
    {
        return 0.5 * base * height;
    }
    bool isRect()
    {
        return false;
    }
};
int main()
{
    Shape *shapes[3];
    for (int i = 0; i < 3; i++)
    {
        if (rand() % 2 == 0)
        {
            shapes[i] = new Rectangle(4 + i, 5 + i);
        }
        else
        {
            shapes[i] = new Triangle(3 + i, 6 + i);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Area = " << shapes[i]->area() << endl;
        if (shapes[i]->isRect())
        {
            Rectangle *r = (Rectangle *)shapes[i];
            r->RectDraw();
        }
    }
    return 0;
}