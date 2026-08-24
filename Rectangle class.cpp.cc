#include<iostream>
using namespace std;
class Rectangle
{
float length;
float breadth;
public:
Rectangle()
{
length = 0;
breadth = 0;
}
Rectangle(float l, float b)
{ 
length = l;
breadth = b;
}
Rectangle(const Rectangle &r)
{
length = l.length;
breadth = b.breadth;
}
void area()
{
cout << "Length: " << length << endl;
cout << "Breadth: " << breadth << endl;
cout << "Area: " << length * breadth << endl;
}
};
int main()
{
Rectangle r1;
cout << " Default Constructor: " << endl;
r1.area();
Rectangle r2(10, 5);

cout << " Parameterized Constructor: " << endl;
r2.area();
Rectangle r3(r2);

cout << " Copy Constructor: " << endl;
r3.area();

return 0;
}
