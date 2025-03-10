#include <iostream>
#include <vector>
#include "Library.h"

int main()
{
    Library* libPtr = new Library("City Library", "Downtown", 5000);

    libPtr->displayInfo();

    delete libPtr;
    libPtr = nullptr;


    std::cout << std::endl;


    std::vector<Library*> libPtrs;

    for (int i = 0; i < 5; i++)
    {
        libPtrs.push_back(new Library());
    }

    for (auto libPtr : libPtrs) 
    {
        libPtr->displayInfo();
        std::cout << std::endl;
    }

    for (auto libPtr : libPtrs) 
    {
        delete libPtr;
        libPtr = nullptr;
    }

    return 0;
}