#include "Book.h"
#include <iostream>
    using std::cout;
    using std::endl;


void changeTitle(Book b)
{
    cout << b.getTitle() << endl;
    cout << &b << endl;
    b.setTitle("Harry Potter");
    cout << b.getTitle() << endl;
}

int main()
{
    Book book1 = Book("Book1", "John Doe", 150);
    cout << book1.getTitle() << endl;
    cout << &book1 << endl;
    changeTitle(book1);
    cout << book1.getTitle() << endl;
    return 0;
}