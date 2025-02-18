#include "Book.h"
#include <iostream>

int main()
{
    Book book1 = Book("Harry Potter 1", "JK Rowling", 350);

    std::cout << book1.getTitle() << std::endl;
}