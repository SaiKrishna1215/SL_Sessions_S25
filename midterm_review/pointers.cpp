#include <iostream>

void modifyNum(int* numPtr);

int main()
{
    int* numPtr = new int(9);
    modifyNum(numPtr);

    std::cout << *numPtr << std::endl;
}

void modifyNum(int* numPtr)
{
    // *numPtr++;
    (*numPtr)++;
}

