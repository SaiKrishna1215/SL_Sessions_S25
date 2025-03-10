#include <iostream>

int main()
{
    int numArray[] = {1, 2, 3, 4, 5, 6};

    int *arrPtr = numArray; // same as arrPtr = &numArray[0]
    
    // guess output for each
    std::cout << &numArray[0] << std::endl;
    std::cout << arrPtr << std::endl;
    std::cout << *arrPtr << std::endl;

    std::cout << *(arrPtr + 3) << std::endl;
    std::cout << *(arrPtr + 6) << std::endl;

    return 0;
}


