#include "Library.h"
#include <iostream>
#include <iomanip>

// Default constructor
Library::Library() : name("Unnamed Library"), location("Unknown"), numBooks(0) {}

// Parameterized constructor
Library::Library(std::string libName, std::string libLocation, int books)
    : name(libName), location(libLocation), numBooks(books) {}

// Getters
std::string Library::getName() {
    return name;
}

std::string Library::getLocation() {
    return location;
}

int Library::getNumBooks() {
    return numBooks;
}

// Setters
void Library::setName(std::string& newName) {
    name = newName;
}

void Library::setLocation(std::string& newLocation) {
    location = newLocation;
}

void Library::setNumBooks(int newCount) {
    numBooks = newCount;
}

// Methods
void Library::addBooks(int count) {
    if (count > 0) {
        numBooks += count;
    }
}

void Library::removeBooks(int count) {
    if (count > 0 && count <= numBooks) {
        numBooks -= count;
    } else {
        std::cout << "Invalid book removal request!" << std::endl;
    }
}

void Library::displayInfo() {
    std::cout << std::setfill('-') << std::setw(40) << "-" << std::endl;
    std::cout << std::setfill(' ') << std::left;
    std::cout << std::setw(15) << "Library Name:" << std::right << std::setw(25) << name << std::endl;
    std::cout << std::left << std::setw(15) << "Location:" << std::right << std::setw(25) << location << std::endl;
    std::cout << std::left << std::setw(15) << "Books:" << std::right << std::setw(25) << numBooks << std::endl;
    std::cout << std::setfill('-') << std::setw(40) << "-" << std::endl;
}
