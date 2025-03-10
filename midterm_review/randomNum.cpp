#include <iostream>
#include <ctime>

int main()
{
    std::cout << rand() << std::endl;

    srand(time(NULL));
    std::cout << rand() << std::endl;

    // Generating in required range 
    // 0-100
    std::cout << rand()%101 << std::endl;

    // 10-50
    std::cout << (rand()%41)+10 << std::endl;

    // 3-95
    std::cout << (rand()%93)+3 << std::endl;
}