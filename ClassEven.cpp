#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void check()
    {
        if (n % 2 == 0)
            cout << n << " is an Even number." << endl;
        else
            cout << n << " is an Odd number." << endl;
    }
};

int main()
{
    Number n1;   // Creating object

    n1.getData();
    n1.check();

    return 0;
}