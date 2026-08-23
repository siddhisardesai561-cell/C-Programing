#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    void addition()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtraction()
    {
        cout << "Subtraction = " << a - b << endl;
    }
};

int main()
{
    Number n1;   // Creating object

    n1.getData();
    n1.addition();
    n1.subtraction();

    return 0;
}