#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> num;

        cout << "Enter denominator: ";
        cin >> den;
    }

    Fraction add(Fraction f)
    {
        Fraction temp;

        temp.num = (num * f.den) + (f.num * den);
        temp.den = den * f.den;

        return temp;
    }

    Fraction subtract(Fraction f)
    {
        Fraction temp;

        temp.num = (num * f.den) - (f.num * den);
        temp.den = den * f.den;

        return temp;
    }

    void simplify()
    {
        int a = num;
        int b = den;

        while (b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }

        num = num / a;
        den = den / a;
    }

    void display()
    {
        simplify();
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, sub;

    cout << "Enter first fraction:" << endl;
    f1.accept();

    cout << "\nEnter second fraction:" << endl;
    f2.accept();

    sum = f1.add(f2);
    sub = f1.subtract(f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    sub.display();

    return 0;
}