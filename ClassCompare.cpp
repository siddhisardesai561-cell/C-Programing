#include <iostream>
using namespace std;

class Compare
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

    void compareNumbers()
    {
        if (a > b)
            cout << a << " is greater than " << b << endl;
        else if (a < b)
            cout << a << " is smaller than " << b << endl;
        else
            cout << "Both numbers are equal." << endl;
    }
};

int main()
{
    Compare c1;   // Creating object

    c1.getData();
    c1.compareNumbers();

    return 0;
}