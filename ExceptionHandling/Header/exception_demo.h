#pragma once
 

#include <iostream>
#include <stdexcept>  // Standard exceptions
#include <string>
using namespace std;

 
class MyCustomException : public  exception {
private:
     string message;
public:
    explicit MyCustomException(const  string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

 
class ExceptionDemo {
public:
 
    ExceptionDemo() = default;
 
    void throwStandardException();
 
    void throwCustomException();
 
    void demonstrateHandling();
};

 

