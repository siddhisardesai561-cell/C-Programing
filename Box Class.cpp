#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    float width;
    float height;

public:
    // Default Constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;

        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;

        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;

        cout << "Copy constructor called." << endl;
    }

    // Calculate Volume
    float calculateVolume()
    {
        return length * width * height;
    }

    // Display Object Information
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << calculateVolume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called. Box object destroyed." << endl;
    }
};

int main()
{
    // Object using Default Constructor
    Box box1;

    cout << "\nBox 1:" << endl;
    box1.display();

    // Object using Parameterized Constructor
    Box box2(10, 5, 4);

    cout << "\nBox 2:" << endl;
    box2.display();

    // Object using Copy Constructor
    Box box3(box2);

    cout << "\nBox 3 (Copied from Box 2):" << endl;
    box3.display();

    return 0;
}