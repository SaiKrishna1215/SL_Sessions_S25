#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
    private:
        std::string title;
        std::string author;
        int numOfPages;

    public:
        // Constructor
        Book(std::string, std::string, int); // parameterized
        Book();

        // Setters
        void setTitle(std::string aTitle);
        void setAuthor(std::string aAuthor);
        void setNumOfPages(int aNumOfPages);

        // Getters
        std::string getTitle();
        std::string getAuthor();
        int getNumOfPages();

        // Addditional
        // float bookWeight();
};

#endif