#include "Book.h"

int main() {
    // Creating a book object
    Book book1("The C++ Programming Language", "Bjarne Stroustrup", 39.99);
    book1.display();

    // Creating a copy of book1 using the copy constructor
    Book book2 = book1;  // This will invoke the copy constructor
    book2.display();

    return 0;  // Destructor will be called automatically for both objects at the end of scope
}
