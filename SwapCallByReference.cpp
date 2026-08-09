#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapNumbers(a, b);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}