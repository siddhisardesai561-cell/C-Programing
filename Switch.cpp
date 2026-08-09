#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    switch(1)
    {
        case 1:
            cout << "Addition = " << a + b << endl;
            cout << "Subtraction = " << a - b << endl;
            cout << "Multiplication = " << a * b << endl;
            cout << "Division = " << (float)a / b << endl;
            break;
    }

    return 0;
}