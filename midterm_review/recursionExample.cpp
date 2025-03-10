#include <iostream>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

int fibonacci(int);

int main()
{
    int num = 10;
    std::cout << fibonacci(num) << std::endl;
}


int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}