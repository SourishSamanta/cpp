#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

const double PI = 3.14;

class shapeArea
{
public:
    // rectangle area
    float area(int l, int b)
    {
        return l * b;
    }

    // triangle area
    float area(float base, double height)
    {
        return 0.5 * base * height;
    }

    // circle area
    float area(float rad)
    {
        return PI * pow(rad, 2);
    }

    // square area
    float area(int side)
    {
        return pow(side, 2);
    }
};

int main()
{
    shapeArea shape;

    int l = 5, b = 2;
    int recArea = shape.area(l, b); // Rectangle area
    cout << "Area of rectangle: " << recArea << endl;

    float base = 25.0;
    double height = 23.534;
    float triArea = shape.area(base, height); // Triangle area
    cout << "Area of triangle: " << triArea << endl;

    float radius = 10.0;
    float circleArea = shape.area(radius); // Circle area
    cout << "Area of circle: " << circleArea << endl;

    int side = 4;
    float squareArea = shape.area(side); // Square area
    cout << "Area of square: " << squareArea << endl;

    return 0;
}
