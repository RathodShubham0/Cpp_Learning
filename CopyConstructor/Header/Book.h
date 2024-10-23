#pragma once
#include <iostream>
using namespace std;

class Book {
private:
    char* title;
    string author;
    double price;

public:
     Book(const char* title, const string& author, double price);

    Book(const Book& other);
    ~Book();
     
    void display() const;
};
