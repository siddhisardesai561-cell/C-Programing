#include<iostream>
#include<string>
using namespace std;
class Product
{
int productID;
char name;
float price;
public:
product()
{
productID = 0;
name = "Unknown";
price = 0;
}
product(int id, char n, float p)
{
productID = id;
name = n;
price = p;
}
void display()
{
cout << "Product ID: " << productID << endl;
cout << "Name: " << name << endl;
cout << "Price: " << price << endl;
}
};
int main()
{
Product p1;
cout << "Default Constructor: " << endl;
p1.display();
Product p2(101, "Laptop", 55000);
cout << "Parameterized Constructor: " << endl;
p2.display();
Product p3(102, "Mobile", 25000);
cout << "Another Product: " << endl;
p3.display();
return 0;
}
