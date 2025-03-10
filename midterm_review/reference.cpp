#include <iostream>

void setX(int& y)
{
    // y = 15
    std::cout << "Value of x: " << y << std::endl;
    std::cout << "Address of x: " << &y << std::endl;
    y = 10;
    // y=10
}


int main(){
    int x = 15;
    // x = 15
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    setX(x);
    // x = 15
    std::cout << "Value of x: " << x << std::endl;
    return 0;
}