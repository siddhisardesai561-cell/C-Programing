#include <iostream>
using namespace std;

float area(float radius)
{
    return 3.14159 * radius * radius;
}
float circumference(float radius)
{
    return 2 * 3.14159 * radius;
}

int main()
{
    float radius;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area = " << area(radius) << endl;
    cout << "Circumference = " << circumference(radius);

    return 0;
}