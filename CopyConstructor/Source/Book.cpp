#include "Book.h"
#include <cstring>

// Constructor
Book::Book(const char* t, const string& a, double p) : author(a), price(p) {
    title = new char[strlen(t) + 1]; // Allocate memory for title  
    std::copy(t, t + strlen(t) + 1, title);   // Copy title into allocated memory
}

// Copy Constructor (Deep copy)
Book::Book(const Book& other) : author(other.author), price(other.price) {
    title = new char[strlen(other.title) + 1];  // Allocate memory for new title
    this->title = other.title;  // Copy content of the title
    cout << "Copy constructor called!" << endl;
}

// Destructor
Book::~Book() {
    delete[] title;  // Free the dynamically allocated memory
    cout << "Destructor called, memory freed!" << endl;
}

// Function to display book details
void Book::display() const {
    cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
}
