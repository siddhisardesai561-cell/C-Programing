#include<iostream>
using namespace std;
class Employee;
{
int ID;
char name;
float salary;

public:
Employee()
{
empID = 0;
name = "Unknown";
salary = 0;
}
Employee(int id, char n, float s)
{
empID = id;
name = n;
salary = s;
}
Employee(const Employee &e)
{
empID = e.empID;
name = e.name;
salary = e.salary;
}
void display()
{
cout << "Employee ID: " << empID << endl;
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
}
};
int main()
{
Employee e1;
cout << "Default Constructor: " << endl;
e1.display();
Employee e2(18, "Siddhi",500000);
cout << "Parameterized Constructor: " << endl;
e2.display();
Employee e3(e2);
cout << "Copy Constructor: " << endl;
e3. display();

return 0;
}

