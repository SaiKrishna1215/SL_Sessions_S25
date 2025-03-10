#include <iostream>
#include "Library.h"

int main() {
    // Using default constructor
    Library lib1;
    lib1.displayInfo();

    std::cout << "\n";

    // Using parameterized constructor
    Library lib2("City Library", "Downtown", 5000);
    lib2.displayInfo();

    std::cout << "\nAdding 300 books to City Library...\n";
    lib2.addBooks(300);
    lib2.displayInfo();

    std::cout << "\nRemoving 200 books from City Library...\n";
    lib2.removeBooks(200);
    lib2.displayInfo();

    return 0;
}
