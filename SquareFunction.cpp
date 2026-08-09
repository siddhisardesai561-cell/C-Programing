#include <iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int main()
{
    int num, result;

    cout << "Enter a number: ";
    cin >> num;

    result = square(num);

    cout << "Square of " << num << " = " << result;

    return 0;
}