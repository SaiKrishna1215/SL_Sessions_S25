#include "Book.h"

Book::Book()
{
    title = "";
    author = "";
    numOfPages = 0;
}

Book::Book(std::string title, std::string aAuthor, int aNumOfPages)
{
    this->title = title;
    author = aAuthor;
    numOfPages = aNumOfPages;
}

void Book::setTitle(std::string aTitle){
    title = aTitle;
}

void Book::setAuthor(std::string aAuthor)
{
    author = aAuthor;
}

void Book::setNumOfPages(int aNumOfPages)
{
    numOfPages = aNumOfPages;
}

std::string Book::getTitle()
{
    return title;
}

std::string Book::getAuthor()
{
    return author;
}

int Book::getNumOfPages()
{
    return numOfPages;
}

