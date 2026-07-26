#include<iostream>
using namespace std;
int main() {
    float r, area, circumference;
    cout<<"Enter r : ";
    cin>>r;

    area = 3.14 * r * r;
    cout<<"Area : "<<area<<endl;

    circumference = 2 * 3.14 * r;
    cout<<"Circumference : "<<circumference;
    return 0;
}
