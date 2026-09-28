#include <iostream>
using namespace std;

class Area
{
public:
    // Area of square
    int calculateArea(int side)
    {
        return side * side;
    }

    // Area of rectangle
    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }

    // Area of circle
    float calculateArea(float radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area obj;

    cout << "Area of Square = " << obj.calculateArea(5) << endl;
    cout << "Area of Rectangle = " << obj.calculateArea(10, 5) << endl;
    cout << "Area of Circle = " << obj.calculateArea(3.0f) << endl;

    return 0;
}