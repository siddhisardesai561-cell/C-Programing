#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;   // Creating object

    s1.getData();
    s1.displayData();

    return 0;
}