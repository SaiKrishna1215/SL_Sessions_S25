#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

class Library {
private:
    std::string name;
    std::string location;
    int numBooks;

public:
    // Constructors
    Library();
    Library(std::string libName, std::string libLocation, int books);

    // Getters
    std::string getName();
    std::string getLocation();
    int getNumBooks();

    // Setters
    void setName(std::string& newName);
    void setLocation(std::string& newLocation);
    void setNumBooks(int newCount);

    // Methods
    void addBooks(int count);
    void removeBooks(int count);
    void displayInfo();
};

#endif
