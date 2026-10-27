
#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid age! Age must be between 1 and 120.";
    }
};

class Person
{
    int age;

public:
    void setAge(int a)
    {
        if (a < 1 || a > 120)
        {
            throw InvalidAgeException();
        }

        age = a;
    }

    void display()
    {
        cout << "Person's age: " << age << endl;
    }
};

int main()
{
    Person p;
    int age;

    cout << "Enter age: ";
    cin >> age;

    try
    {
        p.setAge(age);
        p.display();
    }
    catch (const InvalidAgeException& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
