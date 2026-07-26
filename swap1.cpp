#include<iostream>
int main() {
    int a, b;
    std::cout <<"Enter a : ";
    std::cin >>a;

    std::cout <<"Enter b : ";
    std::cin >>b;

    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "After Swapping :" <<std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b;

}