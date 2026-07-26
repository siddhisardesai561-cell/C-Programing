// #include<iostream>
// using namespace std;

// int main() {
//     int a, b;
//     int temp;

//     cout << "Enter a : ";
//     cin >> a;

//     cout << "Enter b : ";
//     cin >> b;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "After Swapping :" << endl;
//     cout << "a : " << a << endl;
//     cout << "b : " << b;

//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int a, b;
    int temp;

    std::cout << "Enter a : ";
    std::cin >> a;

    std::cout << "Enter b : ";
    std::cin >> b;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After Swapping :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b;

    return 0;
}