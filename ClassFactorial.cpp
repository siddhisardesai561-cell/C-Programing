#include <iostream>
using namespace std;

class Factorial
{
    int n, fact;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void calculate()
    {
        fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }

    void display()
    {
        cout << "Factorial of " << n << " = " << fact << endl;
    }
};

int main()
{
    Factorial f1;   // Creating object

    f1.getData();
    f1.calculate();
    f1.display();

    return 0;
}