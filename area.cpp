#include<iostream>
using namespace std;
int main() {
    int a, b, area, perimeter;

    cout<<"Enter a : ";
    cin>>a;

    cout<<"Enter b : ";
    cin>>b;

    area = a * b;
    cout<<"Area : "<<area<<endl;

    perimeter = 2 * (a + b);
    cout<<"Perimeter : "<<perimeter;
    return 0;

}