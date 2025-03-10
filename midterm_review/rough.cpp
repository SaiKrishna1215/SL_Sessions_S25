#include <iostream>

void changeVal(int);

int main() {
    int num1 = 10;
    changeVal(num1);
    std::cout << num1 << std::endl;
}

void changeVal(int num)
{
    num = 15;
}

