#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Triangle" << endl;
    }
};

int main()
{
    Shape *s;
    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    s = &t;
    s->draw();

    return 0;
}